
#if 0
/*���� ���� n�� �Է¹޾�,
'*'(���� ��)�� n�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) printf("* ");
	return 0;
}
#endif

#if 0
/*���� ����
���� ���� n�� �Է¹޾�,
'*'(���� ��)�� ���̰� n�� ���� ������� �Ѵ�.
���� ���� ���̿��� n���� ����, ���� ���� ���̿��� 1���� ���� ��´�.
��, ���� ������ ������ ����ϸ�, �� ���̴� �������� �����Ѵ�.
�Է� ����
���� ���� n�� �Էµȴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int space = n - i - 1;
		for (int j = 0; j < space; j++) printf("  ");
		for (int j = 0; j <= i; j++) printf("* ");
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*���� ����
���� ���� n�� �Է¹޾�,
'*'(���� ��)�� ���̰� n�� ���� ������� �Ѵ�.
���� ���� ���̿��� n���� ����, ���� ���� ���̿��� 1���� ���� ��´�.
���� ���ʺ��� ����ϸ�, �� ���̴� �������� �����Ѵ�.
�Է� ����
���� ���� n�� �Էµȴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) printf("* ");
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*���� ����
�ִ� ���� 30�� ���ڿ��� �Է¹޾�,
�빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

��, <stdio.h> ���� �ٸ� ��� ������ ����ؼ��� �ȵȴ�. (���� �ڵ�� �ٽ� ����ȴ�.)

�Է� ����
�ִ� ���� 30�� ���ڿ��� �Էµȴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[31];
	scanf("%s", str);
	for (int i = 0; i < 30; i++) {
		if (str[i] == '\0') break;
		if (str[i] >= 'a' && str[i] <= 'z') printf("%c", str[i] - 'a' + 'A');
		else printf("%c", str[i] - 'A' + 'a');
	}
	return 0;
}
#endif

#if 0
/*���� ����
�ִ� ���� 30�� ���ڿ��� �Է¹޾�,
�빮�ڴ� �ҹ��ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

��, <stdio.h> ���� �ٸ� ��� ������ ����ؼ��� �ȵȴ�. (���� �ڵ�� �ٽ� ����ȴ�.)

�Է� ����
�ִ� ���� 30�� ���ڿ��� �Էµȴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[31];
	scanf("%s", str);
	for (int i = 0; i < 30; i++) {
		if (str[i] == '\0') break;
		if (str[i] >= 'A' && str[i] <= 'Z') printf("%c", str[i] - 'A' + 'a');
		else printf("%c", str[i]);
	}
	return 0;
}
#endif

#if 0
/*���� ����
���� �ٸ� ���� 10���� �־��� ��,
���� ���� ���� �� ���� �־��� ����(�ε���)��
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
int ���� ���� ���� 10���� �������� ���еǾ� �־�����.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], min, idx;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	idx = 0;
	for (int i = 1; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
			idx = i;
		}
	}
	printf("%d %d", min, idx);
	return 0;
}
#endif

#if 0
/*���� ����
���� �ٸ� ���� 10���� �־��� ��,
���� ū ���� �� ���� �־��� ����(�ε���)��
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
int ���� ���� ���� 10���� �������� ���еǾ� �־�����.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], max, idx;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	idx = 0;
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			idx = i;
		}
	}
	printf("%d %d", max, idx);
	return 0;
}
#endif

#if 0
/*���� ����
10���� ������ �Է¹޾� �迭�� �����Ѵ�.
�迭 ������ ��ü ����� ���ϰ�, 
�� ���� ���� ���� �迭 �ȿ� ������ 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, ����� �Ҽ��� �Ʒ��� ������.
�Է� ����
int ���� ���� ���� 10���� �������� ���еǾ� �Էµȴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], avg = 0, flag = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	avg /= 10;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == avg) flag = 1;
	}
	printf("%d", flag);
	return 0;
}
#endif

#if 0
/*���� ����
10���� ������ �Է¹޾� �迭�� �����Ѵ�.
�迭 ������ ��ü ���� ���ϰ�,
�� ���� ���� ���� �迭 �ȿ� ������ 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
int ���� ���� ���� 10���� �������� ���еǾ� �Էµȴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], sum = 0, flag = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] == sum) flag = 1;
	}
	printf("%d", flag);
	return 0;
}
#endif

#if 0
/*���� ����
�� ���� ���� n�� m�� �Է¹ް�,
1���� m�� ����̸鼭 n ������ �� �߿��� ���� ū ������
1�� ������Ű�鼭 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
n�� m�� �������� ���еǾ� �Էµȴ�.
�� ���� ������ int ���� ���� ���̴�.
n�� m���� ũ��.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, num;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		if (i % m == 0) num = i;
	}
	for (int i = 1; i <= num; i++) printf("%d ", i);
	return 0;
}
#endif

#if 0
/*���� ����
�� ���� ���� n�� m�� �Է¹ް�,
1���� m�� ����̸鼭 n �ʰ��� �� �߿��� ���� ���� ������
1�� ������Ű�鼭 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
n�� m�� �������� ���еǾ� �Էµȴ�.
�� ���� ������ int ���� ���� ���̴�.
n�� m���� ũ��.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, num;
	scanf("%d %d", &n, &m);
	for (int i = n + 1;; i++) {
		if (i % m == 0) {
			num = i;
			break;
		}
	}
	for (int i = 1; i <= num; i++) printf("%d ", i);
	return 0;
}
#endif

#if 0
/*���� ����
���� a�� b (a < b)�� �־��� ��,
a <= n <= b�� n �߿��� �Ҽ��� �ƴ� ������ ������ ����Ϸ��� �Ѵ�.
�Ҽ��� �Ǵ��ϴ� �Լ��� isPrime�� �ϼ��Ͽ� ����Ͽ��� �ϸ�, �Ҽ��� �ƴ� ���� ������ cnt ������ �����Ѵ�.
������ ���õ� �ڵ�� ������ �� ����.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n)
{
	if (n < 2) return 0;
	else if (n == 2) return 1;
	else if (n % 2 == 0) return 0;
	else {
		for (int i = 3; i <= n / 2; i += 2) {
			if (n % i == 0) return 0;
		}
	}
	return 1;
}

int main(int argc, char const* argv[])
{
	int a, b;
	scanf("%d%d", &a, &b);

	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (isPrime(i) == 0) cnt++;
	}

	printf("%d", cnt);

	return 0;
}
#endif

#if 0
/*���� ����
���� a�� b (a < b)�� �־��� ��,
a <= n <= b�� n �߿��� �Ҽ��� ������ ������ ����Ϸ��� �Ѵ�.
�Ҽ��� �Ǵ��ϴ� �Լ��� isPrime�� �ϼ��Ͽ� ����Ͽ��� �ϸ�, �Ҽ��� ������ cnt ������ �����Ѵ�.
������ ���õ� �ڵ�� ������ �� ����.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n)
{
	if (n < 2) return 0;
	else if (n == 2) return 1;
	else if (n % 2 == 0) return 0;
	else {
		for (int i = 3; i <= n / 2; i += 2) {
			if (n % i == 0) return 0;
		}
	}
	return 1;
}

int main(int argc, char const* argv[])
{
	int a, b;
	scanf("%d%d", &a, &b);

	int cnt = 0;

	for (int i = a; i <= b; i++) {
		if (isPrime(i)) cnt++;
	}

	printf("%d", cnt);

	return 0;
}
#endif

#if 0
/*���� ����
�Ӹ�����̶�, ������ �о ����� �д� �Ͱ� ���� �����̳� ����, ����, ���ڿ� ���� ���Ѵ�.
0~100000000 ������ ���ڰ� �ԷµǸ�, �� ���� �Ӹ���� ������ �Ǵ��Ͽ�
�Ӹ�����̶�� "palindrome"��, �ƴ϶�� �Է��� ���� �� ���� ������ ���� �̾ ����Ͻÿ�.

��, ���� 900�� �������� 009���� ���� 0�� ���� 9�� �ȴ�. ��, 9009�� ����Ͽ��� �Ѵ�.

�Է� ����
0�̻�, 1�� ������ ���� �Էµȴ�.
��� ����
palindrome �Ǵ� �Էµ� ���� ������ ���� ��µȴ�.
�Էµ� ���� �Ӹ�����̸� palindrome��, �ƴϸ� �Է��� ���� ������ ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int flag = 1, len, idx;
	char arr[10];
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] != arr[len - i - 1]) flag = 0;
	}
	if (flag) printf("palindrome");
	else {
		printf("%s", arr);
		for (idx = len - 1; idx >= 0; idx--) {
			if (arr[idx] != '0') break;
		}
		for (int i = idx; i >= 0; i--) printf("%c", arr[i]);
	}
	return 0;
}
#endif

#if 0
/*���� ����
�Ӹ�����̶�, ������ �о ����� �д� �Ͱ� ���� �����̳� ����, ����, ���ڿ� ���� ���Ѵ�.
0~100000000 ������ ���ڰ� �ԷµǸ�, �� ���� �Ӹ���� ������ �Ǵ��Ͽ�
�Ӹ�����̶�� 'palindrome'��, �ƴ϶�� ������ ���� ����Ͻÿ�.
��, ���� 900�� �������� 009�̰�, �̴� ���� 9�� �ȴ�. ��, 9�� ����Ͽ��� �Ѵ�.
�Է� ����
0�̻�, 1�� ������ ���� �Էµȴ�.
��� ����
palindrome �Ǵ� �Էµ� ���� ������ ���� ��µȴ�.
�Էµ� ���� �Ӹ�����̸� palindrome��, �ƴϸ� ������ ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int flag = 1, len, idx;
	char arr[10];
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] != arr[len - i - 1]) flag = 0;
	}
	if (flag) printf("palindrome");
	else {
		for (idx = len - 1; idx >= 0; idx--) {
			if (arr[idx] != '0') break;
		}
		for (int i = idx; i >= 0; i--) printf("%c", arr[i]);
	}
	return 0;
}
#endif

#if 0
/*���� ����
unsinged int ������ ���ڸ� �Է¹޾�, �� ������ Ȧ����° �ڸ����� ������ �Ѵ�.
���� ���, 1234�̸� 24�� ���� ���� ���̴�.
Ȧ�� �ڸ����� ����� ����Ͻÿ�.
\
�Է� ����
unsigned int ����(0 ~ 2^32 - 1)�� ���� �Էµȴ�.
��� ����
�Էµ� ���� Ȧ�� �ڸ�(1�� �ڸ�, 100�� �ڸ�...)�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int len;
	char n[100];
	scanf("%s", n);
	len = strlen(n);
	if (len % 2) {
		for (int i = 0; i < len; i++) {
			if (i % 2 == 0) printf("%c", n[i]);
		}
	}
	else {
		for (int i = 0; i < len; i++) {
			if (i % 2) printf("%c", n[i]);
		}
	}
	return 0;
}
#endif

#if 0
/*���� ����
unsinged int ������ ���ڰ� �Է¹޾�, �� ������ ¦����° �ڸ����� ������ �Ѵ�.
���� ��� 1234�̸� 13�� ���� ���� ���̴�.
¦�� �ڸ����� ����� ����Ͻÿ�.
�Է� ����
unsigned int ����(0 ~ 2^32 - 1)�� ���� �Էµȴ�.
��� ����
�Էµ� ���� ¦�� �ڸ�(10�� �ڸ�, 1000�� �ڸ�...)�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int len;
	char n[100];
	scanf("%s", n);
	len = strlen(n);
	if (len % 2 == 0) {
		for (int i = 0; i < len; i++) {
			if (i % 2 == 0) printf("%c", n[i]);
		}
}
	else {
		for (int i = 0; i < len; i++) {
			if (i % 2) printf("%c", n[i]);
		}
	}
	return 0;
}
#endif

#if 0
/*���� ����
������ ���� ���ڿ� �ϳ��� ���� n�� �־��� ��,
�־��� ���ڿ� ���� ���̰� n ������ �Ӹ������ �� �� �ִ� ��
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� ������ ���� ���ڿ��� �ϳ� �Էµȴ�. �ִ� 100���̴�.
��° �ٿ� �ڿ��� n�� �־�����.
n�� �־��� ���ڿ��� ���� �����̴�.
��� ����
�־��� ���ڿ��� ���̰� n ������ �Ӹ������ �� �� �ִ� �� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, cnt = 0, len, flag;
	char str[101];
	scanf("%s\n%d", str, &n);
	len = strlen(str);
	cnt += len;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < len; j++) {
			flag = 1;
			for (int l = 0; l < i; l++) {
				if (str[j + l] != str[j + i - l - 1]) {
					flag = 0;
					break;
				}
			}
			if (flag) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*���� ����
������ ���� ���ڿ� �ϳ��� ���� n�� �־��� ��,
�־��� ���ڿ� ���� ���̰� n �̻��� �Ӹ������ �� �� �ִ� ��
����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� ������ ���� ���ڿ��� �ϳ� �Էµȴ�. �ִ� 100���̴�.
��° �ٿ� �ڿ��� n�� �־�����.
n�� �־��� ���ڿ��� ���� �����̴�.
��� ����
�־��� ���ڿ��� ���̰� n �̻��� �Ӹ������ �� �� �ִ� �� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int n, cnt = 0, len, flag;
	char str[101];
	scanf("%s\n%d", str, &n);
	len = strlen(str);
	if (n == 1) {
		cnt += len;
	}
	for (int i = n; i <= len; i++) {
		for (int j = 0; j < len; j++) {
			flag = 1;
			for (int l = 0; l < i; l++) {
				if (str[j + l] != str[j + i - l - 1]) {
					flag = 0;
					break;
				}
			}
			if (flag) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*���� ����
[ bit AND�� �� �� ����? ]

unsigned int ������ ���� n�� �־�����.
�� n�� ���� �Ʒ� ��Ʈ(LSB)�� ���� 0���� �ٲپ� ����Ͻÿ�.

�Է� ����
unsigned int ������ �� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ���� �Ʒ� ��Ʈ(LSB)�� 0���� �ٲ� ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	printf("%u", n & (~1));
	return 0;
}
#endif

#if 0
/*���� ����
[ bit OR�� �� �� ����? ]

unsigned int ������ ���� n�� �־�����.
�� n�� ���� �Ʒ� ��Ʈ(LSB)�� ���� 1�� �ٲپ� ����Ͻÿ�.

�Է� ����
unsigned int ������ �� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ���� �Ʒ� ��Ʈ(LSB)�� 1�� �ٲ� ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	printf("%u", n | 1);
	return 0;
}
#endif

#if 0
/*���� ����
[��ȣȭ]
��Ʈ XOR�� ����ϸ� ��ȣȭ�� �� �� �ִ�.
1�� xor������ �ϸ� ������ �����ǰ�,
0���� xor������ �ϸ� ������ �����ȴ�.
�̹� xor �������� ��ȣȭ�� 1byte ũ���� data��
��ȣȭ�� ���� 1byte ũ���� key�� �־��� ��,
������ data�� �����̾��� �� ����Ͻÿ�.

�Է� ����
0~255 ������ data�� key�� ������� �������� ���еǾ� �־�����.

��� ����
��ȣȭ ���� data�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int data, key;
	scanf("%d %d", &data, &key);
	printf("%d", data ^ key);
	return 0;
}
#endif

#if 0
/*���� ����
[ ���� ���� ]

0~255 ������ ���� data��, 0~4������ ���� n�� �־��� ��,
data�� �߽��� �������� nĭ�� ���� ���� ����Ͻÿ�.

���� ���, 170�� 1�� �־����ٸ�,
1010_1010 -> 0100_0101
69�� ����ؾ��Ѵ�.

�Է� ����
data�� n�� �������� ���еǾ� �Էµȴ�.
��� ����
����� ���� ������ �� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int data, n, num1, num2;
	scanf("%u %u", &data, &n);
	num1 = data & 0xF0;
	num2 = data & 0x0F;
	printf("%u", ((num1 << n) & 0xF0) | num2 >> n);
	return 0;
}
#endif

#if 0
/*���� ����
[ ���� ���� ]
0~255 ������ ���� data�� �־��� ��,
data�� �߽��� �������� 2ĭ�� ���� ���� ����Ͻÿ�.
���� ���, 170�� �־����ٸ�,
1010_1010 -> 1000_0010
130�� ����ؾ��Ѵ�.

�Է� ����
data�� �������� ���еǾ� �Էµȴ�.
��� ����
����� ���� ������ �� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int data, num1, num2;
	scanf("%u", &data);
	num1 = data & 0xF0;
	num2 = data & 0x0F;
	printf("%u", ((num1 << 2) & 0xF0) | num2 >> 2);
	return 0;
}
#endif

#if 0
/*���� ����
[��ȣȭ2] 
int ������ ù ����Ʈ�� ���� ° ����Ʈ�� ��ġ�� �ٲ� �����ϰ�
�ι� ° ����Ʈ�� �׹� ° ����Ʈ�� ��ġ�� �ٲ� �����ϴ� �������
��ȣȭ�� �ϰ��� �Ѵ�.
���� ��� 0x543210ff�� 0x10ff5432�� ��ȯ�ϴ� ���̴�.
���� ���� �۾��� �����Ͽ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ����
unsigned int ������ 10������ �ϳ� �־�����.

��� ����
���� ���� ������ ���� ��ȣȭ�� ���� 10������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, num1, num2, num3, num4;
	scanf("%u", &n);
	num1 = n & 0xFF000000;
	num2 = n & 0x00FF0000;
	num3 = n & 0x0000FF00;
	num4 = n & 0x000000FF;
	printf("%u", num1 >> 16 | num2 >> 16 | num3 << 16 | num4 << 16);
	return 0;
}
#endif

#if 0
/*���� ����
[��ȣȭ2]
���� ����:
int ������ ù ����Ʈ�� �׹� ° ����Ʈ�� ��ġ�� �ٲ� �����ϰ�
�ι� ° ����Ʈ�� ���� ° ����Ʈ�� ��ġ�� �ٲ� �����ϴ� �������
��ȣȭ�� �ϰ��� �Ѵ�.
��, �� ����Ʈ�� ������ �����´�.
���� ��� 0x543210ff�� 0xff103254�� ��ȯ�ϴ� ���̴�.
���� ���� �۾��� �����Ͽ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ����
unsigned int ������ 10������ �ϳ� �־�����.

��� ����
���� ���� ������ ���� ��ȣȭ�� ���� 10������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, num1, num2, num3, num4;
	scanf("%u", &n);
	num1 = n & 0xFF000000;
	num2 = n & 0x00FF0000;
	num3 = n & 0x0000FF00;
	num4 = n & 0x000000FF;
	printf("%u", num1 >> 24 | num2 >> 8 | num3 << 8 | num4 << 24);
	return 0;
}
#endif

#if 0
/*���� ����
[������ �ε��� ã��]
 10���� ���� ������ �Է¹޾� �迭�� �����ϰ�,
 ��ü �迭���� ã������ ���� �ε����� ����Ͻÿ�.

�Է� ����
 ù° �ٿ� 10���� ���� �ٸ� ���� ������ �Էµȴ�.

 ��° �ٿ� ã������ ���� �Էµȴ�.

��� ����
�迭 ������ ã������ ���� �ε����� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10], num, idx = 0;
	for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
	scanf("%d", &num);
	for (int i = 0; i < 10; i++) {
		if (arr[i] == num) idx = i;
	}
	printf("%d", idx);
	return 0;
}
#endif

#if 0
/*���� ����
[Ư�� ��Ʈ�� ����?]
0 ~ 255 ������ ���� ���� ��,
�� ���� n�� ��Ʈ�� ���� ����Ͻÿ�.

�Է� ����
0 ~ 255 ������ ��(x)�� 0 ~ 7 ������ ��(n)�� �������� ���еǾ� �Էµȴ�.

��� ����
x�� n�� ��Ʈ�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, n;
	scanf("%d %d", &x, &n);
	printf("%d", (x >> n) & 1);
	return 0;
}
#endif

#if 0
/*���� ����
[Ư�� ��Ʈ�� ����?]
0 ~ 255 ������ ���� ���� ��, 
�� ���� 3�� ��Ʈ�� ���� ����Ͻÿ�.

�Է� ����
0 ~ 255 ������ ���� �Էµȴ�.

��� ����
�� ���� 3�� ��Ʈ�� ���� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	printf("%d", (x >> 3) & 1);
	return 0;
}
#endif

#if 0
/*���� ����
[���� �׸���]
������ ��ȣ�� 0 �Ǵ� 1�̴�.
���ű�� ������ ��ȣ�� ������ 0 �Ǵ� 1�� ����� ���̴�.
����� �� �� �� ��Ʈ�� ���� �ʰ� ���� �� ����Ʈ�� �о��.
�׷��� ����� ���ڴ� ���� �� �𸣰����Ƿ�, �ð�ȭ�� �ϴ� ���α׷��� �����غ���.

�Է� ����
ù° �ٿ� ���� n�� �־�����. (1 <= n < 10)
��° �ٿ� n���� ������ �־�����. ���� 0~255 ������ ���� ���´�.

��� ����
8*n���� ���ڰ� ��µȴ�.
��Ʈ�� 1�̸� '-'�� 0�̸� '_'�� ����ϴ� ���̴�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int i = 7; i >= 0; i--) {
			if (num >> i & 1) printf("-");
			else printf("_");
		}
	}
	return 0;
}
#endif

#if 0
/*���� ����
[���� �׸���]
������ ��ȣ�� 0 �Ǵ� 1�̴�.
���ű�� ������ ��ȣ�� ������ 0 �Ǵ� 1�� ����� ���̴�.
����� �� �� �� ��Ʈ�� ���� �ʰ� ���� �� ����Ʈ�� �о��.
�׷��� ����� ���ڴ� ���� �� �𸣰����Ƿ�, �ð�ȭ�� �ϴ� ���α׷��� �����غ���.

�Է� ����
���� n�� �־�����. 0~255 ������ ���� ���´�.

��� ����
8���� ���ڰ� ��µȴ�.

��Ʈ�� 1�̸� '-'�� 0�̸� '_'�� ����ϴ� ���̴�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 7; i >= 0; i--) {
		if (num >> i & 1) printf("-");
		else printf("_");
	}
	return 0;
}
#endif

#if 0
/*���� ����
[2���� ������ ���ϱ�]
8��Ʈ�� 2������ �Է¹޾�, �� �ڸ������� ���� ���� ����Ͻÿ�.

�Է� ����
8��Ʈ�� 2������ �Էµȴ�.

��� ����
�� �ڸ����� �ش� �ڸ������� ���� ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int sum = 0;
	char num[9];
	scanf("%s", num);
	for (int i = 0; i < 8; i++) {
		if (num[i] == '1') sum++;
		printf("%d", sum);
	}
	return 0;
}
#endif

#if 0
/*���� ����
[�� ���� �� ���� �ޱ�]
unsigned int �ڷ����� ũ��� 4����Ʈ�̴�.
�� �ڷ����� 1����Ʈ�� ���ڸ� �� �� ������ �� �ִ�.
unsigned int ũ���� ���� �ް�, ���ڿ��� ����Ͻÿ�.

�Է� ����
unsigned int ������ ���� �ϳ� �Էµȴ�.

��� ����
�ش� ���� �� ����Ʈ �� ���� �� ���� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	printf("%c%c%c%c", (n & 0xFF000000) >> 24, (n & 0x00FF0000) >> 16, (n & 0x0000FF00) >> 8, n & 0x000000FF);
	return 0;
}
#endif

#if 0
/*���� ����
[�� ���� �� ���� �ޱ�]
unsigned int �ڷ����� ũ��� 4����Ʈ�̴�.
�� �ڷ����� 1����Ʈ�� ���ڸ� �� �� ������ �� �ִ�.
unsigned int ũ���� ���� �ް�, ���ڿ��� ����Ͻÿ�.

�Է� ����
unsigned int ������ ���� �ϳ� �Էµȴ�.

��� ����
�ش� ���� �� ����Ʈ �� ���� �� ���� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	printf("%c%c%c%c", n & 0x000000FF, (n & 0x0000FF00) >> 8, (n & 0x00FF0000) >> 16, (n & 0xFF000000) >> 24);
	return 0;
}
#endif

#if 0
/*���� ����
[���� ��ȯ��]
10���� N�� ������ �� X( 2 <= X < 10 )�� �������� ���еǾ� �Էµȴ�.
N�� X������ ��ȯ�� ����� ����Ͻÿ�.
X������ 0���� X���� ���ڸ� �̿��Ͽ� ���� ��Ÿ����.
���� ���, 2������ 0���� �� ���̹Ƿ� 0�� 1���� ����Ͽ� ��Ÿ����.
3�̶�� 2������ 11�� �ȴ�. (1 * 2^1 + 1 * 2^0)
3�� 3������ 10�̴�. (1 * 3^1 + 0 * 3^0)
5�� 3������ 12�̴�. (1 * 3^1 + 2 * 3^0)

�Է� ����
unsigned int ������ �� N�� X�� �������� ���еǾ� �־�����.

��� ����
N�� X������ ��ȯ�� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int N, X, arr[100], idx = 0;
	scanf("%u %u", &N, &X);
	while (N > 0) {
		arr[idx] = N % X;
		N /= X;
		idx++;
	}
	for (int i = idx - 1; i >= 0; i--) {
		printf("%u", arr[i]);
	}
	return 0;
}
#endif

#if 0
/*���� ����
[���� ��ȯ��]
10���� N�� �������� ���еǾ� �Էµȴ�.
N�� 2������ ��ȯ�� ����� ����Ͻÿ�.

�Է� ����
unsigned int ������ �� N�� �־�����.

��� ����
N�� 2������ ��ȯ�� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int N, arr[100], idx = 0;
	scanf("%u", &N);
	while (N > 0) {
		arr[idx] = N % 2;
		N /= 2;
		idx++;
	}
	for (int i = idx - 1; i >= 0; i--) {
		printf("%u", arr[i]);
	}

	return 0;
}
#endif

#if 0
/*���� ����
[ ���� �о�� ]
������ ���� ���ڱ��İ� ������ ���� �귯�´�.

HIGH/LOW�� �����ϸ� �� ��Ʈ �� ��Ʈ�� �о� ������,
��μ� ��� ������ ���� ���� ���� �� �ְ� �ȴ�.
�Է� ����
ù° �ٿ� ���� n�� �Էµȴ�. (1 <= n < 10)
��° �ٿ� n*8���� ���ڰ� �Էµȴ�. �� ���ڴ� '-' �Ǵ� '_'�̸�,
'-'�� 1�� '_'�� 0�� �ǹ��Ѵ�.
��� ����
�ؼ��� �Ϸ��� n���� ���� ����϶�. ��ȣ���� 1����Ʈ �����̴�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int n, idx = 0, num;
	char str;
	scanf("%d\n", &n);
	for (int i = 0; i < n * 8; i++) {
		scanf("%c", &str);
		if (i % 8 == 0) {
			num = 0;
		}
		if (str == '-') {
			num += (int)pow(2, 7 - (i % 8));
		}
		if (i % 8 == 7) printf("%d ", num);
	}
	return 0;
}
#endif

#if 0
/*���� ����
[��Ʈ�� �׸�����]
unsigned int ũ���� ���� �ϳ��� �Է¹޾�,
�ش� ������ ��Ʈ�� �׸����� ��ȯ�Ͽ� ����Ͻÿ�.
������ �� ��Ʈ�� 1�̸� @, 0�̸� O���� ��ȯ�Ͽ� 1 x 32 ũ���� �׸��� ����Ѵ�.
���� ���, 4294967293�� ��Ʈ ǥ����
11111111_11111111_11111111_11111101�̹Ƿ�
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@O@�� ����Ѵ�.
�Է� ����
unsigned int ������ ������ �Էµȴ�.
��� ����
��Ʈ�� 1�̸� @, 0�̸� O�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	scanf("%u", &n);
	for (int i = 31; i >= 0; i--) {
		if (n >> i & 1) printf("@");
		else printf("O");
	}
	return 0;
}
#endif

#if 0
/*���� ����
[���� ����2]
unsigned int ������ data��, 0~16������ ���� n�� �־�����.
data�� �߽��� �������� �������� nĭ�� ����Ʈ ������ ����� 16������ ����Ͻÿ�.
data�� �߽��̶�, 16�� ��Ʈ�� 15�� ��Ʈ ���̸� �ǹ��Ѵ�.
���� ���, 0x35AFAB96�� 3�� �־����ٸ�,
00110101_10101111_10101011_10010110
-> 10101101_01111000_00010101_01110010
�̹Ƿ�, 0xAD781572�� ����ؾ��Ѵ�.
�Է� ����
data�� n�� �������� ���еǾ� �Էµȴ�.
��, data�� 16������ �־�����.
��� ����
������ ����� 16���� ���·� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int data, n, num1, num2;
	scanf("%X %u", &data, &n);
	num1 = data & 0xFFFF0000;
	num2 = data & 0x0000FFFF;
	num1 = (num1 << n) & 0xFFFF0000;
	num2 = num2 >> n;
	printf("%X", num1 | num2);
	return 0;
}
#endif

#if 0
/*���� ����
[�ѱ��ΰ� ���ĺ��ΰ� �װ��� �����δ�]
�ѱ� �Ǵ� ���ĺ� �� ���ڰ� �Էµȴ�.
�Էµ� ���ڰ� ������ "english"��,
�ѱ��̶�� "�ѱ�"�� ����Ͻÿ�.

�Է� ����:
�ѱ� �Ǵ� ���ĺ� �� ���ڰ� �Էµȴ�.

��� ����:
�Էµ� ���ڰ� ������ "english"��,
�ѱ��̶�� "�ѱ�"�� ����Ͻÿ�.

�Է� ����
�ѱ� �Ǵ� ���ĺ� �� ���ڰ� �Էµȴ�.
��� ����
�Էµ� ���ڰ� ������ "english"��,
�ѱ��̶�� "�ѱ�"�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char n[4];
	scanf("%s", n);
	if (n[0] & 0x80) printf("�ѱ�");
	else printf("english");
	return 0;
}
#endif

#if 0
/*���� ����
unsigned int ������ ���� ������ �Է¹޴´�.
�Է¹��� ������ ù��° ����Ʈ�� ����° ����Ʈ�� ��ġ�� �ٲ� �����ϰ�,
�ι�° ����Ʈ�� �׹�° ����Ʈ�� ��ġ�� �ٲ� �����ϴ� ������� ��ȣȭ�� �Ѵ�.

���� ���, 0x543210ff�� 0x10ff5432�� ��ȯ�ȴ�.

��ȣȭ �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
unsigned int ������ 10������ �ϳ� �־�����.
��� ����
��ȣȭ�� ���� 10������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, num1, num2, num3, num4;
	scanf("%u", &n);
	num1 = n & 0xFF000000;
	num2 = n & 0x00FF0000;
	num3 = n & 0x0000FF00;
	num4 = n & 0x000000FF;
	printf("%u", num1 >> 16 | num2 >> 16 | num3 << 16 | num4 << 16);
	return 0;
}
#endif

#if 0
/*���� ����
[��Ʈ ����]

unsigned int ������ ���� n��, 0 ~ 31 ������ ���� x�� �־�����.
���� n�� x�� ��Ʈ�� 1�� �ٲ� ����� ����Ͻÿ�.
�Է� ����
���� n�� x�� �������� ���еǾ� �Էµȴ�.
��� ����
���� n�� x�� ��Ʈ�� 1�� �ٲ� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, x;
	scanf("%u %u", &n, &x);
	n = n | (1 << x);
	printf("%u", n);
	return 0;
}
#endif

#if 0
/*���� ����
[��ȣȭ3]

unsigned char ������ ���� n�� �־��� ��,
���� n�� ���� 4��Ʈ�� ���� 4��Ʈ�� ���� �ٲ� ���� ����Ͻÿ�.
�Է� ����
0 ~ 255 ������ ���� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ���� 4��Ʈ�� ���� 4��Ʈ�� ���� �ٲ� ���� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, num1, num2;
	scanf("%d", &n);
	num1 = n & 0xF0;
	num2 = n & 0x0F;
	printf("%d", num1 >> 4 | num2 << 4);
	return 0;
}
#endif

#if 0
/*���� ����
[Ư���� 16����]

unsigned char ������ ũ��� 1����Ʈ(8��Ʈ)�̴�.
16���� �� �ڸ��� 4��Ʈ�� ũ�⸦ ǥ���� �� �����Ƿ�, 
unsigned char ������ ���� 4��Ʈ�� �� �ڸ��� 16������ ǥ���� �� �ִ�.

���� ���, 0111_1010 ��
0111 -> 7
    1010 -> A
01111010 -> 7A �� ǥ���ȴ�.

����, ���� unsigned char ���� ���� �տ������� 4��Ʈ�� ���ʷ� �о� ��ȯ�Ѵٸ�, 
�Ʒ��� ���� 5�ڸ��� 16������ ��ȯ�� �� �ִ�.

0111 -> 7
 1111 -> F
  1110 -> E
   1101 -> D
    1010 -> A
01111010 -> 7FEDA �� ǥ���ȴ�.

���� ���� ������� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
10���� ���� N�� �Էµȴ�. ( 0 <= N < 256 )
��� ����
Ư���ϰ� ��ȯ�� 16������ ����Ͻÿ�.
(��, �����ڴ� ��� �빮�ڷ� ����Ѵ�.)*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N, arr[5], idx = 0;
	scanf("%d", &N);
	for (int i = 4; i >= 0; i--) {
		arr[4 - i] = (N >> i) & 0xF;
	}
	for (int i = 0; i < 5; i++) {
		if (arr[i] != 0) {
			idx = i;
			break;
		}
		else if (i == 4) idx = 4;
	}
	for (int i = idx; i < 5; i++) printf("%X", arr[i]);
	return 0;
}
#endif

#if 0
/*���� ����
unsigned char ������ ���� n��, 3��Ʈ ũ���� ���� x�� �Էµȴ�.
2���� ǥ������ ���� n�� ��Ʈ ���� x�� ��� ��Ÿ������ ����Ͻÿ�.

���� ���, 247�� 7�� �־����ٸ�,
11110111
111
 111
     111
�̹Ƿ� ���� n���� ��Ʈ ���� x�� 3�� ��Ÿ����.

�Է� ����:
���� n�� x�� �������� ���еǾ� �Էµȴ�.

��� ����:
���� n�� x�� ��Ÿ�� Ƚ���� ����Ͻÿ�.

�Է� ����
���� n�� x�� �������� ���еǾ� �Էµȴ�.
��� ����
���� n�� x�� ��Ÿ�� Ƚ���� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, x, cnt = 0;
	scanf("%d %d", &n, &x);
	for (int i = 5; i >= 0; i--) {
		if ((n >> i) % 8 == x) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*���� ����
[���� ��ȯ��2]

���� ���� N�� X�� �������� ���еǾ� �Էµȴ�.
���⼭ X(2 <= X < 10)�� ���� N�� X�������� �ǹ��Ѵ�. 

���� N�� 10������ ��ȯ�� ����� ����Ͻÿ�.


N�� 10������ ��ȯ�� ����� unsigned int ������ �ִ�.

�Է� ����
���� N�� X�� �������� ���еǾ� �Էµȴ�.
��� ����
���� N�� 10������ ��ȯ�� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char N[100];
	int X, len;
	long long num = 1, sum = 0;
	for (len = 0; len < 100; len++) {
		scanf("%c", &N[len]);
		if (N[len] == ' ') break;
	}
	scanf("%d", &X);
	for (int i = len - 1; i >= 0; i--) {
		sum += (N[i] - '0') * num;
		num *= X;
	}
	printf("%lld", sum);
	return 0;
}
#endif

#if 0
/*���� ����
[���ڿ��� ���ĺ��� �� ��?]

���ĺ��� �ѱ��� ���� ���ڿ��� �־�����. �ִ� 10�����̴�.
�־��� ���ڿ����� ���ĺ��� �� �� ���� �� ����Ͻÿ�.
�Է� ����
�ѱ۰� ���ĺ��� ���� ���ڿ��� �־�����. �ִ� 10�����̴�.
��� ����
�־��� ���ڿ��� ����ִ� ���ĺ��� ������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int len, cnt = 0;
	char str[31];
	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (!(str[i] & 0x80))cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*���� ����
unsigned char ������ ���� �ϳ��� �Է¹޾�,
�ش� ������ ��Ʈ�� �׸����� ��ȯ�Ͽ� ����Ͻÿ�.

������ �� ��Ʈ�� 1�̸� '#', 0�̸� '*'�� ��ȯ�Ͽ� ����Ѵ�.

���� ���, 170�� �ԷµǸ�,
��� ���� #*#*#*#* �� �ȴ�.
�Է� ����
0 ~ 255 ������ ������ �Էµȴ�.
��� ����
������ 8�� ��Ʈ�� ���� ��ȯ�� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 7; i >= 0; i--) {
		if (n >> i & 1) printf("#");
		else printf("*");
	}
	return 0;
}
#endif

#if 0
/*���� ����
[��Ʈ�� �����ϱ�]

unsigned char ������ ���� n�� �־�����.
���� n�� 5�� ��Ʈ���� 2�� ��Ʈ������ �����Ͽ�
������ 4��Ʈ�� 16���� �� �ڸ��� ����Ͻÿ�.
�Է� ����
unsigned char ������ ������ �ϳ� �־�����.
��� ����
������ 4��Ʈ�� 16������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%X", (n >> 2) & 0xF);
	return 0;
}
#endif

#if 0
/*���� ����
[���� 4��Ʈ�� �����]

unsigned char ������ ���� n�� �Էµȴ�.
���� n�� 8�� ��Ʈ �� ���� 4 ��Ʈ�� ���� ��, �� ������ ����Ͻÿ�.
�Է� ����
0 ~ 255 ������ ���� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ���� 4 ��Ʈ�� �����, ���� 4 ��Ʈ�� 0���� ���� ������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", (n >> 4) << 4);
	return 0;
}
#endif

#if 0
/*���� ����
[��Ʈ ī��Ʈ]

unsigned int ������ ���� n�� �־�����.
���� n�� ��Ʈ �� 0�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
unsigned int ������ ���� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ �����ϴ� ��Ʈ �� 0�� ������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, cnt = 0;
	scanf("%u", &n);
	for (int i = 31; i >= 0; i--) {
		if (!(n >> i & 1)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*���� ����
[��Ʈ ����]

unsigned char ������ ���� n��, 0 ~ 7 ������ ���� x�� �־�����.
���� n�� x�� ��Ʈ�� 0���� ���� ������ ����Ͻÿ�.
�Է� ����
���� n�� x�� �������� ���еǾ� �Էµȴ�.
��� ����
���� n�� x�� ��Ʈ�� 0���� ���� ������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	printf("%d", n & ~(1 << x));
	return 0;
}
#endif

#if 0
/*���� ����
[��ȣȭ4]

unsigned int ũ���� data��, unsigned char ũ���� key�� �־�����.
data�� ��� ����Ʈ�� key�� xor�� ����� ����Ͻÿ�.
�Է� ����
data�� key�� �������� ���еǾ� �Էµȴ�.
��� ����
data�� ��� ����Ʈ�� key�� xor ������ ���� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int data, key, num1, num2, num3, num4;
	scanf("%u %u", &data, &key);
	num1 = (((data & 0xFF000000) >> 24) ^ key) << 24;
	num2 = (((data & 0x00FF0000) >> 16) ^ key) << 16;
	num3 = (((data & 0x0000FF00) >> 8) ^ key) << 8;
	num4 = data & 0x000000FF ^ key;
	printf("%u", num1 | num2 | num3 | num4);
	return 0;
}
#endif

#if 0
/*���� ����
[��ȣȭ 1]

��Ʈ XOR�� ����ϸ� ��ȣȭ�� �� �� �ִ�.

1�� xor������ �ϸ� ������ �����ǰ�,
0���� xor������ �ϸ� ������ �����ȴ�.

�̹� xor �������� ��ȣȭ�� 1byte ũ���� data��
��ȣȭ�� ���� 1byte ũ���� key�� �־��� ��,
������ data�� �����̾��� �� ����Ͻÿ�.
�Է� ����
0~255 ������ data�� key�� ������� �������� ���еǾ� �־�����.
��� ����
��ȣȭ ���� data�� ����Ͻÿ�.*/
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
/*���� ����
[��ȣȭ 2]

int ������ ù ����Ʈ�� ���� ° ����Ʈ�� ��ġ�� �ٲ� �����ϰ�
�ι� ° ����Ʈ�� �׹� ° ����Ʈ�� ��ġ�� �ٲ� �����ϴ� �������
��ȣȭ�� �ϰ��� �Ѵ�.

���� ��� 0x543210ff�� 0x10ff5432�� ��ȯ�ϴ� ���̴�.

���� ���� �۾��� �����Ͽ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ����
unsigned int ������ 10������ �ϳ� �־�����.

��� ����
���� ���� ������ ���� ��ȣȭ�� ���� 10������ ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, num1, num2, num3, num4;
	scanf("%u", &n);
	num1 = n & 0xFF000000;
	num2 = n & 0x00FF0000;
	num3 = n & 0x0000FF00;
	num4 = n & 0x000000FF;
	printf("%u", (num1 >> 16) | (num2 >> 16) | (num3 << 16) | (num4 << 16));
	return 0;
}
#endif

#if 0
/*���� ����
[��Ʈ ������]
unsigned char ũ���� ������ �ϳ� �Էµȴ�.
�� ������ ��Ʈ���� ������ ����� ����Ͻÿ�.

��Ʈ���� �����´ٴ� ����, ���ڿ��� �������� ��Ʈ�� ������ ���̴�.

���� ���, 42 (0010_1010)�� �������� 84 (0101_0100)�� �ȴ�.
�Է� ����
unsigned char ũ���� ���� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ��Ʈ���� ������ ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 7; i >= 0; i--) {
		ans += (n >> i & 1) << (7 - i);
	}
	printf("%d", ans);
	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	return 0;
}
#endif

