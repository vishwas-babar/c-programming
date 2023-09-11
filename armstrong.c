#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	
	int num, originalnum, remainder, result=0,n=0;
	
	
	printf("enter the number");
	scanf("%d",&num);
	// first lets count the number of digits
	
	originalnum=num;
	
	while(originalnum!=0)
	{
		originalnum/=10;
		n++;
	}
	
	// now lets find the result
	originalnum=num;
	
	while(originalnum!=0)
	{
		remainder=originalnum%10;
		result+=pow(remainder, n);
		
		originalnum/=10;
	}
	
	
	// now lets check result is equal to num or not
	if(result==num)
	printf("%d is the armstrong number",num);
	else
	printf("%d is not the armstrong number",num);
	
	getch();

	
	
	
	
	}
