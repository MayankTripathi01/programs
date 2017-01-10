#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k=0;
	char s[100],st[100];
	printf("Enter the string: ");
	gets(s);
	for(i=0;i<strlen(s);i++)
		{
		for(j=i+1;j<strlen(s);j++)
			if(s[i]==s[j])
				s[j]=NULL;
		if(s[i]!=NULL){
			st[k]=s[i];
			k++;
		}
	}
		st[k]=NULL;
	printf("%s",st);
		
}
