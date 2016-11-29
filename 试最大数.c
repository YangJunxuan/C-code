#include <stdio.h>

int main() {
	long int n = 1, a;
	scanf("%ld",&a);
	a = a / 10;
	while(a>0) {
		n++;
		a /= 10;
	}
	printf("%ld",n); 
}
