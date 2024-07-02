#include <stdio.h>

int zero(){
	
	printf("call zero\n");
	return 0;
}
int zero1(){
	printf("caall zero1\n");
	return 1;
}
int main(){
	
	
	for( int a = 0; a < 10 ; a++ ){
		
		
		printf("a : 나는 행복 횟수 %d\n",a);
	}

	return 1;
}
