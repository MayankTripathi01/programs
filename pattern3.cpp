#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s+=i;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf("   ");
		for(j=0;j<n-i;j++){
			if(s<10)
			printf("  %d",s);
			else
			printf(" %d",s);
			s--;
		}
		printf("\n");
	}
}
