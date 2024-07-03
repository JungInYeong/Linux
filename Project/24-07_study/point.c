#include <stdio.h>

int main(){

	int a;
	int * pa;
	int ** ppa;

	a = 3;
	printf("a = %d\n",a);
	printf("&a = %u\n", &a);

	pa = &a;

	printf("pa = %u\n",pa);
	
	
	*pa = 5;
	printf("*pa = %d\n", *pa);
	printf("&pa = %u\n", &pa);

	
	ppa = &pa;
	printf("*ppa = %u\n",*ppa);
	printf("**ppa = %u\n",**ppa);
	printf("&ppa = %u\n",&ppa);

}
