#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100][100],temp[100];
    int i,k=0,j;
    while(scanf("%s",a[k])>0)
    {
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if ( (strcmp(a[i],a[j])>0 && strlen(a[i])==strlen(a[j]) )  || (strlen(a[i])>strlen(a[j]) ) )
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%s ",a[i]);
    }
}
