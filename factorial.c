#include <stdio.h>
#include <conio.h>

void main() {

	long int num,facto=1;
	
	printf("enter the number - ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		facto=facto*i;
	}
	
	printf("factorial is - %d",facto);
	
	
	}