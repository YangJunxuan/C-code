#include <stdio.h>

int main() {
	int num, n=0, x=0, bs=0;
	scanf("%d",&num);
	while(num>0) {
		x = num % 10;
		n++;
		int t = n;
		int s = 1;
		if (x%2==n%2) {
			while(t > 1) {
				s = s * 2;
				t--;  
			}
			bs = bs + s;
			}
		else {
			;
		}
		num /= 10;
	}
	printf("%d", bs);
} 
