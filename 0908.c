#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("* ");
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, notstar;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		notstar = 2 * (n - i);
		for (int j = 0; j < notstar; j++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[31];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			printf("%c", str[i] - 'a' + 'A');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] - 'A' + 'a');
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], min, minidx;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			min = arr[i];
			minidx = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minidx = i;
		}
	}
	printf("%d %d", min, minidx);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], ok = 0, avg = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	avg /= 10;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == avg) {
			ok = 1;
			break;
		}
	}
	printf("%d", ok);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, max = 1;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			max = i;
		}
	}
	for (int i = 1; i <= max; i++) {
		printf("%d ", i);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n)
{
	if (n <= 1) return 1;
	if (n == 2) return 0;
	if (n % 2 == 0) return 1;
	for (int i = 3; i < n / 2; i += 2) {
		if (n % i == 0) return 1;
	}
	return 0;
}

int main(int argc, char const* argv[])
{
	int a, b;
	scanf("%d%d", &a, &b);

	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, ok = 1, jari, arr[9] = { 0, }, idx = 0, len, cpyn, startidx;
	scanf("%d", &n);
	cpyn = n;
	for (idx = 0; n > 0; idx++) {
		arr[idx] = n % 10;
		n /= 10;
	}
	if (idx % 2 == 0) {
		len = idx / 2;
	}
	else {
		len = (idx / 2) + 1;
	}
	for (int i = 0; i < len; i++) {
		if (arr[i] != arr[idx - i - 1]) {
			ok = 0;
			break;
		}
	}
	if (ok) {
		printf("palindrome");
	}
	else {
		printf("%d", cpyn);
		for (int i = 0; i < idx; i++) {
			if (arr[i] != 0) {
				startidx = i;
				break;
			}
		}
		for (int i = startidx; i < idx; i++) {
			printf("%d", arr[i]);
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	int idx, arr[100];
	scanf("%u", &n);
	for (idx = 0; n > 0; idx++) {
		arr[idx] = n % 10;
		n /= 10;
	}
	for (int i = idx - 1; i >= 0; i--) {
		if (i % 2 == 0) {
			printf("%d", arr[i]);
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, len, cnt = 0, ok;
	char str[101];
	scanf("%s\n%d", str, &n);
	len = strlen(str);
	cnt += len;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= len - i + 1; j++) {
			ok = 1;
			for (int l = 0; l < i / 2; l++) {
				if (str[j + l] != str[j + i - 1 - l]) {
					ok = 0;
				}
			}
			if (ok) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[31];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			printf("%c", str[i] - 'A' + 'a');
		}
		else printf("%c", str[i]);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], max, maxidx;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			max = arr[i];
			maxidx = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			maxidx = i;
		}
	}
	printf("%d %d", max, maxidx);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], ok = 0, sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] == sum) {
			ok = 1;
			break;
		}
	}
	printf("%d", ok);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, min = 1;
	scanf("%d %d", &n, &m);
	for (int i = n + 1; ; i++) {
		if (i % m == 0) {
			min = i;
			break;
		}
	}
	for (int i = 1; i <= min; i++) {
		printf("%d ", i);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, ok = 1, jari, arr[9] = { 0, }, idx = 0, len, startidx;
	scanf("%d", &n);
	for (idx = 0; n > 0; idx++) {
		arr[idx] = n % 10;
		n /= 10;
	}
	if (idx % 2 == 0) {
		len = idx / 2;
	}
	else {
		len = (idx / 2) + 1;
	}
	for (int i = 0; i < len; i++) {
		if (arr[i] != arr[idx - i - 1]) {
			ok = 0;
			break;
		}
	}
	if (ok) {
		printf("palindrome");
	}
	else {
		for (int i = 0; i < idx; i++) {
			if (arr[i] != 0) {
				startidx = i;
				break;
			}
		}
		for (int i = startidx; i < idx; i++) {
			printf("%d", arr[i]);
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, len, cnt = 0, ok;
	char str[101];
	scanf("%s\n%d", str, &n);
	len = strlen(str);
	for (int i = n; i <= len; i++) {
		for (int j = 0; j <= len - i + 1; j++) {
			ok = 1;
			for (int l = 0; l < i / 2; l++) {
				if (str[j + l] != str[j + i - 1 - l]) {
					ok = 0;
				}
			}
			if (ok) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	int idx, arr[100];
	scanf("%u", &n);
	for (idx = 0; n > 0; idx++) {
		arr[idx] = n % 10;
		n /= 10;
	}
	for (int i = idx - 1; i >= 0; i--) {
		if (i % 2 == 1) {
			printf("%d", arr[i]);
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n)
{
	if (n <= 1) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;
	for (int i = 3; i < n / 2; i += 2) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main(int argc, char const* argv[])
{
	int a, b;
	scanf("%d%d", &a, &b);

	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int N[9] = { -1, };
	int m; // 분해
	for (int i = 0; i < 9; i++) {
		if (n > 0) {
			m = n % 10;
			N[i] = m;
			n = n / 10;
		}
		else {
			N[i] = -1;
	}
}
	int a; // 자릿수
	for (int i = 0; i < 9; i++) {
		if (N[i] != -1) {
			a = i + 1;
		}
	}
	int flag = 1;
	for (int i = 0; i < (a / 2); i++) {
		if (N[i] != N[a - 1 - i]) {
			flag = 0;
		}
	}
	if (flag == 1) {
		printf("palindrome");
	}
	else {
		for (int i = a - 1; i >= 0; i--) {
			printf("%d", N[i]);
		}
		for (int i = 0; i < a; i++) { // 009, 0101, 201
			if (N[i] > 0) {
				break;
			}
			if (N[i] == 0) {
				N[i] = -1;
			}
		}
		for (int i = 0; i < a; i++) {
			if (N[i] > -1) {
				printf("%d", N[i]);
			}
		}
	}
	//0101

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int n, c = 0, N[10] = { 0 }, p, d = 0, r = 0, R;
	scanf("%d", &n);
	p = n;
	while (p > 0) {
		p /= 10;
		c++;
	}
	p = n;
	for (int i = 0; i < c; i++) {
		N[i] = p % 10;
		p /= 10;
	}
	for (int i = 0; i < c / 2; i++) {
		int k = c - 1 - i;
		if (N[i] == N[k])
			d++;
	}
	p = n;
	if (d == c / 2)
		printf("palindrome");
	else {
		while (p != 0) {
			r = 10;
			r += p % 10;
			p /= 10;
		}
		R = r;
		c = 0;
		while (R != 0) {
			R /= 10;
			c++;
		}
		for (int i = 0; i < c; i++)
			n = 10;
		printf("%d", n + r);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int number;

	printf("부호 없는 정수를 입력하세요: ");
	scanf("%u", &number);

	unsigned int position = 1; // 현재 자릿수의 위치를 나타내는 변수
	unsigned int num2[10];

	while (number > 0) {
		unsigned int digit = number % 10; // 현재 자릿수 추출
		number /= 10; // 다음 자릿수로 이동

		num2[position - 1] = digit;

		position++; // 다음 자릿수로 이동
	}

	for (int i = position - 1; i >= 0; i--) {
		if (i % 2 != 0) {
			printf("%u", num2[i]);
		}
	}

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	unsigned int n, c = 0, t, r = 0;
	scanf("%u", &n);
	while (n != 0) {
		t = n % 10;
		for (int i = 0; i < c; i++) {
			t *= 10;
		}
		n /= 100;
		r += t;
		c++;
	}
	printf("%u", r);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	char a[100];
	int idx;
	for (idx = 0;; idx++) {
		scanf("%c", &a[idx]);
		if (a[idx] == '\n') break;
	}
	for (int i = 0; i < idx; i++) {
		if (i % 2 == 0) {
			printf("%c", a[i]);
		}
	}
	return 0;
}
#endif