#include<stdio.h>
#include<string.h>
int main()
{
	char c[26],str[26];
	int i,flag=0,j=0;
	for(i=0;i<26;i++)
		c[i]='A'+i;
	printf("Enter the String: ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		j=str[i]-65;
		if(j<13&&j>=0)
		{
			if(j<12){
				if(str[i+1]==c[j+1]){
					j=j+1; flag=1;}
				else if(str[i+1]==c[j+14]){ 
					j=j+14; flag=1;}
				else if(str[i+1]==c[j+13]){
					j=j+13; flag=1;}
			}
			
			else if(j>0){
				if(str[i+1]==c[j+12]){
					j=j+12; flag=1;}
				else if(str[i+1]==c[j-1]){
					j=j-1; flag=1;}
				else if(str[i+1]==c[j+13]){
					j=j+13; flag=1;}
			}	
		}
		else if(j<26&&j>12)
		{
			if(j<25){
				if(str[i+1]==c[j+1]){
					j=j+1; flag=1;}
				else if(str[i+1]==c[j-12]){
					j=j-12; flag=1;}
				else if(str[i+1]==c[j-13]){
					j=j-13; flag=1;}
			}
			else if(j>13){
				if(str[i]==c[j-1]){
					j=j-1; flag=1;}
				else if(str[i]==c[j-14]){
					j=j-14; flag=1;}
				else if(str[i]==c[j-13]){
					j=j-13; flag=1;}
			}
		}
		if(flag!=1)
			{
			printf("Not possible\n");
			break;}
	}
	if(flag!=0)
	printf("Possible");
}
