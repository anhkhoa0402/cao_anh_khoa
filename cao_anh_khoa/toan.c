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
void main1()
{
	int x=cong(1, 2);
	int y=tru(1, 2);
	int z=nhan(1, 2);
	int w=chia(1, 2);
	printf("%d,%d,%d,%d", x, y, z, w);
	
}