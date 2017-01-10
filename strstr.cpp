#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char b[20],c[20],*p;
printf("Enter the first");
scanf("%s",b);
fflush(stdin);
printf("Second");
scanf("%s",c);
int total=0,flag=0;
while ( (p=strstr(b,c)) != NULL )
 				 {
 				 //printf("%d",(*(p+6))==NULL);
 				// printf("m%c",*(p+6));
				if(*(p+6)==NULL)
				printf("Yes");
					flag++;		
					p++;
 				 }
printf("%i", flag); // prints 3 as it should

}
