#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int binary(int);
int main()
{
	int a,sum=0,i=0,count=0;
	char *str;
	str=(char *)malloc(100);
	printf("Enter the string : ");
	scanf("%s",str);
	while(i<strlen(str))
	{
		sum+=*(str+i);
		i++;
	}
	while(sum!=0)
	{
		if(sum%2==1)
		count++;
		sum=sum/2;
	}
	printf("The number  of ones are %d ",count);



}

	
	
