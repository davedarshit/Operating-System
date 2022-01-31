#include<stdio.h>
#include<stdlib.h>

int tph, philname[20],  howhung, hu[20], cho;
int main()
{
    int i;
    
    printf("\n\nDINING PHILOSOPHER PROBLEM");
    printf("\nEnter the total no. of philosophers: ");
    scanf("%d", &tph);
    for (i = 0; i < tph; i++)
    {
        philname[i] = i;
        
    }
    printf("How many are hungry : ");
    scanf("%d", &howhung);
    if (howhung == tph)
    {
        printf("\nAll are hungry..\nDead lock stage will occur");
        printf("\nExiting..");
    }
    else
    {
        for (i = 0; i < howhung; i++)
        {
            printf("Enter philosopher %d position: ", (i + 1));
            scanf("%d", &hu[i]);
         
        }
        one();
             
    }
    return 0;
}
void one()
{
    int pos = 0, x, i;
    printf("\nAllow one philosopher to eat at any time\n");
    for (i = 0; i < howhung; i++, pos++)
    {
        printf("\nP %d is granted to eat", philname[hu[pos]]);
        for (x = pos+1; x < howhung; x++)
            printf("\nP %d is waiting", philname[hu[x]]);
    }
}