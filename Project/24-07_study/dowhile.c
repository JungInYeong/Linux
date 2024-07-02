#include <stdio.h>


int zero(){
	
	printf("call zero\n");
	return 0;
}

int zero1(){
	printf("call zero1\n");
	return 1;
}

int main(){

	int a;

	do{
		zero();
	}while(0);

	return 1;
}
