%% Simulation
clear all
reps=100000;

lambda = 1; % mean arrival rate per symbol
rxLen = 66; % length of reference frame given in reference symbols
intLen = 3; % length of interfering frame given in reference symbols

% **generate and count the number of ongoing transmissions in each symbol
k = poissrnd(lambda,reps,intLen+rxLen);
for i = 1:rxLen
    nOn(:,i) = sum(k(:,i:i+intLen),2);
end
% **specify the domain of interst (heuristic)
x = floor(lambda*(rxLen+intLen)/4):max(max(ceil(lambda*(rxLen+intLen)*2)),10);
x2 = 0:max(ceil(lambda*(rxLen+intLen)*3),10);

% **bin the maximum number of ongoing transmissions for each trial
[y1,~]=hist(max(nOn,[],2),0:max(x2));

%% Analysis
k = poisspdf(0:max(x),lambda*1);
s = poisspdf(0:max(x),lambda*(intLen+1));
s_k = poisspdf(0:max(x),lambda*(intLen));
f = poisspdf(0:max(x),lambda*(intLen+rxLen));
f_s_k = poisspdf(0:max(x),lambda*(rxLen-2));

% **Calculation of the conditional: e = the probability of X ongoing txs in
% **symbol i+1 given Y ongoing txs in symbol i.
clear c e
e = zeros(max(x)+1,max(x)+1);
for s1 = 0:max(x)
    for k1 = 0:s1
        for k2 = 0:max(x)-s1
            e(s1-k1+k2+1,s1+1) = e(s1-k1+k2+1,s1+1) + k(k1+1)*s_k(s1-k1+1)*k(k2+1)/(s(s1+1))*(1-sum(f_s_k(1:(s1+k2+1))));%*sum(f_s_k(s1+k2+1:end))/(sum(pf(s1+k2+1:end)));
        end
    end
end
% **handle numerical evaluation of statistically improbable events
e(isnan(e))=0;
e = e./sum(e);
e(isnan(e))=0;

% **calculate the CMF of the maximal number of ongoing transmissions doing 
% **any symbol of the reference tx:
buf3= cumsum(s).^1.*(s*(cumsum(e).^(rxLen-1))');
% buf3= cumsum(s).^1.*(s*(cumsum(e).^(rxLen*intLen))');
y = [buf3(1),diff(buf3)]; % <- PMF

%% Post processing
figure
asd = y1./sum(y1); %normalize sim count
plot(x2(1:end),asd)
hold on
plot((0:max(x)),y(1:end)/max(y)*max(asd))

% we plot the 'naive' solution as well, to show how far off it is.
y3 = poisspdf(0:max(x),(lambda*(intLen+rxLen)));
plot(0:max(x),y3/max(y3)*max(asd))

legend('sim_{max}','ana_{max}','ana_{total}')
title(['rxLen=',num2str(rxLen),' intLen=',num2str(intLen)])
