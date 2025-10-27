#include "main.h"
#include <stdio.h>

/**
* print_chessboard - one  pointer
* @a : pointer to an int
*
* Return: void
*/
void print_chessboard(char (*a)[8])
{
int i, s;
for (i = 0; i < 8; i++)
{
for (s = 0; s < 8; s++)
{
printf("%c", a[i][s]);
}
printf("\n");
}
}
