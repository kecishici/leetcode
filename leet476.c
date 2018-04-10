#include<stdio.h>
/*
Given a positive integer, output its complement number. 
The complement strategy is to flip the bits of its binary representation.

Note:

    The given integer is guaranteed to fit within the range of a 32-bit signed integer.
    You could assume no leading zero bit in the integer’s binary representation.
*/

int findComplement(int num) {
	int result,i;
	result=num;
	i=1;
	while(num>0)
	{
		result=result^i;
		i=i<<1;
		num=num>>1;
	}
	return result;    
}

int main(int argc, char const *argv[])
{
	/* code */
	int number=1;
	printf("the complement number of %d is %d\n", number,findComplement(number));
	return 0;
}