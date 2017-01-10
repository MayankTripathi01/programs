#include<stdio.h>
#include<string.h>
int main()
{
char *p="mayank tripathi";
int total=0;
while ( (p=strstr(p,"mayank")) != NULL )
  {
  	if(*(p+3)==' '||*(p+3)==NULL)
total++;
p++;
  }
printf("%i", total); // prints 3 as it should

}
