#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j=0,l,k=0,powervalue,count,start,p=0,signcount=0,nacount=0,s=0,resultarray[100];
    char eqn[100],sign[10],variablecount;
    scanf("%s",eqn);
    for(i=0;i<strlen(eqn);i++)
    {
        if((eqn[i]>=65 && eqn[i]<=90) || (eqn[i]>=97 && eqn[i]<=122))
        {
            variablecount++;
        }
        if(eqn[i]=='*'||eqn[i]=='+'||eqn[i]=='^'||eqn[i]=='&'||eqn[i]=='v')
        {
            sign[signcount++]=eqn[i];
        }
    }
    l=variablecount;
    powervalue=pow(2,l);
    int a[100][100];
    for(i=0;i<l;i++,k=0,count=0)  //assignigin values for all the variables given
    {
        while(count<pow(2,l))
        {
            p=0;
            for(j=0;j<powervalue/2;j++)
            {
                a[k++][i]=p;
                count++;
            }
            p=1;
            for(j=0;j<powervalue/2;j++)
            {
                a[k++][i]=p;
                count++;
            }
        }
        powervalue=powervalue/2;
    }
    for(i=0;i<pow(2,l);i++)
    {
        resultarray[i]=a[i][0]; //assigning first column to a array
    }
    for(int m=0;m<signcount;m++) //computing for all operators...paranthesis is omitted
    {
        if(sign[m]=='+'||eqn[i]=='v')
        {
            for(i=0;i<pow(2,l);i++)
            {
                resultarray[i]=resultarray[i]|a[i][m+1];
            }
        }
        else if(sign[m]=='*'||eqn[i]=='&')
        {
            for(i=0;i<pow(2,l);i++)
            {
                resultarray[i]=resultarray[i]&a[i][m+1];
            }
        }
        else if(sign[m]=='^')
        {
            for(i=0;i<pow(2,l);i++)
            {
                resultarray[i]=resultarray[i]^a[i][m+1];
            }
        }
    }
    for(i=0;i<pow(2,l);i++)  //printing the result
    {
        for(j=0;j<l;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("--->%d",resultarray[i]);
        printf("\n");
    }
}
