#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/syscalls.h>

#include "get_cachestate.h"

asmlinkage long sys_get_cachestate(void) {
	printk(KERN_DEBUG "Hello from sys_get_cachestate, home at 0x%x\n", 
		(unsigned int)sys_get_cachestate);
	return 0;
}