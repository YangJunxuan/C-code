#include <stdio.h>

int main() {
	int a, count1 = 0, count2 = 0;
	scanf("%d", &a);
	while(a != -1) {
		if(a % 2 ==0) {
			count1++;
		}
		else {
			count2++;
		}
		scanf("%d", &a);
	}
	printf("%d %d",count2,count1);
	return 0;
}
