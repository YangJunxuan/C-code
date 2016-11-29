#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,a,b;
	char s[10];
	while (scanf("%d",&n)!=EOF)
	{
		getchar();
		for (i=1;i<=n;i++)
		{
			gets(s);
			a=0;
			b=0;
			if (strlen(s)==3)
			{
				if ((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
				{
					printf("1\n");
				}
				else
				printf("2\n");
			}
			else if (strlen(s)==5)
				{
					printf("3\n");
				}
		}
		
	}
	return 0;
}
