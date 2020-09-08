#include<stdio.h>

int main(){
	
	double arr1[] = {5.0, 8.2, 2.0, 23.6, 65.2};
	
	int num_ele = sizeof(arr1)/sizeof(arr1[0]); //how to get size of the array	
	printf("num elements is %d\n", num_ele);
	
	int i;
	for(i=0; i<num_ele; i++){
		printf("%.2f ", arr1[i]);
	}
	printf("\n");
	
	//char arrays Tyler
	char arr2[10];
	arr2[0]='T';
	arr2[1]='y';
	arr2[2]='l';
	arr2[3]='e';
	arr2[4]='r';
	//FOR CHAR ARRAYS you also need to tell it its ending with null char \0 
	arr2[5] = '\0';
	
	printf("%s\n", arr2);
	
	char arr3[10] = {'T', 'y', 'l', 'e', 'r', '\0'};
	printf("%s\n ", arr3 );
	
	char arr4[20] = "Hello world!!!"; //if you initialize it like this you dont have to use the termination char
	printf("%s\n ", arr4);
	
	//to make a function to check length of a string just look for the null char 	
	int count =0;
	i =0;
	while(arr4[i]!= '\0'){
		count++;
		i++;
	}
	printf("the length of arr4 is %d\n", count);
	
	printf("length of the string using the inbuilt thing is %d\n", strlen(arr4));
	
}






