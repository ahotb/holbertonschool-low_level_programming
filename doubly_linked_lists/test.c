#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int is_palindrome(int n)
{
	char str[20];
	sprintf(str, "%d", n);
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
			return 0;
	}
	return 1;
}

int main(void)
{
	int largest = 0;
	int product, i;
	FILE *file;

	for (i = 999; i >= 100 ;i--)
	{
		for (int j = i; j >= 100; j--)
		{
			product = i * j;
			if (is_palindrome(product) && product > largest)
			{
				largest = product;
			}
		}
	}
		file = fopen("102-result", "w");
		if (file == NULL)
			return (1);

		fprintf(file, "%d", largest);
		fclose(file);
	
	//printf("numbers is: %d\n", largest);
	return 0;
}