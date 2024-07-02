#include <stdio.h>

int main(){

	int isRunning = 1;
	
	//goto는 되도록 쓰지마아라
	//근데 왜 알아야하냐 문법이고 알고 있어야한다
	//가끔 효율적이고 편리할 때가 있다(드물지만)
	goto ojw;

	printf("hihi\n");

	ojw:
		printf("ojw place\n");
	

	return 1;
}
