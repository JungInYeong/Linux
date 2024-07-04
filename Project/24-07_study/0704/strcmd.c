#include <stdio.h>
#include <string.h>



char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);

int main(){

	char str[20] = "aba";
	char str_c[20] = "aca";

	printf("%d\n", strcmp(str,str_c));


	return 1;

}

int strcmp(const char *s1, const char *s2){

	int s1en = strlen(s1);
	int s2len = strlen(s2);
	int len = 0;

	if(s1len >= s2len){
		len = s1len;
	}else{
		len = s2len;
	}
	
	for(int i = 0; i < strlen(s1); i++)
	{
		if(*(s1+i) == 0 || *(s2+i) == 0){
			
			
		}

		int val = *(s1+i) - *(s2+i);

		if(val != 0)
		{
			return val;
		}

	}	

	
		

	


}

char *strcpy(char *dest, const char *src){

	for(int i = 0; i < strlen(src); i++){

                dest[i] = src[i];
        }
        return dest;

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

