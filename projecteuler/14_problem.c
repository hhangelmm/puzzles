#include<stdio.h>
#include<time.h>
main()
{
	long long count,k=0,i,z,max=0;
	double RunTime;
	clock_t start , end;
	start = clock();
	for(i=999999;i>=1;i-=2)
	{
		z=i; count =0;
		while(z!=1)
		{
			z = (z%2==0) ? z/2 : z*3+1;
			count++;
		}
		if(count > max) {max = count; k = i;}
	}

	printf("\n%lld --> %lld\n",k,max);
	end = clock();
	RunTime = (end - start)/(double)CLOCKS_PER_SEC;
	printf("runtime was %f (seconds)\n",RunTime);
//	scanf("%lld",&i);
}
