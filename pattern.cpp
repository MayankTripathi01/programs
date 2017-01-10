#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,n;
	printf("Enter no of lines :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("%c ",65+j);
		if(i==0)
			printf("%c ",65+n);
		else{
		for(k=0;k<(2*(i+1)-1);k++)
			printf("  ");
		}
		for(j=n-1-i;j>=0;j--)
			printf("%c ",65+j);
		printf("\n");
		
	}
}
