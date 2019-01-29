#include <math.h> 
#include <stdio.h> 

int sub(); 
int main() 
{ 
	int num; 
	num = sub(); 
	printf("\nSub of two given values = %d", num); 
	return 0; 
} 

int sub() 
{ 
	int a = 50, b = 80, sub; 
	sub = a-b; 
	return sub; 
} 
