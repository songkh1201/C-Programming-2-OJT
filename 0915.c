#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
%d -> int
%hd -> short
%hhd -> char

%c는 문자의 형태로 데이터를 입력 받기 위한 서식 문자
%hhd는 숫자의 형태로 데이터를 받기 위한 서식 문자
unsigned char data[10] = {0};
scanf("%hhd",&data[0]);
*/


#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	if (n % 2) n--;
	printf("%u", n);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int data, key;
	scanf("%d %d", &data, &key);
	printf("%d", data ^ key);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int data, n, num1, num2;
	scanf("%d %d", &data, &n);
	num1 = data >> 4;
	num2 = data % 16;
	num1 = num1 << (4 + n);
	num2 = num2 >> n;
	num1 %= 256;
	printf("%d", num1 | num2);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	char a[4], temp;
	scanf("%d", &a);
	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	temp = a[1];
	a[1] = a[3];
	a[3] = temp;
	printf("%d", a[0]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], num, idx;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &num);
	for (int i = 0; i < 10; i++) {
		if (arr[i] == num) idx = i;
	}
	printf("%d", idx);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int x, n, pownum, idx;
	scanf("%d %d", &x, &n);
	for (idx = 0; (int)pow(2, idx) <= x; idx++);
	for (int i = idx - 1; i >= 0; i--) {
		if (i == n) {
			printf("%d", x / (int)pow(2, i));
			break;
		}
		if ((int)pow(2, i) <= x) {
			x -= (int)pow(2, i);
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[8], ans = 0;
	for (int i = 0; i < 8; i++) scanf("%1d", &arr[i]);
	for (int i = 0; i < 8; i++) {
		ans += arr[i];
		printf("%d", ans);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	unsigned char a[4];
	scanf("%u", a);
	for (int i = 3; i >= 0; i--) {
		printf("%c", a[i]);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	unsigned int N, X, * arr, idx, idx2, ans;
	scanf("%u %u", &N, &X);
	for (idx = 0; pow(X, idx) <= N; idx++);
	idx2 = idx;
	for (int i = 0; i < idx; i++) {
		if (i == idx - 1) {
			ans = N % X;
			printf("%u", ans);
		}
		else if (N == 0) {
			ans = 0;
			printf("%d", ans);
		}
		else if (N >= (int)pow(X, idx2 - 1)) {
			ans = N / (int)pow(X, idx2 - 1);
			printf("%u", ans);
			N -= ans * (int)pow(X, idx2 - 1);
		}
		else {
			ans = 0;
			printf("%d", ans);
		}
		idx2--;
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, arr[8], * nums, idx, ansidx = 0;
	char* ans;
	scanf("%d", &n);
	nums = (int*)malloc(n * sizeof(int));
	ans = (char*)malloc(((8 * n) + 1) * sizeof(char));
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	for (int i = 0; i < n; i++) {
		idx = 0;
		for (int j = 7; j >= 0; j--) {
			arr[idx] = nums[i] >> j & 1;
			idx++;
		}
		for (int j = 0; j <= 7; j++) {
			if (arr[j]) {
				ans[ansidx] = '-';
			}
			else {
				ans[ansidx] = '_';
			}
			ansidx++;
		}
	}
	ans[ansidx] = '\0';
	printf("%s", ans);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//unsigned int n;
	//unsigned int a1, a2, a3, a4;
	unsigned char n[4];
	scanf("%u", &n);
	/*a1 = n & 0xFF000000;
	a2 = n & 0x00FF0000;
	a3 = n & 0x0000FF00;
	a4 = n & 0x000000FF;
	printf("%u", (a1 >> 24) | (a2 >> 8) | (a3 << 8) | (a4 << 24));*/  // a1=12 a2=34 a3=56 a4= 78
	printf("%u", (n[0] << 24) | (n[1] << 16) | (n[2] << 8) | (n[3] << 0));  // n[0]=78 n[1]=56 n[2]=34 n[3]=12
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n, arr[8], res, idx = 0, * nums;
	char* ans;
	scanf("%d", &n);
	ans = (char*)malloc(((8 * n) + 1) * sizeof(char));
	nums = (int*)malloc(n * sizeof(int));
	scanf("%s", ans);
	for (int i = 0; i < n; i++) {
		res = 0;
		for (int j = 0; j < 8; j++) {
			if (ans[(i * 8) + j] == '-') {
				arr[j] = 1;
			}
			else {
				arr[j] = 0;
			}
		}
		for (int j = 0; j < 8; j++) {
			if (arr[j] == 1) {
				res += (int)pow(2, 7 - j);
			}
		}
		nums[idx] = res;
		idx++;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", nums[i]);
	}
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
	}
	for (int i = 0; i <= idx; i++) printf("%d", arr[i]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, arr[8], num = 0;
	scanf("%d", &n);
	for (int i = 7; i >= 0; i--) {
		arr[7 - i] = n >> i & 1;
	}
	for (int i = 0; i < 8; i++) {
		printf("%d", arr[i]);
	}
	for (int i = 0; i < 8; i++) {
		if (arr[i]) {
			num += 1 << (7 - i);
		}
	}
	printf("\n%d", num);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

