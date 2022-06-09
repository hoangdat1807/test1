#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<n+i; j++)
		{
			if(j>=0 && j<2*i)
			printf("~");
			else 
			printf("*");
		}
		printf("\n");
	}
	for ( int i=n-1 ; i>=1; i--)
	{
		for ( int j=1; j<=n+i-1; j++)
		{
			if(j>=1 && j<=2*(i-1))
			printf("~");
			else 
			printf("*");
		}
		printf("\n");
	}
}
