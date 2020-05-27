#include<stdio.h>
int main()
{
	int i,j,n =0 ;
	printf("enter num of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
