#include <stdio.h>			


int main(){

	//2중 for
	//3중 for
	//break;, continue;
	
	//구구단
	
	//1~15단
	
	for(int i = 1; i <= 9; i++){
		
		printf("[%d단]\n", i);

		for(int j = 1; j <= 20; j++){
			
			//if(j % 2 == 0){
			//	continue;
		
			
			// 홀수 print}
			if(j > 5){
				break; // 5단까지 print
			}
			printf("%02d * %02d = %03d\n", i, j, i*j);
		}

		
		printf("\n");
	
	}
	
}
