#include <stdio.h>
#define MAX 5
//int swap(int * pa);

int swap(int * b);

int main(){

//	int a[10] = {0};
	
//	printf("a = %u\n",a);
//	printf("&a[0] = %u\n",&a[0]);
//	printf("&a = %u\n",&a);
	
//	printf("a[3] = %d\n",a[3]);
//	swap(a);

//	printf("a[3] = %d\n", a[3]);

	int a = 7;
	printf("a : %d\n",a);
//	swap(a);
	swap(&a);
	printf("a : %d\n",a);

	return 1;

}

//int swap(int * pa){
//	*(pa + 3) = 99;

//	return 1;

//}
//
int swap(int * b){
//	printf("b : %d\n",b);
//	b=99;
	printf("*b : %d\n",*b);
        *b = 99;
        printf("*b : %d\n",*b);

	return 1;
}
