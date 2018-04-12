#include<stdio.h>
#include<stdlib.h>

/*
 A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:

Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]

Note:
The boundaries of each input argument are 1 <= left <= right <= 10000.
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i,j,i_tmp;
    *returnSize=0;
    int *result=malloc(sizeof(int));
    for(i=left;i<=right;i++)
    {
    	i_tmp=i;
    	while(i_tmp>0)
    	{
    		j=i_tmp%10;
    		if(!j)
    			break;
    		if(i%j!=0)
    			break;
    		else
 				i_tmp=i_tmp/10;
    	}
    	if(!i_tmp)
    	{
    		(*returnSize)++;
    		result=realloc(result,(*returnSize)*sizeof(int));
    		result[(*returnSize)-1]=i;
    	}

    }
    return result;
}

int main(int argc, char const *argv[])
{
	int *returnSize=malloc(sizeof(int));
	int *result;
	int i=0;
	result=selfDividingNumbers(1,22,returnSize);
	for(;i<*returnSize;i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	free(result);
	free(returnSize);
	return 0;
}

/*
int main(int argc, char const *argv[])
{
	int *a=malloc(10*sizeof(int));
	int *b;
	int i=0;
	for(;i<10;i++)
	{
		a[i]=i;
		printf("a[%d] is %d\n", i,a[i]);
	}
	b=realloc(a,(i+1)*sizeof(int));
	if(b)
	{
		b[i]=i;
		for(i=0;i<11;i++)
			printf("b[%d] is %d\n", i,b[i]);
		free(b);
	}
	
	else
		free(a);


	return 0;
}
*/
