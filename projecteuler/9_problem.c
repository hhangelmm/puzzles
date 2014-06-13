#include <stdio.h>
#include <math.h>
main()
{
	int a=1;
	int c =0;
	int b=1;
	for(a=1;a<500;a++)
	{
		for(b=a;b<501;b++)
		{
			c = pow(a,2)+pow(b,2);
			double d = sqrt(c);
			if((d == (int)d) && (a+b+d==1000))
			{
				printf("%d",a*b*(int)d);
				return 0;
			}	
		}
	}
}
