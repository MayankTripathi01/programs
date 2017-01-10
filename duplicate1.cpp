#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j,c=1;
	printf("Enter the string : ");
	gets(str);
	for(i=0;i<strlen(str);i++){
		for(j=i+1;j<strlen(str);j++)
			if(str[i]==str[j])
			{
				c++;
				str[j]=NULL;
			}
		printf("\n%c-----%d",str[i],c);
		c=1;
	}
}
