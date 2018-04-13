#include<stdio.h>

/*
Given an array of integers, every element appears three times except for one, 
which appears exactly once. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. 
Could you implement it without using extra memory? 
*/

int singleNumber(int* nums, int numsSize) {
	int result=0,i=0;
	for(;i<numsSize;i++)
	{
		result=result^nums[i]^nums[i]^nums[i];
	}    
	return result;
}

int main(int argc, char const *argv[])
{
	int a[]={1,1,1,2,2,2,4};
	printf("the special element is %d\n", singleNumber(a,7));
	return 0;
}