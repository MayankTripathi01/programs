#include<stdio.h>
#include<string.h>
void swap(char *,char *);
int next(char *, int);
int main()
{
	char str[100];
	int j,k,i=0;
	printf("Enter strig: ");
	scanf("%s",str);
	for(j=0;j<strlen(str);j++)
		for(k=j+1;k<strlen(str);k++)
		{
			if(str[j]>str[k])
			swap(&str[j],&str[k]);
		}
	next(str,i);
}
int next(char str[50],int j)
{
	char temp[50];
	int i;
	int k=strlen(str);
	if(j==k-2)
	{
		printf("\n%s",str);
		if(str[k-2]==str[k-1])
		return 0;
		swap(&str[k-2],&str[k-1]);
		printf("\n%s",str);
		return 0;
	}
	for(i=j;i<strlen(str);i++)
	{
		if(str[i+1]==str[i])
		continue;
		temp[0]='\0';
		strcpy(temp,str);
		swap(&temp[i],&temp[j]);
		next(temp,j+1);	
	}
}
void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
