#include <stdio.h>
#include <string.h>

char tracks[][80] = {
"I left my heart in Harvard Med School",
"Newark, Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};


void find_track(char search_for[])
{
    int i;
	size_t n = strlen(search_for);
		if (n > 0 && search_for[n-1] == '\n') {
    		search_for[n-1] = 0;
		}   
	for (i=0; i<5; i++) {
        	if (strstr(tracks[i], search_for)) {
		printf("Track %i: '%s'\n", i, tracks[i]);
        	}
	}	
}

int main() {
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
    return 0;
}





/*
int main(void)
{
   char mstr[255] = "maza faka";
   char sstr[255] = "za";
  
   char *p;

  p = strstr(mstr, sstr);
  printf(p);

  return 0;
}

*/
/*
int main(void)
{
  char mstr[255];
  char sstr[255];

//  char fnd;
  char *ptr;
//  ptr = &fnd;

	puts("Enter the main string:");  
	fgets(mstr, 255, stdin);
	puts("Enter the substring:");
	fgets(sstr, 255, stdin);
	ptr = strstr(mstr, sstr);
	printf("%s", ptr);

//  printf("%sexists in %s", sstr, mstr);
   
  	if(ptr = NULL) {
 	puts("Not Found");
   	}

  return 0;
}
*/
