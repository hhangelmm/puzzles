#include <stdio.h>

 main(){
	int i,j,sum=0;
	for(i=1;i<101;i++){
		for(j=i+1;j<101;j++){
			sum =sum+ 2*i*j; 	
		}
	}
	printf("%d",sum);
	return 0 ;
}
