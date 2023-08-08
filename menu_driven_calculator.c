#include <stdio.h>
#include <conio.h>

int main() {
	
	int a,b,choice,result=0;
	clrscr();
	
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	
	printf("\n 1.addtion\n 2.subtract\n 3.multiplication\n 4. divide\n type number from 1-4 - ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:result=a+b;
		break;
		
		case 2:result=a-b;
		break;
		
		case 3:result=a*b;
		break;
		
		case 4:result=a/b;
		break;
		
		default:printf("sorry! invalid input");
	}
	
	
	printf("answer = %d",result);
	
	
	
}