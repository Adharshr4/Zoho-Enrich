/*Write a program to print the number of occurrences of each number in a given array that contains the positive numbers 
Ex: 
Input 
Array : [2, 0, 1, 2, 5, 1] 
Output 
2 --> 2 
0 --> 1 
1 --> 2 
5 --> 1*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],i,k=0,j,count=1;
    while(scanf("%d",&a[k])>=0)
    {
        k++;
    }
    for(i=0;i<k;i++)
    {
        if(a[i]>=0)
        {
            for(j=i+1;j<k;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
            }
            printf("%d-->%d\n",a[i],count);
            count=1;
        }
    }
}
