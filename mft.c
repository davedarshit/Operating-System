#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ms,bs,nob,ef,n,mp[10],tif=0;
    int i,p=0;
    printf("Enter total memory available\n");
    scanf("%d",&ms);
    printf("Enter block size\n");
    scanf("%d",&bs);
    nob = ms/bs;
    ef = ms - nob*bs;
    printf("Enter the number of process\n");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        printf("Enter memory required for process %d\n",i+1);
        scanf("%d",&mp[i]);
    }
    for(i=0,p=0; i<n && p<nob; i++)
    {
        if(mp[i]>bs)
        {
            printf("For %d process--> NO %d external fragmentation\n",i+1,mp[i]-bs);
            ef = ef + mp[i]-bs;
        }
        else{
            printf("For %d process--> YES %d internal fragmentation\n",i+1,bs-mp[i]);
            tif = tif + bs - mp[i];
            p++;
        }
    }
    printf("Total internal fragmentation = %d\n",tif);
    printf("Total external fragmentation = %d\n",ef);
    return 0;


}