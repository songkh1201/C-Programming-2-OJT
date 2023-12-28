#if 0
/*���� ����
[ swap �Լ� ����� ]

int ���� ���� �� ���� ������ �Է¹޾�,
�� ������ ���� ��ȯ�ϴ� �Լ� void swap(int* p, int* q)�� �ۼ��Ͻÿ�.
�Լ��� ���ڴ� call by reference ������� �����Ѵ�.

�ڵ� �ۼ� ���� �̿ܿ��� �������� ���ÿ�.

#include <stdio.h>

void swap(int* p, int* q) {

	// ====== �ڵ� �ۼ� ���� ======


	// ============================
}

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
�Է� ����
int ���� ���� �� ���� �������� ������ �Է��Ѵ�.
��� ����
�� ������ ���� ��ȯ�Ͽ� ����Ѵ�.
�Է� ���� ���� 
1 5
��� ���� ����
5 1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* p, int* q) {

	// ====== �ڵ� �ۼ� ���� ======
	int temp = *p;
	*p = *q;
	*q = temp;
	// ============================
}

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
#endif

#if 0
/*���� ����
[ �迭 ����� �� ]

unsigned int �迭�� ũ�� n�� n���� �迭 ��Ҹ� �Է¹޾�,
�迭�� ��� ����� ���� ���ϴ� �Լ� void arraysum(unsigned int *arr, int size, int* sum) �� �ۼ��Ͻÿ�.

���� ����� return���� �ʰ�, ���ڷ� ���� sum�� ����Ű�� ���� �����ؾ� �Ѵ�.


�ڵ� �ۼ� ���� �̿ܿ��� �������� ���ÿ�.



#include <stdio.h>


void arraysum(unsigned int* arr, int size, int* sum) {
	// ========= �ڵ� �ۼ� ���� =========


	// ============================
}

int main() {
	int n;
	scanf("%u", &n);

	unsigned int arr[100];
	for (int i = 0; i < n; i++) {
		scanf("%u", &arr[i]);
	}

	int sum = 0;
	arraysum(arr, n, &sum);

	printf("%d", sum);

	return 0;
}



�Է� ����
ù° �ٿ� �迭�� ũ�� n�� �Է��Ѵ�. (n < 100)
��° �ٿ� n���� int ���� �Էµȴ�.
��� ����
�迭�� ��� ����� ���� ����Ѵ�.
�Է� ���� ����
5
10 20 30 40 50
��� ���� ����
150*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void arraysum(unsigned int* arr, int size, int* sum) {
	// ========= �ڵ� �ۼ� ���� =========
	for (int i = 0; i < size; i++) {
		*sum += *(arr + i);
	}

	// ============================
}

int main() {
	int n;
	scanf("%u", &n);

	unsigned int arr[100];
	for (int i = 0; i < n; i++) {
		scanf("%u", &arr[i]);
	}

	int sum = 0;
	arraysum(arr, n, &sum);

	printf("%d", sum);

	return 0;
}
#endif

#if 0
/*���� ����
[ reverse ]

unsigned int ���� i�� j�� ���� ��ȯ�ϰ�, int �迭 k�� ������ �ڹٲٴ� �Լ�
void reverse(unsigned int* i, unsigned int* j, int* k)�� �ۼ��Ͻÿ�.
��, �迭 k�� ���������� �׻� -1�� ����Ǿ� �ִ�.

�ڵ� �ۼ� ���� �̿ܿ��� �������� ���ÿ�.




#include <stdio.h>

void reverse(unsigned int* i, unsigned int* j, int* k) {

	// ========= �ڵ� �ۼ� ���� =========

	// ============================
}

int main() {
	int k[100] = { 0, };
	unsigned int i = 0, j = 0;
	int n = 0, idx = 0;


	scanf("%d %d", &i, &j);
	while (1) {
		scanf("%d", &n);
		k[idx] = n;
		if (n < 0) {
			break;
		}
		idx++;
	}

	reverse(&i, &j, k);

	printf("%d %d ", i, j);
	idx = 0;
	while (1) {
		printf("%d ", k[idx]);
		if (k[idx] < 0) {
			break;
		}
		idx++;
	}

	return 0;
}


�Է� ����
ù° �ٿ� i, j ���� �Է��Ѵ�.
��° �ٿ� �迭 k�� ��Ҹ� ���ʷ� �Է��Ѵ�. ����� ������ 100�� �����̴�.
��� ����
i�� j�� ���� ����ϰ�, �迭 k�� ��Ҹ� ����Ѵ�.
��� �� ���̴� �������� �����Ѵ�.
�Է� ���� ����
20 99 1 2 3 4 5 -1
��� ���� ����
99 20 5 4 3 2 1 -1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(unsigned int* i, unsigned int* j, int* k) {

	// ========= �ڵ� �ۼ� ���� =========
	unsigned int temp = *i;
	*i = *j;
	*j = temp;
	int idx = 0;
	for (int i2 = 0; i2 < 100; i2++) {
		if (*(k + i2) == -1) {
			idx = i2;
			break;
		}
	}
	for (int i2 = 0; i2 < idx / 2; i2++) {
		int temp2 = *(k + i2);
		*(k + i2) = *(k + idx - i2 - 1);
		*(k + idx - i2 - 1) = temp2;
	}
	// ============================
}

int main() {
	int k[100] = { 0, };
	unsigned int i = 0, j = 0;
	int n = 0, idx = 0;


	scanf("%d %d", &i, &j);
	while (1) {
		scanf("%d", &n);
		k[idx] = n;
		if (n < 0) {
			break;
		}
		idx++;
	}

	reverse(&i, &j, k);

	printf("%d %d ", i, j);
	idx = 0;
	while (1) {
		printf("%d ", k[idx]);
		if (k[idx] < 0) {
			break;
		}
		idx++;
	}

	return 0;
}
#endif

#if 0
/*���� ����
[ int �� char�� ]

unsigned int ũ���� ���� n�� �Է¹޾�,
���� n�� �޸� ���� �ּҺ��� ���ʷ� 4���� char�� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
unsigned int ũ���� ���� n�� �Է��Ѵ�.
��� ����
���� n�� �޸� ���� �ּҺ��� ���ʷ� 4���� char�� ���� ����� ������ ����Ѵ�.
�Է� ���� ����
131071
��� ���� ����
255 255 1 0*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char n[4];
	scanf("%u", &n[0]);
	for (int i = 0; i < 4; i++) printf("%hhu ", n[i]);
	return 0;
}
#endif

#if 0
/*���� ����
[ �����ϱ� ]

���ڿ��� �Է¹޾� ���ӵ� ���� ������ ���� �����ϴ� �Լ� void compression(char* sequence, char* result) �� �ۼ��Ͻÿ�.

���� ���,
222222222222215555554422 �� �Էµ� ���
2�� 13��, 1�� 1��, 5�� 6��, 4�� 2��, 2�� 2���� ���ӵǾ� �ԷµǾ����Ƿ�
21311564222�� ���� ������ �� �ִ�.

�ڵ� �ۼ� ���� �̿ܿ��� �������� ���ÿ�.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression(char* sequence, char* result) {

	// ====== �ڵ� �ۼ� ���� ======



	// ===========================
}

int main() {
	char sequence[101];
	char result[201] = "";

	scanf("%100s", sequence);
	compression(sequence, result);

	printf("%s\n", result);

	return 0;
}

�Է� ����
1�� �̻�, �ִ� 100���� ���ڿ��� �Է��Ѵ�.
�Է��ϴ� ���ڴ� 0�̻� 9�����̴�.
��� ����
���ӵ� ���� ������ ���� ������ ����� ����Ѵ�.
�Է� ���� ����
222222222222215555554422
��� ���� ����
21311564222
Hint
printf �Լ����� %s ���� �����ڴ� '\0' ���� ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression(char* sequence, char* result) {

	// ====== �ڵ� �ۼ� ���� ======
	int idx = 0, cnt;
	char num;
	for (int i = 0; i < strlen(sequence); i++) {
		num = *(sequence + i);
		cnt = 0;
		for (int j = i; j < strlen(sequence) + 1; j++) {
			if (*(sequence + j) != num) {  // *(sequence + j) == sequence[j]
				*(result + idx) = num;
				idx++;
				if (cnt == 100) {
					*(result + idx) = '1';
					*(result + idx + 1) = '0';
					*(result + idx + 2) = '0';
					idx += 3;
				}
				else if (cnt > 9) {
					*(result + idx) = (cnt / 10) + '0';
					*(result + idx + 1) = (cnt % 10) + '0';
					idx += 2;
				}
				else {
					*(result + idx) = (cnt % 10) + '0';
					idx++;
				}
				i = j - 1;
				break;
			}
			cnt++;
		}
	}
	// ===========================
}

int main() {
	char sequence[101];
	char result[201] = "";

	scanf("%100s", sequence);
	compression(sequence, result);

	printf("%s\n", result);

	return 0;
}
#endif

#if 0
/*���� ����
[ get_integers ]

int n�� unsigned int* p�� �Է� �޾�,
ǥ�� �Է�(scanf)���� n���� unsigned int�� p �ּҿ� ���ʴ�� �����ϴ� �Լ�
void get_integers(int n, unsigned int *p)�� �ۼ��Ͻÿ�.

�ڵ� �ۼ� ���� �̿ܿ��� �������� ���ÿ�.



#include <stdio.h>


void get_integers(int n, unsigned int *p)
{
	// ====== �ڵ� �ۼ� ���� =======

	// ============================
}

int main(int argc, char const *argv[])
{
	int n;
	unsigned int arr[100];
	scanf("%d", &n);
	get_integers(n, arr);
	while (1)
	{
		scanf("%d", &n);
		if (n < 0)
		{
			break;
		}
		printf("%u ", arr[n]);
	}
	return 0;
}

�Է� ����
����.
��� ����
����.
�Է� ���� ����
4 1 2 3 4 0 1 3 2 -1
��� ���� ����
1 2 4 3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void get_integers(int n, unsigned int* p)
{
	// ====== �ڵ� �ۼ� ���� =======
	int idx = 0;
	unsigned int num;
	for (int i = 0; i < n; i++) {
		scanf("%u", &num);
		*(p + idx) = num;
		idx++;
	}
	// ============================
}

int main(int argc, char const* argv[])
{
	int n;
	unsigned int arr[100];
	scanf("%d", &n);
	get_integers(n, arr);
	while (1)
	{
		scanf("%d", &n);
		if (n < 0)
		{
			break;
		}
		printf("%u ", arr[n]);
	}
	return 0;
}

#endif

#if 0
/*���� ����
[ �� ĳ���� ���̿� �ϳ��� short ]

unsigned char ������ �� a�� c�� �Է¹ް�,
unsigned short ������ �� b�� �Է¹޾�,
unsigned int�� a b c ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
a�� b, c�� �������� �����Ͽ� �Է��Ѵ�.
��� ����
a b c�� ������� �̾�ٿ� unsigned int�� ����Ѵ�.
�Է� ���� ����
3 258 0
��� ���� ����
66051
Hint
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	unsigned char a, c;
	unsigned short b;
	unsigned int n = 0;
	scanf("%hhu %hu %hhu", &a, &b, &c);
	n |= c;
	n <<= 16;
	n |= b;
	n <<= 8;
	n |= a;
	printf("%u", n);
	return 0;
}
#endif

#if 0
/*���� ����
[ 3 Byte �����ϱ� ]

3����Ʈ 4�� ���� ����
unsigned int data[3] �迭�� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
0 �̻� 2^24 �̸��� 10�� ���� 4���� �������� �����Ͽ� �Է��Ѵ�.

��� ����
3����Ʈ ���� 4���� ����� unsigned int �迭 3ĭ�� �������� �����Ͽ� ����Ͻÿ�.
�Է� ���� ����
1 2 3 4
��� ���� ����
33554433 196608 1024*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char n[13];
	scanf("%u %u %u %u", &n[0], &n[3], &n[6], &n[9]);
	for (int i = 0; i < 3; i++) {
		unsigned int num = 0;
		num |= n[(i * 4) + 3];
		num <<= 8;
		num |= n[(i * 4) + 2];
		num <<= 8;
		num |= n[(i * 4) + 1];
		num <<= 8;
		num |= n[i * 4];
		printf("%u ", num);
	}
	return 0;
}
#endif

#if 0
/*���� ����
[ 3 Byte �б� ]

unsigned int ������ ���� 3���� �迭�� �����ϰ�,
�տ������� 3����Ʈ�� 4���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
unsigned int ������ 10�� ���� 3���� �������� �����Ͽ� �Է��Ѵ�.
��� ����
3����Ʈ�� 4���� 10�� ������ �������� �����Ͽ� ����Ͻÿ�.
�Է� ���� ����
33554433 196608 1024
��� ���� ����
1 2 3 4
Hint
���� ������ ��Ȯ�� �ݴ��̴�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char n[12];
	scanf("%u %u %u", &n[0], &n[4], &n[8]);
	for (int i = 0; i < 4; i++) {
		unsigned int num = 0;
		num |= n[(i * 3) + 2];
		num <<= 8;
		num |= n[(i * 3) + 1];
		num <<= 8;
		num |= n[i * 3];
		printf("%u ", num);
	}
	return 0;
}
#endif

#if 0
/*���� ����
[ Ŀ���� ��ȣȭ ]

12 byte�� data�� �Է¹޾� �迭�� �����Ѵ�.
�̾ �ԷµǴ� 12���� a_n�� n��° ����Ʈ�� ���� data�� �ε����� ��Ÿ����.
data�� a_n�� �̿��Ͽ� �������� res�� �����, res�� �տ�������
unsigned int�� ���� ����� ����Ͻÿ�.
�Է� ����
unsigned char ������ �� 12��(data)�� �������� �����Ͽ� �Է��Ѵ�.
�̾ 0~11 ������ �� 12��(a_n)�� �������� �����Ͽ� �Է��Ѵ�.
��� ����
a_n�� �������� data�� �������� �迭�� unsigned int �迭�� �о ����Ѵ�.
�Է� ���� ����
1 2 3 4 5 6 7 8 9 0 11 12
3 2 1 9 10 11 0 4 7 6 5 8
��� ���� ����
131844 83954699 151389960*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[12], a_n[12], res[12];
	for (int i = 0; i < 12; i++) scanf("%hhu", &data[i]);
	for (int i = 0; i < 12; i++) scanf("%hhu", &a_n[i]);
	for (int i = 0; i < 12; i++) {
		res[i] = data[a_n[i]];
	}

	for (int i = 0; i < 3; i++) {
		unsigned int num = 0;
		num |= res[(i * 4) + 3];
		num <<= 8;
		num |= res[(i * 4) + 2];
		num <<= 8;
		num |= res[(i * 4) + 1];
		num <<= 8;
		num |= res[i * 4];
		printf("%u ", num);
	}
	return 0;
}
#endif

#if 0
/*[ �� ĳ���� ���̿� �ϳ��� short ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char n[4];
	scanf("%hhu %hu %hhu", &n[0], &n[1], &n[3]);
	unsigned int* n2 = (unsigned int*)n;
	printf("%u", *n2);
	return 0;
}
#endif

#if 0
/*[ 3 Byte �����ϱ� ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[13];
	scanf("%u %u %u %u", &data[0], &data[3], &data[6], &data[9]);
	for (int i = 0; i < 3; i++) {
		unsigned int* n = (unsigned int*)&data[i * 4];
		printf("%u ", *n);
	}
	return 0;
}
#endif

#if 0
/*[ 3 Byte �б� ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[13];
	scanf("%u %u %u", &data[0], &data[4], &data[8]);
	for (int i = 0; i < 4; i++) {
		unsigned int* n = (unsigned int*)&data[i * 3];
		*n &= 0x00FFFFFF;
		printf("%u ", *n);
	}
	return 0;
}
#endif

#if 0
/*[ Ŀ���� ��ȣȭ ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[12];
	unsigned char a_n[12];
	unsigned char res[12];
	for (int i = 0; i < 12; i++) scanf("%hhu", &data[i]);
	for (int i = 0; i < 12; i++) scanf("%hhu", &a_n[i]);
	for (int i = 0; i < 12; i++) res[i] = data[a_n[i]];
	for (int i = 0; i < 12; i += 4) {
		unsigned int* n = (unsigned int*)&res[i];
		printf("%u ", *n);
	}
	return 0;
}
#endif

#if 0
/*����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[100];
	int n1, n2, sz;
	scanf("%d %d %d", &n1, &n2, &sz);
	for (int i = 0; i < sz; i++) {
		scanf("%llu", &arr[i * n1]);
	}
	for (int i = 0; i < (n1 * sz) / n2; i++) {
		unsigned char num[8] = { 0 };
		for (int j = 0; j < n2; j++) {
			num[j] = arr[(n2 * i) + j];
		}
		unsigned long long* ans = (unsigned long long*)num;
		printf("%llu ", *ans);
	}
	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression(char* sequence, char* result) {

	// ====== �ڵ� �ۼ� ���� ======
	int idx = 0, cnt;
	char num;
	for (int i = 0; i < strlen(sequence); i++) {
		num = *(sequence + i);
		cnt = 0;
		for (int j = i; j < strlen(sequence) + 1; j++) {
			if (*(sequence + j) != num) {  // *(sequence + j) == sequence[j]
				*(result + idx) = num;
				idx++;
				char buf[4] = { 0 };
				sprintf(buf, "%d", cnt);
				strcat(result, buf);
				idx = strlen(result);
				i = j - 1;
				break;
			}
			cnt++;
		}
	}
	// ===========================
}

int main() {
	char sequence[101];
	char result[201] = "";

	scanf("%100s", sequence);
	compression(sequence, result);

	printf("%s\n", result);

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

