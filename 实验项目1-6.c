#include<stdio.h>

int same(int a,int b) {
	int i;
	int t;
	if (a>b)
	t = a;
	else
	t = b;
	for(i = t;i>=t&&i<=a*b;i++) {
		if(i%a==0&&i%b==0)
		break;
	}
	return i;
} 
int main() {
	int i,a[5];
	for(i=0;i<5;i++) {
	scanf("%d", &a[i]);
}
	int t,s;
	for(t = 0,s=same(a[0],a[1]);t < 3;t++) {
		s = same(s,a[t+2]);
	}
	printf("%d",s);
}
