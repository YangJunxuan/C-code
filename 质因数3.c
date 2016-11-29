#include<stdio.h>
int main()
{
	int a[100]={0},tag,n,t,i,j,z=0;
	for (i=2;i<=97;i++)
	{
		tag=0;
		for (j=2;j<=i;j++)
		{
			if (i%j==0&&i!=j)
			{
				tag=1;
			}
		}
		if (tag==0)
		{
			a[z]=i;
			z++;
		}
	}
	while (scanf("%d",&n)!=EOF)
	{
		t=n;
		j=0;
		int b[100]={0};
		while (t!=1&&t!=0)
		{
			for (i=0;i<=n;i++)
			{
				if (t%a[i]==0)
				{
					b[j]=a[i];
					if (a[i]==t)
					goto loop;
					j++;
					t=t/a[i];
					i--;
				}
			}
		}
		loop:;
		printf("%d=",n);
		for (i=0;b[i]!=0;i++)
		{
			if (i==0)
			{
				printf("%d",b[i]);
			}
			else
			printf("*%d",b[i]);
		}
		printf("\n");
	}
	return 0;
}
