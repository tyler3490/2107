#include<stdio.h>

int main(){

	int a = 10;
	int b = 20;
	int c = 30;
	
	//int d = a + b * c;
	//int d = a + b * c ++; //d = a+b*c; then c++
	int d = a + b * ++c; // c = c+1; d=a+b*c; c = 31, d = 630
	printf("d = %d, c = %d\n", d, c);
	
	/*
	int e = c++;
	printf("e = %d, c = %d\n", e, c); //this will be e = 30 and c = 31
	//the reason it is like this is because ++ is a postfix operator so first c is assigned to e THEN c is incremented 
	*/

	int f = ++c;
	printf("f = %d, c = %d\n", f, c);
	//here c is incremented then assigned 
	
	int n = 0; 
	int i;
	//for(i=0; i<5; i++){
	//	printf("n = %d\n", n++);
	//}
	
	for(i=0; i<5; i++){
		printf("n = %d\n", ++n);
	}



	//logical operators && and ||
	
	//int dec = 5<2 && 3<=6; //returns 0 && 1 which is false 
	//printf("dec = %d\n", dec);
	
	int dec = 5<2 || 3<=6; //returns 0 || 1 which is true 
	printf("dec = %d\n", dec);
	

}

