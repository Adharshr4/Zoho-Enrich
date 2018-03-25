/* Non Palindromic Words
Ex Input:  Today madam came to the class
output:Today came to the class

Ex Input:malayalam ere
output:-1 */
#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100][100],b[100];
    int i,k=0,flag=0;
    while(scanf("%s ",a[k])>0)
    {
        k++;
    }
    for(i=0;i<k;i++)
    {
        strcpy(b,a[i]);
        if(isPalindrome(b,a[i]))
        {
            printf("%s ",b);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
int isPalindrome(char ch[],char ch1[])
{
    int count=0,i,j,last=strlen(ch)-1,first=0;
    for(i=last;i>=0;i--)
    {
        if(ch[first]==ch1[i])
        {
            count++;
        }
        first++;
    }
    if(count==strlen(ch))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
