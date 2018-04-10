#include<stdio.h>
/*
Given a positive integer, check whether it has alternating bits: namely, 
if two adjacent bits will always have different values.

Example 1:

Input: 5
Output: True
Explanation:
The binary representation of 5 is: 101
*/

int hasAlternatingBits(int n) {
    int result=(n&1);
    n=n>>1;
    while(n>0)
    {
    	result=result^(n&1);
    	if(!result)
    		return 0;
    	result=n&1;
    	n=n>>1;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
	/* code */
	int a[]={5,7,11,10};
	int i;
	for(;i<4;i++)
	{
		printf("%d %d (0/isn't 1/is) binary number with alternating bits\n", a[i],hasAlternatingBits(a[i]));
	}
	return 0;
}