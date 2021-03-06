/*Write a program to print the possibility of subsets of given set containing unique numbers. 

Ex: 
Input(Array) : [1,2,3] 

Output 
1 
2 
3 
1,2 
1,3 
2,3 
1,2,3*/

#include<stdio.h>
#include <stdlib.h>
int noOfSubset=0;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<=0)
    {
        return 0;
    }
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int duparray[1000]={0};
    int temp[1000]={0};
    print(duparray,temp,a,0,0,0,n,-1);
}
void print(int dup[],int tearray[],int array[],int initial,int dupcount,int tecount,int n,int removevalue)
{
    for(int l=removevalue;l<tecount;l++)
    {
        dup[dupcount++]=tearray[l]; //adding the first set 
    }
    for(int p=initial;p<n;p++)
    {
        tearray[tecount++]=array[p]; 
        removevalue++; // used to remove the first element from temparray.so first removevalue will be '0'  and then by using removevalue++ we remove the first element and second element and so on
        print(dup,tearray,array,p+1,dupcount,tecount,n,removevalue); //going from reverse so order is not as required
    }
    for(int count=1;count<dupcount;count++)
    {
        printf("%d ",dup[count]); //at first we are assigining "dup[0]=temparray[-1]" because removevalue is passed as -1... so first element will be zero so printing from index 1 
    }
    noOfSubset++;  //To count no of subsets and declared as Global variable
    printf("\n");
}
