#include <linux/module.h>
#include <linux/printk.h>

int init_module(void){
    pr_info("Hello, world.");
    return 0;
}

void cleanup_module(void){
    pr_info("Goodbye, world.");
}

MODULE_LICENSE("GPL")