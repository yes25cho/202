#include <stdio.h>


int main(void)
{
	/*만약에 nums[0]의 주소가 0x100이라면?*/
	int nums[5] = { 10, 20, 30, 40, 50 };
	int* ptr1 = nums + 2;	//ptr1 : 100 + 4*2= 108
	int* ptr2 = &nums[0] + 2; //ptr2: 100 + 4 * 2 = 108

	return 0;

}

