#include<stdio.h>

int sum(int);
float avg(int);

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The sum of the first %d integers is: %d\n", n, sum(n));
    printf("The average of the first %d integers is: %.1f\n", n, avg(n));
}

int sum(int n){
    return n*(n+1)/2;
}

float avg(int n){
    return (float)sum(n)/n;
}