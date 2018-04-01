/*Write a program to find the longest unique substring of a given string. 

Ex: 
Input: 
abacdefb 

Output: 
acdef */

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
    int f=0,i,j,k,start=0,end=0,max=-1;
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
                if(abs(i-(length-1))>max)
                {
                    max=abs(i-(length-1));
                    start=i;
                    end=length-1;
                }
            }
            f=0;
        }
        length--;
    }
    print(start,end,s);
}
void print(int initial,int final,char str[])  //To build the characters as a string and then printing
{
    char result[100];
    int count=0;
    for(int m=initial;m<=final;m++)
    { 
        result[count++]=str[m];  
    }
    printf("%s",result);
}
