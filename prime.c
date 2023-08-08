#include <stdio.h>
#include <conio.h>

int main(){
	
	int num, prime=1,remainder;
	
	printf("enter the number- ");
	scanf("%d",&num);
	
	for(int i=2;i<num;i++)
	{
		remainder=num%i;
		if (remainder==0)
		break;
	}	
	
	if(remainder==0)
	printf("/nthis is not a prime number");
	
	else
	printf("\nthis is prime");
	
	
	
	
}
