#include<string.h>
#include<stdio.h>
void sort(char temp[]);
int main()
{
	char str1[100],str2[100];
	printf("Ente the two strings : ");
	scanf("%s%s",str1,str2);
	sort(str1);
	sort(str2);
	if(strcmp(str1,str2)==0)
		printf("anagram");
	else
		printf("not an anagram");	
	return 0;
}
void sort(char temp[100])
{
	int i,j,c,a=strlen(temp);
	for(i=0;i<a+1;i++)
	{
		
		for(j=i+1;j<a;j++)
		{
			if(temp[i]>64&&temp[i]<91)
					temp[i]+=32;
			if(temp[j]>64&&temp[j]<91)
					temp[j]+=32;			
			if(temp[i]>temp[j])
			{
				
				c=temp[i];
				temp[i]=temp[j];
				temp[j]=c;
			}
		}
	}
	
}
