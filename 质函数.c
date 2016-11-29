#include<stdio.h>


int isprime(int i) {
	int a, b=1;
	for(a=2;a<i;a++) {
		if(i%a==0) {
			b = 0;
			break;
		}
	}
	if(b==0)
	return 1;
	else
	return a;
}
int main() {
	int num, t = 2;
	scanf("%d", &num);
	//t = isprime(num);
	//printf("%d",t);
	if(isprime(num)==num)
	printf("%d=%d", num, num);
	else {
		printf("%d=", num); 
		while(isprime(num) != num) {
			if(num % t==0) {
				if(isprime(t)==t) {
					num /= t;
					printf("%dx", t);
					//continue;
				}
			}
			else
			t++;
	}
	printf("%d", num);
}
}

