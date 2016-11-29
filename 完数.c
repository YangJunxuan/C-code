#include <stdio.h>
#include <stdlib.h>

int completenum(int i) {
	int t, sum=0;
	for(t=1;t<i;t++) {
		if(i%t==0)
		sum += t;
	}
	if(sum==i)
	return sum;
	else
	return 0;
} 
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int t, cnt=0;
	for(t=n;t<m;t++) {
		if(completenum(t)) {
		cnt++; 
		if(cnt ==1)
		printf("%d", t);
		if(cnt > 1)
		printf(" %d", t);
	}
	}
	if(cnt == 0)
		printf("NIL\n");
}
