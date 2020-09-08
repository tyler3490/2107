#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(int argc, char *argv[]){

	double radius = 0.0;
	double side = 0.0;
	double areaCircle = 0.0;
	double areaSquare = 0.0;
	double difference = 0.0;
	
	printf("Enter radius: \n");
	scanf("%lf", &radius);
	
	printf("Enter side: \n");
	scanf("%lf", &side);
	
	areaCircle = PI * radius * radius;
	printf("Area of circle is: %1.3lf\n", areaCircle);
	
	areaSquare = side * side;
	printf("Area of square is: %1.3lf\n", areaSquare);
	
	difference = fabs(areaCircle - areaSquare);
	printf("The difference in areas of the circle and square is: %1.3lf\n", difference);
	
	if(areaCircle > areaSquare){
		printf("The circle is larger than the square by: %1.3lf\n", difference);
	}
	else if(areaSquare > areaCircle){
		printf("The square is larger than the circle by: %1.3lf\n", difference);
	}
	else{
		printf("The square and circle have the same area, the difference is: %1.3lf\n", difference);
	}
	
	
	
}

