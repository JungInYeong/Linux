#include <stdio.h>
#define MAX 10000

int main(){
	
	int a;
	int *pa;

	a = 3;
	printf("a = %d\n",a);
	printf("&a = %u\n",&a);

	pa = &a;
	printf("pa = %u\n",pa);
	printf("*pa = %d\n",*pa);
	printf("&pa = %u\n",&pa);

	return 0;	
}
