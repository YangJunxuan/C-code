#include <stdio.h>

int main() {
	int i, x; 		//判断x是不是素数 
	int n, m, sum; 		//输入nm的值 nm为素数个数起点终点
	scanf("%d %d", &n, &m);
	int cnt = 0;
	int exit = 0;
	for (x = 2;;x++) {
		//printf("x=%d ",x);
		int isprime = 1;
	for (i = 2;i < x;i++) {
		//printf("i=%d ",i);
		if (x % i ==0) {
			isprime = 0;
			break;
		}
	}
		//printf("isprime=%d ",isprime);
	if (isprime == 1) {
		cnt++;
		//printf("cnt=%d ",cnt);
	if(cnt >= n) {
		sum += i;
	}
}
	//printf("sum=%d\n",sum);
	if (cnt >= m) {
		break;
}
}
	printf("%d",sum);
}
	
