#include<stdio.h>
int maxain()
{
	int n,a[6][6],b[6][6],i,j,flag,max;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				b[i][j]=0;
			}
		}
		for(i=0;i<n;i++)
		{
			max=a[i][0];
			flag=0;
			for(j=1;j<n;j++)
			{
				if(a[i][j]>max)
				{
					max=a[i][j];
					flag=j;
				}
			}
			b[i][flag]+=1;
		}
		for(j=0;j<n;j++)
		{
			max=a[0][j];flag=0;
			for(i=1;i<n;i++)
			{
				if(a[i][j]<max)
				{
					max=a[i][j];
					flag=i;
				}
			}
			b[flag][j]+=1;
		}
		flag=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[i][j]==2)
				{
					printf("%d %d\n",i,j);
					flag=1;
				}		
			}
		}
		if(flag==0){printf("NO\n");}
	}
	return 0;
}
