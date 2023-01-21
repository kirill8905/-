#include <stdio.h>

#define N 5
#define M 5


int main()
{
   unsigned int arr[N][M];
   unsigned int i=0, j=0, a = 1, b = 1;

        for(i = i+i; i < N; i++)
           { 
		for(j = j; j < M; j++, a++)
   		   {
			arr[i][j] = a;
		   }

		for(i = i + 1; i < N; i++, a++)
		   {
			arr[i][j-1] = a;
		   }
//printf("i-%d\n", i);
//printf("j-%d\n", j);
i=i-1;
		for(j = j - 1; j > 0; --j, a++)
		   {
			arr[i][j-1] = a;
		   }

//printf("i-%d\n", i);
//printf("j-%d\n", j);

		for(i; i > 1; --i, a++)
		   {
			arr[i-1][j] = a;
		   }
			j = j + 1;	// i = i + 1;
				
printf("i-%d\n", i);
printf("j-%d\n", j);


	   }


/*	
	for(i = 0; i < N, b < 2; i++, b++)
           { 
		arr[i][j] = 0;
		for(j = 0; j < M, a < 3; j++, a++)
   		   {
			arr[i][j] = 0;
		   }
		printf("\n");
   	   }
*/
	for(i = 0; i < N; i++)
           { 
		for(j = 0; j < M; j++)
   		   {
			printf(" %d ", arr[i][j]);
		   }
		printf("\n");
	   }
	printf("\n");

printf(" %d \n", arr[4][3]);
}    

