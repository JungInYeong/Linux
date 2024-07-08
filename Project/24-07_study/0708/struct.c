#include <stdio.h>
#include <string.h>

typedef struct human{
	char name[20];
	int age;
	char gender;
}human;

typedef struct student{

	int s_id;
//	human man;
	human * man;
}std;


void std_func(std * st);


int main(){
	
	std st1;
	human hm;
	st1.man = &hm;

	std_func(&st1);

	
	printf("s_id : %d\n",st1.s_id);
//	printf("name : %s\n",st1.man.name);
	printf("name : %s\n",st1.man->name);

	return 1;
}

void std_func(std * st){

	st->s_id = 10;
//	strcpy(st->man.name, "Jung");
	strcpy(st->man->name, "Jung");

	printf("s_id : %d\n", st->s_id);
//	printf("name : %s\n", st->man.name);
	printf("name : %s\n", st->man->name);

}
