#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char c;
	int a,i,cnt=0;
	int t[]={0,0,0,0,0,0};
	char  arr[]={':',':'};
		for(i=1;i>0;i++)
		{
	
			system("cls");
			printf("%d%d%c%d%d%c%d%d",t[0],t[1],arr[0],t[2],t[3],arr[1],t[4],t[5]);
			Sleep(500);
			if(cnt%2==0&&cnt!=0)
			{
			t[5]++;
			if(t[5]>=10)
			{
				t[5]=0;
				t[4]++;
				if(t[4]==6)
				{
					t[4]=0;
					t[3]++;
				}
			}
			if(t[3]==10)
			{
				t[3]=0;
				t[2]++;
				if(t[2]==6)
				{
					t[2]=0;
					t[1]++;
				}
			}
			if(t[1]==10)
			{
				t[1]=0;
				t[0]++;
			}
			if(t[0]==6)
				break;
				arr[0]=':';
				arr[1]=':';
			}
			else
			{
				arr[0]=' ';
				arr[1]=' ';
			}
			cnt++;
			
	}
}
