#include <stdio.h>

int main() {
	int x, a;
	scanf("%d", &x);
	int mask = 1;
	int t = x;
	while (t>9) {
		t /=10;
		mask *=10;
	}
	do {
		a = x / mask;
		printf("%d", a);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
}
