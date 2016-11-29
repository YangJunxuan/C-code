#include <stdio.h>

int main() {
	const int number = 10;
	int i, x;
	int cnt['A'] = {0};
	/*for(i =0; i <10; i++) {
		cnt[i] = 0;
	}*/
	scanf("%d", &x);
	while(x != -1) {
		if(x >=0 && x <=9) {
		cnt[x] ++;
	}
		scanf("%d", &x);
	}
	for(i =0; i <'A'; i++) {
		printf("%d\n", cnt[i]);
	}
}
