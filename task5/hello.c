// SPDX-License-Identifier: GPL-2.0-or-later

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("jammiboi");
MODULE_DESCRIPTION("my first module, my worst module");

static int __init hello_init(void)
{
	pr_info("Hello, world.\n");
	return 0;
}

static void __exit hello_cleanup(void)
{
	pr_info("Goodbye, world.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
