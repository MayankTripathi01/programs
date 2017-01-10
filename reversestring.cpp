#include<stdio.h>
#include<string.h>
int main()
{
	char *p,str[100],rev[100],temp[50];
	int i;
	printf("Enter the string you want to reverse: ");
	gets(str);
	while(str!='\0')
	{
		for(i=strlen(str);i>0;i--)
		{
		//	printf("%d\n",i);
			if((str[i]==' '))
			{
				p=&str[i+1];
				printf("%s ",p);
				*p='\0';
			}
		//	puts(str);
		}
		puts(str);
		str[0]='\0';
		break;
	}
}
