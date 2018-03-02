#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int num,length,j,nooftimes,arr[100],pos,temp,temp1,c=0;
    scanf("%ld\n%ld",&num,&nooftimes);
    temp=num;temp1=num;
    while(temp1>0)
    {
        c++;
        temp1=temp1/10;
    } 
    length=c;
    c--;
    while(temp>0)
    {
        arr[c--]=temp%10;
        temp=temp/10;
    }
    pos=nooftimes%length;
    for(j=pos;j<length;j++)
    {
        printf("%ld",arr[j]);
    }
    for(j=0;j<pos;j++)
    {
        printf("%ld",arr[j]);
    }
}
