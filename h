#include <stdio.h>
int main()
{
	char ch;
	while ((ch = getchar()) != '\n')//1
	{
		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))//2
			ch = ch - 'a' + 'A';//3
		putchar(ch);
	}
	printf("\n");
	return 0;
}
