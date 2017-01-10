#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k,l;
	printf("Enter the number of variables :");
	scanf("%d",&n);
	float matrix[n][n+1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
	}
	float a,b;
	for(i=0;i<n-1;i++)
	{
		b=matrix[i][i];
		for(j=i;j<n+1;j++)
			{
				a=matrix[i][j];
				matrix[i][j]=a/b;
			}
		for(k=i+1;k<n;k++)
			{
				a=matrix[k][i];
				for(l=i;l<n+1;l++)
						matrix[k][l]=matrix[k][l]-((a*matrix[i][l]));
			}
	}
	// Solving equations now
	float temp,t1,t2;
	float cof[n];
	for(i=0;i<n;i++)
	{
		temp=matrix[n-i-1][n];
		for(j=n;j>n-i;j--)
		{
			t1=matrix[n-i-1][j-1];	
			temp=temp-(cof[n-j]*t1);
		}
		t2=matrix[n-i-1][n-i-1];
		cof[i]=temp/(t2);
	}
	printf("\n****************Answers******************\n\n");
	for(i=n;i>0;i--)
		printf("X%d= %f\n",(n-i)+1,cof[i-1]);
	
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
			printf("%f\t",matrix[i][j]);
		printf("\n");
	}*/
}

