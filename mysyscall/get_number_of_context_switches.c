#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/uaccess.h>
#include <linux/init_task.h>
#include <linux/syscalls.h>


SYSCALL_DEFINE1(get_number_of_context_switches, unsigned int*, count) {
    return -copy_to_user(&(current->cs_count), count, sizeof(unsigned int));
}