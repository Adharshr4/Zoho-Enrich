#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100][100];
    int i,j,k=0,arr[100],t,sum,l;
    while(scanf("%s",a[k])>0)
    {
        sum=a[k][0]-'0';
        for(i=0;i<strlen(a[k])-1;i++)
        {
            sum=sum*10+(a[k][i+1]-'0');
        }
        arr[k]=sum;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
}
