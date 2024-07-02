#include <stdio.h>

int sum(int a, int b){
	
	int c = 0;
	c = a + b;
	return c;
}

int main(){
	
	printf("start\n");
	int a = 1;
	int b = 2;

	int result = sum(a,b);
	
	printf("a + b = %d\n",result);



	return 1;
}
