#include <stdio.h>

int main(){

	char name[25];
	int age = 0;
	
	printf("Hello World!!!\n");

	printf("Enter your name: ");
	scanf("%s", name);

	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Hello %s, you are %d years old\n", name, age);
	
	//printf("Press a key to exit\n");
	
}

