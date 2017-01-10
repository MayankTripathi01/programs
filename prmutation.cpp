#include<stdio.h>
int main()
{
	int i,j,k,l;
	char a[4]={'a','a','c','d'};
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				for(l=0;l<4;l++)
				{
					if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)
						printf("%c%c%c%c\n",a[i],a[j],a[k],a[l]);
				}
			}
		}
	}
}
