
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int n, ans = 0;
	char* str;
	scanf("%d", &n);
	str = (char*)calloc((n * 8) + 1, sizeof(char));
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (i % 7 == 0 && i != 0) {
			printf("%d ", ans);
			ans = 0;
		}
		if (str[i] == '-') ans |= (1 << (7 - (i % 8)));
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char n[5] = { 0 };
	scanf("%d", &n[0]);
	printf("%s", n);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	unsigned short int i[3] = { 0x1234,0x5678,0xABCD };
	unsigned char* p = (unsigned char*)&i + 1;
	unsigned short int* pi = (unsigned short int*)((unsigned char*)&i + 1);
	printf("0x%X\n0x%X", *p, *pi);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[3][3][3], n[6] = { 0 }, cnt = 0, k = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int l = 0; l < 3; l++) {
				scanf("%d", &a[i][j][l]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			n[0] += a[0][i][j];
			n[1] += a[2][i][j];
			n[2] += a[i][0][j];
			n[3] += a[i][2][j];
			n[4] += a[i][j][0];
			n[5] += a[i][j][2];
			}
   }
	if (n[0] == n[1]) cnt++;
	if (n[2] == n[3]) cnt++;
	if (n[4] == n[5]) cnt++;
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*문제 설명
3차원 X합
입력 예시 복사
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
4 5 6
7 8 9
7 8 9
7 8 9
출력 예시 복사
10 40 25 25 20 30*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int n[3][3][3], ans[6] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int l = 0; l < 3; l++) scanf("%d", &n[i][j][l]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j || i + j == 2) {
				ans[0] += n[0][i][j];
				ans[1] += n[2][i][j];
				ans[2] += n[i][0][j];
				ans[3] += n[i][2][j];
				ans[4] += n[i][j][0];
				ans[5] += n[i][j][2];
			}
		}
	}
	for (int i = 0; i < 6; i++) printf("%d ", ans[i]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	unsigned int n, n1, n2, n3, n4;
	scanf("%u", &n);
	n1 = n & 0xFF000000;
	n2 = n & 0x00FF0000;
	n3 = n & 0x0000FF00;
	n4 = n & 0x000000FF;
	n1 >>= 16;
	n2 >>= 16;
	n3 <<= 16;
	n4 <<= 16;
	printf("%u", n1 | n2 | n3 | n4);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N, X, arr[1000] = { 0 }, idx = 0;
	scanf("%d %d", &N, &X);
	while (N > 0) {
		arr[idx] = N % X;
		N /= X;
		idx++;
	}
	for (int i = idx - 1; i >= 0; i--) printf("%d", arr[i]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	return 0;
}
#endif

