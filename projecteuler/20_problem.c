#include<stdio.h>
long asdf(int a)
{
	if(a ==1)
		return (long)a;
	else
		return (long)a*asdf(a-1);
}
main()
{
	int a = 100;
	long b = asdf(a);	
	printf("%ld",b);
	long tmp = b;
	int c =0;
	int sum = 0;
	while(tmp>0)
	{
		c = tmp%10;
		tmp = tmp/10;
		sum = sum + c;
	}
	printf("%d",sum);
}
