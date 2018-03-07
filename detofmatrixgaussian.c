#include<stdio.h>
#include <stdlib.h>

int main()
{
    float divid;
    int i,j,r,c,row,colcount,deter=1;
    scanf("%d",&r);
    float a[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(colcount=0;colcount<c-1;colcount++)
    {
        for(i=colcount+1;i<r;i++)
        {
            divid=a[i][colcount]/a[colcount][colcount];
            for(j=colcount;j<r;j++)
            {
                a[i][j]=a[i][j]-(a[colcount][j]*divid);
            }
        }
    }
    for(i=0;i<r;i++)
    {
        deter=deter*a[i][i];
    }
    printf("%d",deter);
}
