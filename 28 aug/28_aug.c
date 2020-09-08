#include<stdio.h>

int main(){
		
	char c;
/*
	scanf("%c", &c);
	
	
	while(c != 'X'){
		//printf("the input char is %c\n", c);
		putchar(c);
		//scanf("%c", &c);
		c = getchar();
	}
*/
	//this is shorthand for the above
	int char_count = 0;
	int lines = 0;
	int words = 0;
	while((c=getchar())!= 'X'){
		if(c == '\n'){
			lines++;
		}
		if(c == ' ' || c == '\n' || c== '\t'){
			words++;
		}
		putchar(c);
		char_count++;
		
	}
	printf ("num of chars is %d\n", char_count);
	printf ("num of lines is %d\n", lines);
	printf ("num of words is %d\n", words);
}
