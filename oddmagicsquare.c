#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=0,k=2,p,rowc,colc;
    scanf("%d",&n);
    int a[100][100]={0},j=n/2;
    a[i][j]=1;
    while(k<=n*n)
    {
        rowc=(i-1+n)%n;
        colc=(j+1+n)%n;
        if(a[rowc][colc]==0)
        {
            a[rowc][colc]=k++;
            i=rowc;
            j=colc;
        }
        else if(a[i][j]!=0)
        {
            i++;
            a[i][j]=k++;
        }
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
            printf("%d\t",a[i][j]);
       }
        printf("\n");
    }
}
