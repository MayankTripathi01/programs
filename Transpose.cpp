#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("enter the no of rows and column : ");
	scanf("%d%d",&m,&n);
	int o[m][n],r[n][m];
	printf("\nnow enter the values : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\nO[%d][%d] = ",i,j);
			scanf("%d",&o[i][j]);
			r[j][i]=o[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d ",o[i][j]);
		printf("\n");
	}
	printf("Transpose is \n\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d ",r[i][j]);
		printf("\n");
	}
	
}
