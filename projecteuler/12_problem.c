#include <stdio.h>
#include <math.h>
int abc(long num)
{
	int a=0;
	for(int i=1;i<=sqrt(num);i++)
	{
		if(num%i==0)
			a +=2;
	}
	return a;
}

main()
{
	long num=0;
	int i=500;
	while(1)
	{
		num = i*(i+1)/2;
		int b = abc(num);
		if(b>=500)
		{
			printf("%ld",num);
			return 0;
		}
		i++;
	}
}
