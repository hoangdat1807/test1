/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    int num=0;
    scanf("%d", &n);
//    printf("%f", sqrt(n));
    for ( int i=1; i<=sqrt(n); i++)
{
    if(n%i==0) 
    {
        num++;
    }
}
    if(pow(sqrt(n),2)==n) printf("%d", 2*num-2);
    else printf("%d", 2*num-1);
    return 0;
}

