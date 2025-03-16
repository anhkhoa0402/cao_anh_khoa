#include <stdio.h>

void main()
{
	int i = 0;
	char str[] = "HellowHJFJ";
	while (str[i] != 0)
	{
		if (str[i] > 65 && str[i] < 90)
		{
			i++;
		}

	}
	printf("so y tu trong chuoi :%d", i);
}