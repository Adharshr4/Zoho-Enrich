#include<stdio.h>
#include <stdlib.h>
int main()
{
	int num,count=0;
	scanf("%d",&num);
	while(num>0)
	{
		  if(num%2==1)
		  {	
		    	count=count+1;
	  	}
  		num=num/2;
	}
	printf("%d",count);
}
