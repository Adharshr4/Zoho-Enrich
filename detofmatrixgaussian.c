#include<stdio.h>
#include <stdlib.h>

int main()
{
    float divid,deter=1.0;
    int i,j,r,c,row,colcount;
    scanf("%d",&r);
    if(r<=0)
    {
        printf("Enter a positive number");
        return 0;
    }
    float a[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    
    for(colcount=0;colcount<r-1;colcount++)
    {
        for(i=colcount+1;i<r;i++)
        {
            divid=a[i][colcount]/a[colcount][colcount];
            for(j=0;j<r;j++)
            {
                a[i][j]=a[i][j]-(a[colcount][j]*divid);
            }
        }
    }
    for(i=0;i<r;i++)
    {
        deter=deter*a[i][i];
    }
    printf("%.0f",deter);
}
