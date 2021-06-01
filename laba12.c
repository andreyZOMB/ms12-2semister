#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main() {
	int a[20], n, y, z;
	printf("Enter quantity of elements\n");
	scanf("%d", &n);
	printf("Enter elements\n");
	for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		a[i] = hesh(a[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
}
int hesh(int a) {
	int rez = a % 21 - 10;
	return rez;
}