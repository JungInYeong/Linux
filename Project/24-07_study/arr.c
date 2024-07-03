#include <stdio.h>
#define MAX 100

int main(){
	
	//int arrA[10];
	int arrB[MAX];

	//for(int i = 0; i < 10; i++ )
	//{
	//	arrA[i] = i * 2;
	//}
	
	
	//for(int i = 0; i < 10; i++ )
        //{
        //       printf("arrA[%d] = %d\n",i,arrA[i]);
        //}

	//for(int i = 0; i < MAX; i++){
	//	arrB[i] = i;
	
	//}
	
	//for(int i = 0; i < MAX; i++){
	//	printf("arrB[%d] = %d\n", i, arrB[i]);
	//}
	
	for(int i = 0; i < MAX; i++){
		arrB[i] = i*2;
		printf("arrB[%d] = %d\n", i, arrB[i]);
	}

	int a = arrB;
	printf("a = %d\n", a);


	return 0;	
}
