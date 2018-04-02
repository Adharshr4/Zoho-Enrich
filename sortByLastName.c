/*Sort the n strings based on its last name... last name will be unique
Input:
6
Arul prakash
Banu Govind
Syed siraj
John Joshua
Dhanraj Pilay
Bhagat Singh

Output:
Banu Govind
John Joshua
Dhanraj Pilay
Arul prakash
Bhagat Singh
Syed siraj   */

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,j;
    char first[100][100],last[100][100],temp[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s",first[i],last[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(last[i],last[j])>0)
            {
                strcpy(temp,last[i]);
                strcpy(last[i],last[j]);
                strcpy(last[j],temp);
                strcpy(temp,first[i]);
                strcpy(first[i],first[j]);
                strcpy(first[j],temp);
            }
        }
        printf("%s %s\n",first[i],last[i]);
    }
}
