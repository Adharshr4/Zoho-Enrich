/*Write a program to print the occurrences of vowels present in the given string. 

Ex: 
Input 
String : RMK Engg College 
Output 
e --> 3 
0 --> 1*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1000],i,j,vowels[]={'a','e','i','o','u'};
    int vow[]={0,0,0,0,0};
    fgets(a,1000,stdin);
    for(i=0;i<strlen(a);i++)
    {
        if(tolower(a[i])=='a')
        {
            vow[0]+=1;
        }
        else if(tolower(a[i])=='e')
        {
            vow[1]+=1;
        }
        else if(tolower(a[i])=='i')
        {
            vow[2]+=1;
        }
        else if(tolower(a[i])=='o')
        {
            vow[3]+=1;
        }
        else if(tolower(a[i])=='u')
        {
            vow[4]+=1;
        }
    }
    for(i=0;i<5;i++)
    {
        if(vow[i]>=1)
        {
            printf("%c-->%d\n",vowels[i],vow[i]);
        }
    }
}
