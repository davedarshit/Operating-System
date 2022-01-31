#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n, i, qt, count = 0, temp, sq = 0, bt[10], wt[10], tat[10], rem_bt[10];
      float awt = 0, atat = 0;
      printf("Enter number of process\n");
      scanf("%d", &n);
      printf("Enter burst time of each process\n");
      for (i = 0; i < n; i++)
      {
            scanf("%d", &bt[i]);
            rem_bt[i] = bt[i];
      }
      printf("Enter quantum time\n");
      scanf("%d", &qt);
      while (1)
      {
            for (i = 0, count = 0; i < n; i++)
            {
                  temp = qt;
                  if (rem_bt[i] == 0)
                  {
                        count++;
                        continue;
                  }
                  if (rem_bt[i] > qt)
                  {
                        rem_bt[i] = rem_bt[i] - qt;
                  }
                  else
                  {
                        if (rem_bt[i] >= 0)
                        {
                              temp = rem_bt[i];
                              rem_bt[i] = 0;
                        }                       
                  }
                  sq = sq + temp;
                  tat[i] = sq;
            }
            if (n == count)
                  break;
      }
      printf("\nprocess\tburst time\twaiting time\tturn around time\n");
      for (i = 0; i < n; i++)
      {
            wt[i] = tat[i] - bt[i];
            awt += wt[i];
            atat += tat[i];
            printf("\n%d\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);
      }
      awt = awt / n;
      atat = atat / n;
      printf("\nAverage waiting time = %f\n", awt);
      printf("Average turn around time = %f", atat);
      return 0;
}