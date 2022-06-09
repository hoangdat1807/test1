#include<stdio.h>
#include<math.h>
int dao(int n)
{
	{
	int dao=0;
	while(n>0){
		dao=dao*10+n%10;
		n/=10;	
	}
return dao;
	}
}
int nguyento(int n)
{
	for ( int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return (n>2);
}
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	for ( int i=a; i<=b; i++)
	{
		if(nguyento(i) && nguyento(dao(i)))
		printf("%d ", i);
	}
}
