#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int hesh(int a) {
	return((a % 21) - 10);
}
void main() {
	int n1=0,n2=0,n3=0,l1,l2,now, j = 0, a[20], b[20],c[40];
	char s[10];
	printf("Enter size of 1 array <20\n");
	scanf("%d", &l1);
	printf("Enter array\n");
	for (int i = 0; i < l1; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter size of 2 array <20\n");
	scanf("%d", &l2);
	printf("Enter array\n");
	for (int i = 0; i < l2; i++) {
		scanf("%d", &b[i]);
	}
	n1 = l1-1;
	n2 = l2-1;
	while ((n1>=0)&(n2>=0)){
		if (a[n1]<b[n2]) {
			now = a[n1];
			n1--;
		}
		else {
			now = b[n2];
			n2--;
		}
		c[n3] = now;
		n3++;
	}
	if (n1 == -1) {
		for (n2; n2 >-1; n2--) {
			c[n3] = b[n2];
			n3++;
		}
	}
	else {
		for (n1; n1 >-1; n1--){
			c[n3] = a[n1];
			n3++;
		}
	}
	for (int i = 0; i < n3; i++) {
		printf("%d\n", c[i]);
	}
}