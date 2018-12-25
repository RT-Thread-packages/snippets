#include <rtthread.h>
#include <stdio.h>

int libc_print(void)
{
    printf("libc print test\n");
    printf("  int: %d - %d - %d\n", 1000, 100, 10);
    printf("float: %f - %f - %f\n", 0.01, 0.001, 0.0001);

    return 0;
}
MSH_CMD_EXPORT(libc_print, libc print test);
