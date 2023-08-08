#include <stdio.h>
#include <conio.h>

void main() {
	
	int num, remaineder, reverse=0;
	clrscr();
	
	printf("enter the number- ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		remaineder=num%10;
		reverse=reverse*10+remaineder;
		
		num=num/10;
	}
	
	printf("revrese is- %d",reverse);
	
	
}