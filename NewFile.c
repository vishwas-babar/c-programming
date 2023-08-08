#include <stdio.h>

int main() {

  int marks[10], sum=0;

  printf("enter the marks of 10 students- ");

  for (int i=0; i<10; i++) {
    scanf("%d\n",marks[i]);
    printf("number enterd");
  }

  // now lets find the average marks
  for (int x=0; x<10; x++) {
    sum+=marks[x];
  }

  int avg=sum/10;

  printf("the average marks of 10 student is %d",avg);

  return 0;
}