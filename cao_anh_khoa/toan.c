<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
int cong(int a, int b)
{
	int tong = 0;
	tong = a + b;
	return tong;

}
int tru(int a, int b)
{
	int tru = 0;
	tru = a - b;
	return tru;

}
int nhan(int a, int b)
{
	int nhan = 0;
	nhan = a * b;
	return nhan;

}
int chia(int a, int b)
{
	int chia = 0;
	chia = a / b;
	return chia;
}
void main()
{
	int x = 1;
	int y = 2;
	printf("%d", cong(x,y));
	printf("%d", tru(x, y));
	printf("%d", nhan(x, y));
	printf("%d", chia(x, y));
}