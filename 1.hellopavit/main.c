#include <linux/module.h>

static int __init hellopavit_init(void)
{
	pr_info("Hello Pavit\n");
	return 0;
}

static void __exit hellopavit_cleanup(void)
{
	pr_info("Good Bye Pavit\n");
}


module_init(hellopavit_init);
module_exit(hellopavit_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Pavit");
MODULE_DESCRIPTION("A simple hello pavit module to start");
MODULE_INFO(board,"Raspberry pi 3 model A+");
