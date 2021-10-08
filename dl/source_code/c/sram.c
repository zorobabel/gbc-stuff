/* test saveram - save.c */

#include <stdio.h>
#include <gb.h>

char *Letra;

int main()
{
	ENABLE_RAM_MBC1;
	Letra = (char *)0xa000;
	printf("A letra agora eh %s", Letra);
	if (Letra[0] == NULL) Letra[0] = 0;
	Letra[0]++;
	DISABLE_RAM_MBC1;
	return(0);
}

/* =====================
everytime the program runs, the letter is different.
compiled as follows:

lcc -Wl-yt2 -Wl-yo4 -Wl-ya4 -o save.gb save.c */
