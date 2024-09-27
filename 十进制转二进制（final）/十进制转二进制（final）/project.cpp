//十进制转二进制
#include<stdio.h>
#include<math.h>
int GET() {
	int x;
	printf("Please enter a number:");
	scanf_s("%d", &x);
	return x;
}
int main() {
	int a = GET();
	int ss[100];
	int len = -1;
	int i;
	for (i = 0; a != 0; i++) {
		if (a % 2 == 0) {
			ss[i] = 0;
		}
		else {
			ss[i] = 1;
		}a = int(a / 2);
		len += 1;
	}
	for (; len != -1; len--) {
		printf("%d", ss[len]);
	}
}