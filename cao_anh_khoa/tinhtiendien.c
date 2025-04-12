#include<stdio.h>
#include<math.h>
long  tiendien(int a) {
	int step = 1;
	long c = 0;
	switch (step) {
	case 1:
		if (a <= 52) {
			c = a * 1893;
			/*printf(" tong so tien: %ld ", m);*/

			break;
		}

	case 2:

		if (a <= 104) {
			c = 52 * 1893 + (a - 52) * 1956;
			/*printf("tong so tien: %ld", m);*/

			break;
		}

	case 3:

		if (a <= 207) {
			c = 52 * 1893 + 52 * 1956 + (a - 103) * 2271;
			/*printf("tong so tien: %ld", m);*/
			break;
		}
	case 4:

		if (a <= 310) {
			c = 52 * 1893 + 52 * 1956 + 103 * 2271 + (a - 207) * 2806;
			/*	printf("tong so tien: %ld", m);*/
			break;
		}
	case 5:

		if (a <= 413) {
			c = 52 * 1893 + 52 * 1956 + 103 * 2271 + 103 * 2860 + (a - 310) * 3197;
			/*	printf("tong so tien: %ld", m);*/
			break;
		}

	case 6:
		c = 52 * 1893 + 52 * 1956 + 103 * 2271 + 103 * 2860 + 103 * 3197 + (a - 413) * 3302;
		/*	printf("tong so tien: %ld ", m);*/
		break;

	}
	return m;
}