#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int a = rand()%100+1;
	int n,count = 0;
	printf("���Ѿ�׼����һ��һ��һ�ٵ���");
	do {
		scanf("%d", &n);
		if(n>a) {
			printf("��\n");
		}
		else if(n<a)
		printf("small\n");
		count++;
	}while(n != a);
	printf("excellent!the number you guess is %d,times are %d \n", a, count);
	return 0;
}
