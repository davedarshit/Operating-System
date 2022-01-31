#include<stdio.h>
#include<unistd.h>

int main()
{
    int p_id,pp_id;
    p_id = getpid();
    pp_id = getppid();
    printf("Process ID: %d\n",p_id);
    printf("Parent Process ID: %d",pp_id);
    return 0;
}