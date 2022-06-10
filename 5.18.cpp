?? then ?a 
//// hello president

#include<stdio.h>
long long dao(long long n)
{
	long long m=n;
	long long dao=0;
	while(m>0){
		dao=dao*10+m%10;
		m/=10;	
	}
return dao;
}
int main()
{
	long long n;
	scanf("%lld", &n);
    long long x=dao(n);
	long long m=n;
	long long cs=m%10;
	int dem2=0;
	int dem3=0;
	int dem5=0;
	int dem7=0;
	while(m)
	{
		if( m%10==2)dem2++;
	else if( m%10==3)dem3++;
	else if( m%10==5) dem5++;
	else if( m%10==7) dem7++;
		m/=10;
	}
	while(x)
	{
		if(x%10==2&& dem2!=0) {
			printf("2 %d\n", dem2);
			dem2=0;
		}
	
		if(x%10==3&& dem3!=0) {
				printf("3 %d\n", dem3);
			dem3=0;	
		}
	
		if(x%10==5&& dem5!=0) {
			printf("5 %d\n", dem5);
			dem5=0;
		}
		
		if(x%10==7&& dem7!=0) 
		{
			printf("7 %d\n", dem7);
			dem7=0;
		}
		x/=10;
	}

}

