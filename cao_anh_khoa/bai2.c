#include<stdio.h>
#include"toan.h"
void main()
{
	printf("hello world");
	int x = 3;
	int y = 4;
	int abc = cong(x, y);
    int abcd = tru(x, y);
	int abcde = nhan(x, y);
	int abcdef = nhan(x, y);
	printf("%d",abc);
	printf("%d",abcd);
	printf("%d",abcde);
	printf("%d",abcdef);

}