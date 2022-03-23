#include <stdio.h>


int main(void)
{
	int num1 = 15, num2 = 30, num3 = 45;
	
	//ptr1▶num1, ptr2▶num2, ptr3▶num3
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	ptr1 = ptr2;	//ptr1▶num2
	ptr2 = ptr3;	//ptr2▶num3

	*ptr3 *= 2;			//num3 *= 2		-> num3 : 90
	*ptr1 += *ptr3;		//num2 += num3	-> num2 : 120
	*ptr2 *= 2;			//num3 *= 2		-> num3 : 180

	printf("%d %d %d \n", *ptr1, *ptr2, *ptr3);

	return 0;

}

