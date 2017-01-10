#include<stdio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	int l1,l2,i=0,f=1,k=0,j=0,flag;
	char a[50],b[50],c[50],*p;
	printf("Enter first");
	scanf("%[^\n]s",a);
	fflush(stdin);
	printf("Enter the two strings : ");
	scanf("%[^\n]s",b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		printf("\nThey are not the same\n");
	else
	{
		while(i==0)
		{
			k=0;
			j=0;
			flag=0;
			while(c[k]!='\0')
			c[k]=NULL;
			while(a[i]!=' ')
			{
				c[j]=a[i];
				i++;
				j++;
			}
			c[i]='\0';
			p=strstr(b,c);
		//	printf("%s",p);
			if(*p=='\0'){
				printf("Strings are not same\n");
				f=0;
				break;
			}
			else
			{
				printf("Mayank tripathi");
				while ( (p=strstr(b,c)) != NULL )
 				 {
					if(*(p+6)==' '||*(p+6)==NULL)
					flag++;		
					p++;
 				 }
 				 printf("%d",flag);
 				 if(flag==1)
 				 {
 				 	while(*p!='\0')
 				 	*p=*(p+j+1);
 				 	
				  }
				  else
				  {
				  	printf("\nNot same");
				  	f=0;
				  	break;
				  }
			}
		}
		
	}
	if(f==1)
	printf("Strings are same ");
}
