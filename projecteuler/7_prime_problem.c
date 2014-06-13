#include<stdio.h>
main(){
	long int j=3;
	int i=0;
	int num =1;
	while(1){
		for(i=2;i<j+1;i++){
			if(j%i==0)
				break;
		}
		if((i)==j)
		{
			num++;
			printf("%ld\n",j);
		}
		j++;
		if(num==10001)
			break;
	}

}
