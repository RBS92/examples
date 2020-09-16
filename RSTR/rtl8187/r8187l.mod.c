#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa8c16cf3, "module_layout" },
	{ 0x402b8281, "__request_module" },
	{ 0x352091e6, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xc996d097, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xc5ac94d0, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb10d2a48, "netif_carrier_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf89843f9, "schedule_work" },
	{ 0xbf2ae0f, "netif_carrier_off" },
	{ 0xc1e2a8ff, "usb_kill_urb" },
	{ 0x6f2e6f37, "remove_proc_entry" },
	{ 0x26576139, "queue_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe43f6a80, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbe2ed7d2, "__netdev_alloc_skb" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x562b9321, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x1072a394, "csum_partial_copy_from_user" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6b3c99ec, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x60b71cbb, "wireless_send_event" },
	{ 0xab394b6d, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0x848dad9c, "skb_push" },
	{ 0x802d0e93, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x68aca4ad, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0xac28405, "skb_pull" },
	{ 0xba882301, "init_net" },
	{ 0x8f96f86d, "dev_kfree_skb_any" },
	{ 0xf91e5126, "module_put" },
	{ 0x29e696a8, "usb_submit_urb" },
	{ 0xa916b694, "strnlen" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xf5373238, "eth_type_trans" },
	{ 0xabe118cf, "call_usermodehelper_fns" },
	{ 0xe14c7f08, "crypto_destroy_tfm" },
	{ 0x77ba54e8, "create_proc_entry" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x783c7933, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb6244511, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce902d1, "dev_alloc_name" },
	{ 0x71e3cecb, "up" },
	{ 0xdeb87602, "usb_register_driver" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb9b3502f, "skb_put" },
	{ 0x46d9f6ef, "crypto_alloc_base" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x70c55916, "dev_get_drvdata" },
	{ 0x316eae64, "usb_free_urb" },
	{ 0x57c4691b, "queue_delayed_work" },
	{ 0xfed54737, "try_module_get" },
	{ 0xb93b2d19, "usb_alloc_urb" },
	{ 0x20ac9778, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "633A31CB2EFF00383FC01BC");
