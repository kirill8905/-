#include <stdio.h>

main()
{
  int a = 270533154, i;
  char *ptr;

  ptr = &a;

    printf("\na = %d\n\n", a);

       for (i = 1; i <= 4; i++)
           {
	       printf("%d byte of a = %d\n", i, *ptr);
	       ptr++;
	   }

       ptr = ptr - 2;
       *ptr = 25;

    printf("\nnew a = %d\n\n", a);

  return 0;
}
