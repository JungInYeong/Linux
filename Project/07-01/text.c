#include <stdio.h>

int isRunning();
//삼항 연산자(조건 연산자)
int main(){

	//참은 0이 아니면 참이다.
	//거짓은 0이다.
	
	int a = 3;
	int b = 2;
	int c = a < b;
	// (1) ? true : false -> 1이면 true 0이면 false 실행
	
	(isRunning()) ? printf("true\n") : printf("false\n");
	
	printf("결과%d\n", isRunning());

	return 1;




}

int isRunning(){
	int a = 0;
	int b = 2;

	if (a > b){
		return 1;
	}
	else{
		return 0;
	}
}
