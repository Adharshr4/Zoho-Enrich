/* input : 
5
1 2 3 4 5

Output:
3

Explanation:
1 2 3 4 5
 3 5 7 9
  8 12 16
   20 28
    48
48 is not single digit,so
4+8=12
and finally,1+2=3 is the output*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,result,i;
    scanf("%d ",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    result=findRecursiveAdd(a,n-1);
    printf("%d n",result);
}
void findRecursiveAdd(int arr[],int length)
{
    int i,s=0;
    for(i=0;i<length;i++)
    {
        arr[i]=arr[i]+arr[i+1];
    }
    length--;
    if(length==0)
    {
        while(arr[0]>=10)
        {
            s=s+(arr[0]%10)+(arr[0]/10);
            arr[0]=s;
            s=0;
        }
        return arr[0];
    }
    findRecursiveAdd(arr,length--);
}
