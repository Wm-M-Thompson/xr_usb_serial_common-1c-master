#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe49bb82b, "module_layout" },
	{ 0xbe315fae, "usb_deregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x2da2919, "tty_driver_kref_put" },
	{ 0xdd50a3c7, "tty_unregister_driver" },
	{ 0xdc322226, "usb_register_driver" },
	{ 0x83a624a4, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xddcc3baa, "__tty_alloc_driver" },
	{ 0x685e233f, "tty_port_register_device" },
	{ 0x7e037c0a, "usb_get_intf" },
	{ 0x9bfaeefc, "usb_driver_claim_interface" },
	{ 0xca3d15a5, "_dev_info" },
	{ 0x5595708b, "_dev_warn" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc7cf064b, "device_create_file" },
	{ 0x13ae3b97, "usb_alloc_urb" },
	{ 0x3b0e7fef, "usb_alloc_coherent" },
	{ 0xa1e38018, "tty_port_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4fa7ffa, "usb_ifnum_to_if" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdd0dacd3, "tty_port_open" },
	{ 0xf8ba3fe6, "usb_autopm_put_interface" },
	{ 0x946eba71, "usb_autopm_get_interface" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x60f64c0d, "kmem_cache_alloc_trace" },
	{ 0x3703b5ff, "kmalloc_caches" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4f5aee3b, "pv_ops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xacc2c347, "usb_driver_release_interface" },
	{ 0x1236d111, "usb_free_coherent" },
	{ 0xde111a56, "usb_free_urb" },
	{ 0xcaab06f3, "tty_unregister_device" },
	{ 0xa09fe52f, "tty_kref_put" },
	{ 0x1b427ea4, "tty_vhangup" },
	{ 0xa75dc519, "tty_port_tty_get" },
	{ 0xef8f78c0, "device_remove_file" },
	{ 0xb63e7b74, "tty_insert_flip_string_fixed_flag" },
	{ 0xa5b8d527, "tty_flip_buffer_push" },
	{ 0xb5f15f1e, "__tty_insert_flip_char" },
	{ 0x37a0cba, "kfree" },
	{ 0x59322e45, "usb_put_intf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7d9348a5, "tty_standard_install" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xf4ef6816, "tty_port_close" },
	{ 0xe7cd80c5, "usb_autopm_get_interface_async" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfee81c5b, "tty_port_hangup" },
	{ 0xddab94f7, "tty_port_tty_wakeup" },
	{ 0xbf170516, "tty_port_tty_hangup" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xea815388, "tty_port_put" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xdb89f24d, "usb_kill_urb" },
	{ 0x76538556, "usb_autopm_put_interface_async" },
	{ 0x63b28712, "_dev_err" },
	{ 0x4586fc80, "usb_submit_urb" },
	{ 0x37669c31, "__dynamic_dev_dbg" },
	{ 0x1030e2bd, "usb_control_msg" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04E2p1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1422d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C59185E968EA1AA06A534FB");
