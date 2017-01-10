#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *ptr,l;
	int i,count=0,j,k;
	ptr=(char *)malloc(50);
	printf("Enter your string : ");
	scanf("%s",ptr);
	l=strlen(ptr);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(*(ptr+i)==*(ptr+j))
			{
				k=j;
				while(*(ptr+k)!='\0'){
					*(ptr+k)=*(ptr+k+1);
					k++;
					count++;
				}
				*(ptr+l-1)=NULL;
			}
		}
	}
	printf("%s",ptr);
		
		
}

