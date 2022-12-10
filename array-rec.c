#include <stdio.h>

#define N 5
#define M 5

int main()
{
   int arr[N], arr1[M];
   int i, j, a, b;
   a = 1;

        for(i = 0, a; i < N; i++, a++)
           { 
		arr[i] = a;
		printf(" %d ", arr[i]);
   	   }
	printf("\n");


	for (i = 4, j = 0; i > -1, j < M; --i, ++j)
		arr1[j] = arr[i];

	for (i = 0, j = 0; i < N, j < M; i++, ++j)
	   {	
		arr[i] = arr1[j];
		printf(" %d ", arr[i]);
 	   }
	printf("\n");

printf(" %d \n", arr[3]);

}    
