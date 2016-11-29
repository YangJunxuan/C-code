#include <stdio.h>

int main() {
	int s, i, m, n,a,b,c,d;
	scanf("%d", &s);
	if (s%2 == 0)
	s = s - 1;
	for (i = 1;i <= (s/2+1);i++) {
		for (m = 1;m <= (s/2+1)-i;m++)
		printf("  ");
		for (n = 1;n <= 2*i-1;n++)
		printf(" *");
		printf("\n");
	}
	for (a = s / 2;a >= 0;a--) {
		for(c = 1; c <= (s / 2 + 1) - a;c++)
		printf("  ");
		for(b = 1; b <= 2 * a - 1;b++)
		printf(" *");
		printf("\n");
	}
}
