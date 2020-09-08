#include<stdio.h>

int main(){

int i;
for(i=0; i<=10; i++){
	//this skips things
	if(i%2 != 0 )
		continue;

	printf("the value of i is %d\n", i);
	
	
	
	//this is simply stopping if the condition is met 
	//if (i==5)
	//	break;

}


//what if we want to check if these contain any common things? we can use goto
int arr1[] = {10, 30, 50, 60, 34};
int arr2[] = {45, 67, 31, 89, 35};

int j, find = 0;
for(i=0; i<5; i++){
	for(j=0; j<5; j++){
		if (arr1[i]==arr2[j]){
			find=1;
			//once it sees a common element it will jump to FOUND
			goto FOUND;
		}
	}

}

//we can put something here to let us know there are no common numbers, it will be skipped if something is found
printf("no common elements\n");

FOUND: 
	if(find==1)
		printf("common number found, its %d\n", arr1[i]);


}
