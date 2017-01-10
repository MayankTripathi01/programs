#include<stdio.h>
#include<string.h>
int fib(int);
int main()
{
	char str[1000];
	int k,count=0,i,j=0;
	printf("Enter the string: ");
	gets(str);
	str[strlen(str)]='\0';
	while(str[i]!='\0')
	{
		//printf("Mayank0\n");
		if((str[i]<=90&&str[i]>=65)&&(str[i+1]<=90&&str[i+1]>=65))
		{
			while(str[i]!=' ')
			i++;
			count++;
		}
		i++;
	}
	printf("%d\n",count);
	k=count;
	while(k--)
		printf("%d ",fib(k));
	k=count;
	i=0;
	while(count!=0)
	{
		if((str[i]<=90&&str[i]>=65)&&(str[i+1]<=90&&str[i+1]>=65))
		{
			printf(" %d ",fib(j));
			while(str[i]!=' ')
			printf("%c",str[i++]);
			count--;
			j++;
			i++;
		}
		i++;
	}
	
//	printf("%s",str);
}
int fib(int k)
{
	if(k==0)
	return 0;
	else if(k==1)
	return 1;
	else
	return fib(k-1)+fib(k-2);
}
