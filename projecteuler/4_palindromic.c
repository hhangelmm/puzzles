#include <stdio.h>

bool is_palindromic(int t)
{
	int tmp=0,m=0,n=t;
	while(n>0)
	{
		tmp = n%10;
		n = n/10;
		m = m*10 + tmp;
	}
	return (m==t)?true:false;
}
main()
{
	int i=0,j=0;
	bool f = false;
	for(i=999;i>899;i--)
	{
		for(j=999;j>899;j--)
		{
			if(is_palindromic(i*j))
			{
				printf("%d,%d, = %d\n",i,j,i*j);
				f = true;
			}
		}
	}
}
