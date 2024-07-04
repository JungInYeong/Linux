#include <stdio.h>

void swap(int *a, int*b){
	
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

void test(){
	printf("func test\n");
}


void test22(){
	printf("func test22\n");
}

int main(){
//	void(*fp)();
	int a = 1;
	int b = 2;

	void(*fp)(int *a, int *b);
	fp = swap;

	printf("a : %d, b : %d\n",a,b);
	fp(&a, &b);
	printf("a : %d, b : %d\n",a,b);
//	fp = test;
//	fp();
	
//	fp = test22;
//	fp();
	
		
//	printf("test : %u, &test : %u\n", test, &test);

//	printf("%d\n",sizeof(fp));
	return 1;

}
