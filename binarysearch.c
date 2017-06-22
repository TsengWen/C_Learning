#include <stdio.h>

int binarysearch(int x, int v[] , int n);

void main()
{

	int v[] = {12, 24, 45, 67, 89, 100 , 105, 106};
	int i;

	for (int i = 0; i < 8; ++i)
	{
		printf("v[%d] = %d\n", i, v[i] );
	}
	printf("24 posetion : %d\n",binarysearch(24, v, 8) );



}

int binarysearch(int x, int v[], int n){

	int low, high, mid;

	low = 0;
	high = n - 1;

	mid = ( low + high ) / 2;

	while(low <= high && x != v[mid]){
		if (x <= v[mid])
		{
			high = mid -1;
		}else 
			low = mid +1;

		mid = (low + high ) / 2;




	}


	if (x == v[mid])
	{
		return mid;
	}else
		return -1;



}