#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    pid_t p1,p2;
    p1 = fork();
    p2 = fork();
    printf("Various waiting process:\n");
    if(p1>0 && p2>0)
    {
        wait(NULL);
        wait(NULL);
        printf("Only parent Process\n");
    }
    else if(p1==0 && p2>0)
    {
        sleep(1);
        printf("only child 1 process\n");
    }
    else if(p1>0 && p2==0)
    {
        sleep(1);
        printf("Only child 2 process\n");
    }
    else
    {
        printf("nothing");
    }
    return 0;
}