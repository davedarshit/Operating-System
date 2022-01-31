#include<stdio.h>
#include<stdlib.h>

int main()
{
    int j,i,proc,flag=0,n,que[15],max=0,trt[20],req[100],pf=-1;
  
    printf("Enter no. of blocks\n");
    scanf("%d",&n);

    printf("Enter size of each block\n");
    for(i=0; i<n;i++)
    {
        scanf("%d",&que[i]);
        trt[i]=-1;
    }
    printf("Enter number of process\n");
    scanf("%d",&proc);
    for(i=0; i<proc;i++)
    {
        scanf("%d",&req[i]);
    }
    printf("\nProc no\t\tproc size\t\tblock size\t\tblock no\t\t\n");
    for(i=0; i<proc;i++)
    {
        printf("%d\t\t%d\t\t",i+1,req[i]);
        max = -1;
        for(j=0; j<n;j++)
        {
            
            if(trt[j]==-1 && (que[j]>max) && (que[j]>=req[i]))
            {
                
                max = que[j];
                pf = j;
            }
        }
        if(pf==-1)
        {
            printf("memory not allocated\n");
        }
        else
        {
            trt[pf]=i;
            printf("%d\t\t\t%d\n",max,pf+1);
            pf=-1;
        }
    }
    return 0;

}