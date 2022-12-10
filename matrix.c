#include <stdio.h>

#define N 3
#define M 3


int main()
{
   int arr[N][M];
   int i, j, a;
   a = 1;

        for(i = 0; i < N; i++)
           { 
		for(j = 0, a; j < M; j++, a++)
   		   {
			arr[i][j] = a;
			printf(" %d ", arr[i][j]);
		   }
		printf("\n");
   	   }
}    

