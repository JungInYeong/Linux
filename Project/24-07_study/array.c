#include <stdio.h>

int main(){
	
//	int a;
//	int * pa;

//	int array[1];

//	pa = &a;
//	*pa =0x77;

//	array[0] = 0x55;
//	int arry[5];

//	arry[3] = 0x55;
//	*(arry + 3) = 0x77;

//	char arry_c[5];

//	arry_c[3] = 0x44;
//	*(arry_c +3) = 0x99;

	int arry[5];

	*(arry + 2) = 0x76;
	*(arry + 3) = 0x77;
	*(arry + 4) = 0x78;
	
	char arry_c[5];

	*(arry_c + 2) = 0x91;
	*(arry_c + 3) = 0x92;
	*(arry_c + 4) = 0x93;

	return 1;
}
