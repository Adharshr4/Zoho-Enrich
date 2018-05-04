/*To find the next immediate palindrome

Input:
121
Output:
131

Input:
321
Output:
323    */


#include<stdio.h>
#include <stdlib.h>
int main(){
    long int n,num;
    int i,k1=0,k=0,count=0,a[12],b[12];
    scanf("%ld",&n);
    num=n;
    while(n>0){
        a[k++]=n%10;
        if(n%10==9){
            count++;
        }
        n=n/10;
    }
    if(count==k){   //if all digits are 9 
        printf("%d",num+2);
        return;//eg next palindrome of 999 is 1001
    }
    for(i=k-1;i>=0;i--){
        b[k1++]=a[i];
    }
    printPalin(b,k1,num);
}
void printPalin(int a[],int size,long int num){
    int i,j=size-1,ans=0,mid=size/2;
    while(i<j){
        a[j--]=a[i++];   //copying left half to right half
    }
    for(i=0;i<size;i++){
        ans=ans*10+a[i];
    }
    while(ans<=num){
        ans=0;
        if(size%2==1){
            if(a[mid]==9){         //if it is odd there will be one middle element   and to check if tht mid element is 9 
                a[mid]=0;
                a[mid-1]++;
                a[mid+1]++;
            }
            else{
                a[mid]++;
            }
        }
        else{
            if(a[mid]==9 && a[mid-1]==9){  //for even length there willl be 2    middle digits
                a[mid]=0;
                a[mid-1]=0;
                a[mid+1]++;
                a[mid-2]++;
            }  
            else{
                a[mid]++;
                a[mid-1]++;
            }
        }
        for(i=0;i<size;i++){
            ans=(ans*10)+a[i];
        }
    }
    printf("%d",ans);
}
