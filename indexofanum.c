#include<stdio.h>
#include <stdlib.h>

int main()
{
    int numtofind,index=0,arr;
    scanf("%d\n",&numtofind);
    while(scanf("%d ",&arr)>0)
    {
        if(numtofind==arr)
        {
            printf("%d",index);
            exit(0);
        }
        index++;
    }
    printf("-1");
}
