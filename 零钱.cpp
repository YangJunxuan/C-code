#include <stdio.h>

int main() {
	int x;
	int one, two, five;
	x = 2;
	for (five = 1; five < x*10/5; five++) {
		for ( two = 1; two < x*10/2; two++) {
			for ( one = 1; one < x*10; one++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("������%d��һ��%d������%d����ǵõ�%dԪ\n", one, two, five, x);
					break; 
				}
			}
			break;
		}
		break;
	}
} 
