#include<stdio.h>
int print(char *ptr);
int main()
{
	print("Mayank Is great",a);
	return 0;
}
int print(char *ptr)
{
	int i=0;
	while((*ptr)!='\0')
	{
		printf("%c",*ptr);
		ptr++;
		
	}
}

