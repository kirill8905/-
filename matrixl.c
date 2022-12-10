#include <stdio.h>

#define N 3
#define M 3


int main()
{
   int arr[N][M];
   int i, j, a = 1, b = 1;

        for(i = 0; i < N; i++)
           { 
		for(j = 0; j < M; j++)
   		   {
		arr[i][j] = 1;
//		printf(" %d ", arr[i][j]);
		   }
//		printf("\n");
   	   }
	
	for(i = 0; i < N, b < 2; i++, b++)
           { 
		arr[i][j] = 0;
		for(j = 0; j < M, a < 3; j++, a++)
   		   {
			arr[i][j] = 0;
		   }
		printf("\n");
   	   }

	for(i = 0; i < N; i++)
           { 
		for(j = 0; j < M; j++)
   		   {
			printf(" %d ", arr[i][j]);
		   }
		printf("\n");
	   }
	printf("\n");
//printf(" %d \n", arr[1][1]);
}    

