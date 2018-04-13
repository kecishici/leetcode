#include<stdio.h>

/*
We define the Perfect Number is a positive integer that is equal to the sum of all its positive divisors except itself.
Now, given an integer n, write a function that returns true when it is a perfect number and false when it is not.

Example:

Input: 28
Output: True
Explanation: 28 = 1 + 2 + 4 + 7 + 14

Note: The input number n will not exceed 100,000,000. (1e8) 
*/

int checkPerfectNumber(int num) {
	int result=0;
	int i=1;
	for(;i<=num/2;i++)
	{
		if(num%i==0)
			result+=i;
	}    
	return result==num?num:0;
}

int checkPerfectNumber2(int num)
{
	return ((num == 6) || (num == 28) || (num == 496) || (num == 8128) || (num == 33550336));
}

int main(int argc, char const *argv[])
{
	int i;
	for(i=1;i<=1000000000;i++)
	{
		if(checkPerfectNumber(i))
			printf("%d\n", i);
	}
	return 0;
}