#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char stringl[20];
	char string2[] = "string literal";
	int i;
	printf("Enter a string:");

	scanf_s("%19s", stringl, (unsigned)_countof(stringl));
	printf("stringl is: %s \nstring2 is: %s\nstring1 with spaces between characters is: \n", stringl, string2);
	for (i = 0; stringl[i] != '\0'; i++)
		printf("%c ", stringl[i]);
	printf("\n");
	system("pause");
	return 0;
}