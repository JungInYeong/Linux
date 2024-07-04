#include <stdio.h>

char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);
int main(){


	char str[20] = "hello world!!\n";

        char str_c[20] = "good job!\n";

        printf("str_c : %s", str_c);

        strcpy(str_c,str); // strcpy(목적지, 카피)

        printf("str_c : %s", str_c);

        return 1;
}
size_t strlen(const char *s){

	size_t count = 0;
	
	if(s != NULL){
		
		for (int i = 0; ; i++){
			if(*(s+i) == 0){
				break;
			}
			else{
				count++;
			}

		}


	}
	else{
		return -1;
	}

	return count;

}
char *strcpy(char *dest, const char *src){

/*	while(*src){

		*dest++ = *src++;

	}
*/	
	for(int i = 0; i < strlen(src); i++){
		
		dest[i] = src[i];
	}
	return dest;

}
