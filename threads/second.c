#include <rtthread.h>

static void second_entry(void* parameter)
{
    int count = 0;

    while (1)
    {
        rt_kprintf("count => %d\n", count ++);
        rt_thread_mdelay(1000);
    }

    return ;
}

int second(int argc, char** argv)
{
    rt_thread_t tid;

    tid = rt_thread_create("second", second_entry, RT_NULL, 
        1024, 20, 20);
    if (tid) rt_thread_startup(tid);

    return 0;
}
MSH_CMD_EXPORT(second, start second thread);
