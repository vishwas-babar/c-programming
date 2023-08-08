#include <stdio.h>
#include <conio.h>

int main() {
	// this program swap two number without using a temp. variabel
	int a,b;
	
	printf("enter a two numers: ");
	scanf("%d%d",&a,&b);
	
	printf("\nbefore swaping: a=%d & b=%d",a,b);
	
	// now lets swap it 
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swaping: a=%d & b=%d",a,b);
	
	}