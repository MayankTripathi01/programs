#include<stdio.h>
#include<string.h>
int com(char *,int,int);
int swap(char *,int,int);
int main()
{
	char str[100];
	int i=0,n;
	printf("Enter the number of  words: ");
	scanf("%d",&n);
	printf("Now string");
	getchar();
	gets(str);
	printf("%s\n",str);
	com(str,i,n);	
}
int com(char str[100],int i,int n)
{
	int j=0;
	char temp;
	for(j=i;j<n;j++)
	{	
	if(i!=j)
		{
		swap(str,i,j);
		printf("%s\n",str);
		com(str,i+1,n);
		swap(str,j,i);
	}
	else
		com(str,i+1,n);
	}
}
int swap(char *str,int i,int j)
{
	char temp;
	temp=*(str+i);	
	*(str+i)=*(str+j);
	*(str+j)=temp;
}
