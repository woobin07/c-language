#include <stdio.h>
int main()
{
	int num1=16;
	int num2;
	
	int sum=0; int sub=0; floa div=0; int mul=0;
    num2 = 61;
	sum = num1 + num2;
	sum = num1 - num2;
	sub = num1 * num2;
	div = (float)num1 / (float)num2;
	
	printf("%d + %d = %d",num1 ,num2 ,sum);
	printf("%d - %d = %d",num1 ,num2 ,sum);
	printf("%d * %d = %d",num1 ,num2 ,sum);
	printf("%d / %d = %d",num1 ,num2 ,sum);
		
	return 0;
}