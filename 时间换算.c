#include <stdio.h>

int main() {
	int BJT, UTC = 0;
	scanf ("%d",&BJT);
	UTC = BJT - 800;
	if (UTC < 0) {
		UTC = BJT + 1600;
	}
	printf("%d",UTC);
} 
