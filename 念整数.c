#include <stdio.h>

int main() {
	int a; //a�Ƕ��������
	int t, m=1; //t����������� m����λ��  
	scanf("%d", &a);  
	if (a < 0) {
		printf("fu ");
		a = -a;
	}   
	int b = a;			//b����a 
	for (b;b > 9;b /= 10) {
		m *= 10;
	}
	for(;m > 0; ) {
		t = a / m;
		a = a % m;
		switch(t) {
			case 0: printf("ling"); break;
			case 1: printf("yi"); break;
			case 2: printf("er"); break;
			case 3: printf("san"); break;
			case 4: printf("si"); break;
			case 5: printf("wu"); break;
			case 6: printf("liu"); break;
			case 7: printf("qi"); break;
			case 8: printf("ba"); break;
			case 9: printf("jiu"); break;
		}
		if (m > 9)
		printf(" ");
		m /= 10;
	}
} 
