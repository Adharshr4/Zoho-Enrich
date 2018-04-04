/* To print Nth number in the number system which contains only of the given digits
given n1,n2,n
Input:
3
4
2
Output:
43
Input:
5
0
4
Output:
550
Input:
1
0
99
Output:
1101001  */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int d1,d2,i,j,n,k=0,arr[1000000];
    scanf("%ld\n%ld\n%ld",&d1,&d2,&n);
    long int a[30]={0};
    long int count=0,f=0,f1=0,f2=0,num;
    for(i=0;i<10000000;i++,count=0,f=0,f1=0,f2=0)
    {
        num=i;
        while(num>0)
        {
            a[count++]=num%10;
            num=num/10;
        }
        for(j=0;j<count;j++)
        {
            if(a[j]==d1)
            {
                f=1;
            }
            if(a[j]==d2)
            {
                f1=1;
            }
            if(a[j]!=d1&&a[j]!=d2)
            {
                f2=1;
            }
        }
        if(f==1&&f1==1&&f2==0)
        {
            arr[k++]=i;
        }
    }
    printf("%ld ",arr[n-1]);
}
