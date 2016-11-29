#include <stdio.h>

int main() {
	int i, j;
	scanf("%d", &i);
	char cha[i];
	for(j=0;j<i;j++) {
		scanf("%s", &cha[j]);
	}
	for(j=0;j<i;j++)
	printf("%s", cha[j]);
}
