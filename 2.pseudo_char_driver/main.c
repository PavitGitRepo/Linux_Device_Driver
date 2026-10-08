#include<linux/module.h>
#include<linux/fs.h>
#include<linux/cdev.h>


#define DEV_BUFF_SIZE 512

/*Device BUffer*/
char dev_buffer[DEV_BUFF_SIZE];

dev_t dev_num;

struct cdev pcd_cdev;

struct file_operations pcd_fops;

static int __init pcd_driver_init(void)
{
	alloc_chrdev_region(&dev_num, 0, 1, "pcd");

	cdev_init(&pcd_cdev, &pcd_fops);

	cdev_add(&pcd_cdev, dev_num, 1);

	
	return 0;
}


static void __exit pcd_driver_exit(void)
{

}



module_init(pcd_driver_init);
module_exit(pcd_driver_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("KIRAN");
MODULE_DESCRIPTION("A pseudo character driver");
