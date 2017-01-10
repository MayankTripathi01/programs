#include<stdio.h>
#include<string.h>
int fun(char *);
int main()
{
	char *p,str[100],temp[99];
	printf("enter the numbers:");
	scanf("%s",str);
	fun(str);
	
}
int fun(char str[100])
{
	char temp[100];
	int l=0,i,j=0,k=0;
	temp[0]='\0';
//	printf("%s",temp);
	if(strlen(str)==1)
	{
		
		printf("%c",str[0]);
		return 0;
	}
	for(i=0;i<strlen(str);i++)
	{
	//	printf("%c",str[i]);
		k=0;
		for(j=0;j<strlen(str);j++)
		{
			if(j!=i)
			{
			temp[k]=str[j];
		//	printf("%c %d %c\n",temp[k],k,str[j]);
			k++;
			}
			
				
			else
				continue;
		}
		temp[strlen(str)-1]='\0';
//printf("%s",temp);
//	for(l=0;l<strlen(str)-1;l++)
//	{
		printf("\n%c",str[i]);
		fun(temp);	
//	}
}
}
