/* Write a program to find the longest unique substring of a given string. 
This program is based on alphabetical order ( the question u posted previosuly )
Ex: 
Input: 
abacdefb 

Output: 
acdef 

Input:
adharsh

Output:
ars
adh*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l,dupl,f=0,k,j;
    scanf("%s",a);
    l=strlen(a);
    subsetString(a,l);
}
void subsetString(char s[],int length)
{
    int f=0,i,j,k,max=-1,included[1000],inccoun=0,midDifference;
    for(int icounter=0;icounter<strlen(s);icounter++)
    {
        for(i=0;i<length;i++)
        {
            k=i;
            for(j=i+1;j<length;j++)
            {
                if(s[k++]>=s[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                if(abs(i-(length-1))>=max)
                {
                    max=abs(i-(length-1));
                    included[inccoun++]=i;
                    included[inccoun++]=length-1;
                    midDifference=abs(i-(length-1));
                }
            }
            f=0;
        }
        length--;
    }
    print(included,inccoun,midDifference,s);
}
void print(int included[],int inccoun,int mid,char str[])  //If there are more than one strings of same length
{
    int f=0;
    for(int m=0;m<inccoun;m=m+2)
    {
        if(abs(included[m]-included[m+1])==mid&&str[included[m]]!=str[included[m+1]])
        {
            f=1;
            for(int start=included[m];start<=included[m+1];start++)
            {
                printf("%c",str[start]);
            }
             printf("\n");
        }
    }
    if(f==0)
    {
        printf("%c",str[0]);
    }
}
