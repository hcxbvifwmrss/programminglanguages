#include <stdlib.h>
#include <conio.h>

float calculate(float, float);

void main(){
	float x, y, z;
	printf("Input x and y: ");
	scanf("%f %f", &x, &y);
	printf("Result: %.2f", calculate(x, y));
	_getch();
}

float calculate(float x, float y){
	return x > y ? x - y : y - x + 1;
}