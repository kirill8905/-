#include <stdio.h>

int main()

{
  int a = 0x00CCAABB, i;
  unsigned int c;

    c = (a & 0xFF00FFFF)|0x00DD0000;
    printf("\na = 0x%x\n\n", a);   
    printf("1 byte of a = 0x%x\n", a & 0xFF);

       for (i = 2; i <= 4; i++)
           {
	       a = a >> 8;
	       printf("%d byte of a = 0x%x\n", i, a & 0xFF);
	   }

    printf("\nnew a = 0x%x\n\n", c);

  return 0;
}
