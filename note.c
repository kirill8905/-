// note

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

   struct note{
           char f_name[255];
           char l_name[255];
           char num[11];
        };
   struct note MyNote[N];

void search_function(char str[])
{
    int i;
        size_t n = strlen(str);
                if (n > 0 && str[n-1] == '\n') {
                str[n-1] = 0;
                }
//        for (i=0; i<5; i++)
//       	{
                if (strstr(MyNote[i].l_name, str)) {
			printf("%s %s %s", MyNote[i].f_name, MyNote[i].l_name, MyNote[i].num);}
                else{
                        puts("Not Found");}
//        }
}

int main()
{
   unsigned int srvc;
   int i = -1;
   char menu, menu2;
   char var;
   char str;
   char *strf;

        struct note *ptr;
        ptr = &MyNote;

for (;; getchar())
{
   puts("\n--- Subscriber Directory ---");
   srvc = sizeof(struct note);
   printf("*size of struct note = %d\n", srvc);
   puts("\n1. Add subscriber");
   puts("2. Display a list of subscribers");
   puts("3. Search");
   puts("4. Exit\n");
   puts("Enter number of menu: ");
   menu = getchar();

   switch (menu)
	{
	case 49:
		{

		for (i = i + 1; i < N; i++)
			{
			getchar();
			puts("\n--- Add subscriber ---\n");
			puts("\nEnter First name of subscriber: ");
			fgets(MyNote[i].f_name, 255, stdin);
			puts("\nEnter Last name of subscriber: ");
			fgets(MyNote[i].l_name, 255, stdin);
			puts("\nEnter Phone number of subscriber: ");
			fgets(MyNote[i].num, 11, stdin);
			puts("\n--- operation successful ---\n");
			printf("First name: %s", MyNote[i].f_name);	
			printf("Last name: %s", MyNote[i].l_name);
			printf("Phone number: %s\n", MyNote[i].num);	
			printf("i = %d", i);
			puts("\nRepeat operation (y/n)?");
			menu2 = getchar();
			if (menu2 == 'y') {
				continue; }
			else if (menu2 == 'n') { 
				break; }
			else if (menu2 != 'y' || menu2 != 'n'){
				goto loop;}
			}
		break;
		}
	   case 50:
		{
		puts("--- List of subscribers ---");
		for (int ii = 0; ii < N; ii++)
			{
			printf("First name: %sLast name: %sPhone number: %s", MyNote[ii].f_name, MyNote[ii].l_name, MyNote[ii].num);
//			puts("");
			printf("i = %d\n\n", ii);
			}
		break;
		}
	   case 51:
		{
			getchar();
			puts("--- Search ---\n");
			puts("Enter subscriber Name: ");
			fgets(str, 255, stdin);
			search_function(str);
		break;
		}

	   case 52:
		{
		printf("--- exit programm ---\n");
		return 0;
		}
loop:	   
		default:
		for (; menu2 != 'y' || menu2 != 'n';)
		{
//		getchar();
		printf("\n--- YOUR ENTER LABUDA! ---\n\a");
		puts("\nReturn basic menu or exit (y - return, n - exit)?");
		menu2 = getchar();
		if (menu2 == 'y') {
		break; }
		else if (menu2 == 'n') { 
		return 0; }
		}
	}
}
}
