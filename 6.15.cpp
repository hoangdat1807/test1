#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for ( int i=0; i<n; i++)
	{
		int m=n;
		for ( int j=0; j<n; j++)
		{
			if(j<i )
			{	
			printf("%d ",m);
			m--;
			}
			else 
			printf("%d ", n-i);
		}
		printf("\n");
	}
}
