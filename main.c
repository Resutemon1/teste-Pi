#include <stdio.h>
#include <stdlib.h>

void ffunction(int *p1, int *p2, int *p3, int *p4)
{
  int a, b, c, d;
  printf("escreva um numero: ");
  scanf("%d",&a);
  printf("escreva um numero: ");
  scanf("%d",&b);
  printf("escreva um numero: ");
  scanf("%d",&c);
  printf("escreva um numero: ");
  scanf("%d",&d);
  
  *p1 = a;
  *p2 = b;
  *p3 = c;
  *p4 = d;
  
}


int main(void) 
{
  int n, m, e, s;
  
  ffunction(&n, &m, &e, &s);
  printf("%d %d %d %d",n,m,e,s);
	return 0;
}
