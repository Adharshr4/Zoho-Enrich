#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,num,base,a[1000],dupnum,k=0;
    scanf("%d %d",&num,&base);
    dupnum=num;
    while(dupnum>0)
    {
        a[k++]=dupnum%base;
        dupnum=dupnum/base;
    }
    for(i=k-1;i>=0;i--)
    {
        if(a[i]>=10)
        {
            printf("%c",a[i]-10+65);
        }
        else
        {
            printf("%c",a[i]+48);
        }
    }
}
