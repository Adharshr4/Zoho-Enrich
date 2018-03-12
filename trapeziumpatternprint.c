/*trapezium pattern printing
input:4
output:

1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11   */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=1,p,dashcount=0,numcount,secondnumcount,p1;
    scanf("%d",&n);
    numcount=n;
    secondnumcount=n-1;
    p=(n*n)+1;
    p1=p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<dashcount;j++)
       {
           printf("-");
       }
       for(j=0;j<numcount;j++)
       {
           printf("%d*",k++);
       }
       for(j=0;j<secondnumcount;j++)
       {
          printf("%d*",p++);
       }
       printf("%d",p);
       numcount--;;
       dashcount+=2;
       p1=p1-secondnumcount;
       p=p1;
       secondnumcount--;
       printf("\n");
    }
}
