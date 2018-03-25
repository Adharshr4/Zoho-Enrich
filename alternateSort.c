#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,t,f=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]<a[j] && f==1) || (a[i]>a[j] && f==0))
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        f=!f;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
