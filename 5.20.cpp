#include<stdio.h>
#include<math.h>
int nguyento(int n)
{
	for ( int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return (n>=2);
}
int sodep(int n)
{
	for ( int i=2; i<=(int)sqrt(n); i++)
	{
		
		if(nguyento(i)==1 && n%i==0 && n%(i*i)==0)
		return 1;
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	for ( int i=a; i<b; i++)
	{
		if(sodep(i)==1) printf("%d ", i);
	}
}
