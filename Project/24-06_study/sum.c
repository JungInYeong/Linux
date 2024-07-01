#include <stdio.h>

int main(){

	int a = 2 + 3;
	int b = 2 - 1;

	int c = 3;
	int d = 4;

	int f = c + d;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",f);

	int kk = 57;

	printf("10의 자리 : %d\n",kk/10); 	
	printf("1의 자리 : %d\n",kk%10); 	
	
	int e = 1;
	printf("%d\n",e++);
	printf("%d\n",++e);
	printf("%d\n",e--);
	printf("%d\n",--e);

}
