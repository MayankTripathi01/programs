#include<stdio.h>
int main()
{
	int n,i,p=1,j,k;
	printf("Enter the no of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++)
			printf(" ");
		for(k=0;k<=i;k++){
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
}
