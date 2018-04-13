#include<stdio.h>
#include<stdlib.h>

/*
A binary watch has 4 LEDs on the top which represent the hours (0-11), 
and the 6 LEDs on the bottom represent the minutes (0-59).

Each LED represents a zero or one, with the least significant bit on the right.

For example, the above binary watch reads "3:25".

Given a non-negative integer n which represents the number of LEDs that are currently on, return all possible times the watch could represent.

Example:

Input: n = 1
Return: ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]

Note:

    The order of output does not matter.
    The hour must not contain a leading zero, for example "01:00" is not valid, it should be "1:00".
    The minute must be consist of two digits and may contain a leading zero, for example "10:2" is not valid, it should be "10:02".
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** readBinaryWatch(int num, int* returnSize) {
    

}


int countBits(int n)
{
	int result=0;
	while(n>0)
	{
		if(n&1)
			result++;
		n=n>>1;
	}
	return result;
}

int watch(int num)
{
 	int h,m;
 	int count=0;
 	for(h=0;h<=11;h++)
 	{
 		for(m=0;m<=59;m++)
 		{
 			if(countBits(h)+countBits(m)==num)
 			{
 				count++;
 				if(m<10)
 					printf("%d:0%d\n", h,m);
 				else
 					printf("%d:%d\n", h,m);
 			}
 		}
 	}
 	return count;
}


/*
int main(int argc, char const *argv[])
{
	int num,count;
	scanf("%d",&num);
	count=watch(num);
	printf("%d\n",count);
	return 0;
}
*/
int main(int argc, char const *argv[])
{
	const char *a;
	int i,result;
	result=0;
	i=0;
	if(argc<=1)
	{
		printf("no passing\n");
		return;
	}
	a=argv[1];
	while(*(a+i)!='\0')
	{
		if(*(a+i)==':')
			result++;
		i++;
	}
	printf("result is %d\n",result);
	return 0;
}