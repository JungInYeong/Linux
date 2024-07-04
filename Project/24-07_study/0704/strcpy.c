#include <stdio.h>
#include <string.h>


int main(){

	char str[20] = "hello world!!\n";

	char str_c[20] = "good job!\n";

	printf("str_c : %s", str_c);

	strcpy(str_c,str); // strcpy(목적지, 카피)

	printf("str_c : %s", str_c);

	return 1;
}
