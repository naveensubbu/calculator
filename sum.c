#include <math.h> 
#include <stdio.h> 

int sum(); 
int main() 
{ 
	int num; 
	num = sum(); 
	printf("\nSum of two given values = %d", num); 
	return 0; 
} 

int sum() 
{ 
	int a = 50, b = 80, sum; 
	sum = a+b; 
	return sum; 
} 
