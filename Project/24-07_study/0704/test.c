#include <stdio.h>

void swap(int *a, int *b){
	
	int c;
	c = *a;
	*a = *b;
	*b = c;

}

int main(){
	
//	int a = 3;
//	int b = 4;
	
//	int *pa = &a;
//	int *pb = &b;
	
	char str[100] = "hello world\n";
	char *pstr = str;
	while(*pstr++){

		putchar(*pstr);

	}


//	printf("a = %d, b = %d\n",a ,b);
	
//	swap(&a, &b);
//	swap(pa, pb);	
	
	//&a = pa, &b = pb
//	printf("a = %d, b = %d\n",a ,b);

	return 1;
}
