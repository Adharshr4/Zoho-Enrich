/* Program to print most occuring character . Priority is to be given to the first most occuring character
Input:
onechar
Output:
o

Input:
mississippi
Output:
s  */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000],charArray[1000],tempchar,actualString[1000],finalAnsChar;
    int countArray[1000],mainCount=0,actualCount=-1;
    int i,j,count=1,counter=0,t;
    scanf("%s",s);
    strcpy(actualString,s);
    for(i=0;i<strlen(s);i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j]&&s[j]>=97&&s[j]<=122)
            {
                count++;
                s[j]='*';
            }
        }
        if(s[i]>=97&&s[i]<=122)
        {
            charArray[counter]=s[i];
            countArray[counter++]=count;
        }
        count=1;
    }
    for(i=0;i<counter;i++)
    {
        for(j=i+1;j<counter;j++)
        {
            if(countArray[i]<countArray[j])
            {
                t=countArray[i];
                countArray[i]=countArray[j];
                countArray[j]=t;
                tempchar=charArray[i];
                charArray[i]=charArray[j];
                charArray[j]=tempchar;
            }
        }
    }
    for(i=0;i<counter;i++)
    {
        for(j=strlen(s)-1;j>=0;j--)
        {
            if(charArray[i]==actualString[j])
            {
                if(mainCount>actualCount)
                {
                    actualCount=mainCount;
                    finalAnsChar=charArray[i];
                }
                break;
            }
            else
            {
                mainCount++;
            }
        }
        mainCount=0;
        if(countArray[i]!=countArray[i+1])
        {
            break;
        }
    }
    printf("%c",finalAnsChar);
}
