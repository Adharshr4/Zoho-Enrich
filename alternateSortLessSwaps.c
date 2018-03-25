#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,t,f=1,mpos,sig=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        mpos=i;
        for(j=i+1;j<n;j++)
        {
            if(comparator(a[mpos],a[j])==sig)
            {
                mpos=j;
            }
        }
        t=a[i];
        a[i]=a[mpos];
        a[mpos]=t;
        sig=sig*(-1);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
int comparator(int a,int b)
{
    if(a<b)
    {
        return 1;
    }
    if(a==b)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
