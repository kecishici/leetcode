#include<stdio.h>

/*
 Given an unsorted integer array, find the first missing positive integer.

For example,
Given [1,2,0] return 3,
and [3,4,-1,1] return 2.

Your algorithm should run in O(n) time and uses constant space. 
*/

int firstMissingPostive(int *nums,int numsSzie)
{

}

int searchInsert(int *nums, int numsSize, int target)
{
	int begin,end,middle;
	begin=0;
	end=numsSize-1;
	while(1)
	{
		middle=((begin+end)/2);
		if(*(nums+middle)==target)
			return middle;
		else
		{
			if(*(nums+middle)<target)
			{
				if(begin>=end)
					return middle+1;
				else
					begin=middle+1;
			}
			else
			{
				if(begin>=end)
					return begin;
				else
					end=middle-1;
			}
		}

	}
}

int main(int argc, char const *argv[])
{
	int a[]={3,5,7,9,10};
	int i=8;
	for(;i<=8;i++)
	{
		printf("the position of %d is %d\n",i,searchInsert(a,4,i));
	}
	return 0;
}