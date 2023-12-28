#if 0
/*문제 설명
[ swap 함수 만들기 ]

int 범위 정수 두 개를 변수에 입력받아,
두 변수의 값을 교환하는 함수 void swap(int* p, int* q)을 작성하시오.
함수에 인자는 call by reference 방법으로 전달한다.

코드 작성 영역 이외에는 수정하지 마시오.

#include <stdio.h>

void swap(int* p, int* q) {

	// ====== 코드 작성 영역 ======


	// ============================
}

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}
입력 설명
int 범위 정수 두 개를 공백으로 구분해 입력한다.
출력 설명
두 변수의 값을 교환하여 출력한다.
입력 예시 복사 
1 5
출력 예시 복사
5 1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* p, int* q) {

	// ====== 코드 작성 영역 ======
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
/*문제 설명
[ 배열 요소의 합 ]

unsigned int 배열의 크기 n과 n개의 배열 요소를 입력받아,
배열의 모든 요소의 합을 구하는 함수 void arraysum(unsigned int *arr, int size, int* sum) 을 작성하시오.

합한 결과는 return하지 않고, 인자로 받은 sum이 가리키는 곳에 저장해야 한다.


코드 작성 영역 이외에는 수정하지 마시오.



#include <stdio.h>


void arraysum(unsigned int* arr, int size, int* sum) {
	// ========= 코드 작성 영역 =========


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



입력 설명
첫째 줄에 배열의 크기 n을 입력한다. (n < 100)
둘째 줄에 n개의 int 값이 입력된다.
출력 설명
배열의 모든 요소의 합을 출력한다.
입력 예시 복사
5
10 20 30 40 50
출력 예시 복사
150*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void arraysum(unsigned int* arr, int size, int* sum) {
	// ========= 코드 작성 영역 =========
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
/*문제 설명
[ reverse ]

unsigned int 변수 i와 j의 값을 교환하고, int 배열 k의 순서를 뒤바꾸는 함수
void reverse(unsigned int* i, unsigned int* j, int* k)를 작성하시오.
단, 배열 k의 마지막값은 항상 -1이 저장되어 있다.

코드 작성 영역 이외에는 수정하지 마시오.




#include <stdio.h>

void reverse(unsigned int* i, unsigned int* j, int* k) {

	// ========= 코드 작성 영역 =========

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


입력 설명
첫째 줄에 i, j 값을 입력한다.
둘째 줄에 배열 k의 요소를 차례로 입력한다. 요소의 개수는 100개 이하이다.
출력 설명
i와 j의 값을 출력하고, 배열 k의 요소를 출력한다.
출력 값 사이는 공백으로 구분한다.
입력 예시 복사
20 99 1 2 3 4 5 -1
출력 예시 복사
99 20 5 4 3 2 1 -1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(unsigned int* i, unsigned int* j, int* k) {

	// ========= 코드 작성 영역 =========
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
/*문제 설명
[ int 를 char로 ]

unsigned int 크기의 정수 n을 입력받아,
정수 n의 메모리 시작 주소부터 차례로 4개의 char로 읽은 결과를 출력하는 프로그램을 작성하시오.
입력 설명
unsigned int 크기의 정수 n을 입력한다.
출력 설명
정수 n의 메모리 시작 주소부터 차례로 4개의 char씩 읽은 결과를 정수로 출력한다.
입력 예시 복사
131071
출력 예시 복사
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
/*문제 설명
[ 압축하기 ]

숫자열을 입력받아 연속된 수의 개수로 묶어 압축하는 함수 void compression(char* sequence, char* result) 을 작성하시오.

예를 들어,
222222222222215555554422 가 입력된 경우
2는 13개, 1은 1개, 5는 6개, 4는 2개, 2는 2개가 연속되어 입력되었으므로
21311564222와 같이 압축할 수 있다.

코드 작성 영역 이외에는 수정하지 마시오.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression(char* sequence, char* result) {

	// ====== 코드 작성 영역 ======



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

입력 설명
1개 이상, 최대 100개의 숫자열을 입력한다.
입력하는 숫자는 0이상 9이하이다.
출력 설명
연속된 수의 개수로 묶어 압축한 결과를 출력한다.
입력 예시 복사
222222222222215555554422
출력 예시 복사
21311564222
Hint
printf 함수에서 %s 형식 지정자는 '\0' 까지 출력한다.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression(char* sequence, char* result) {

	// ====== 코드 작성 영역 ======
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
/*문제 설명
[ get_integers ]

int n과 unsigned int* p를 입력 받아,
표준 입력(scanf)으로 n개의 unsigned int를 p 주소에 차례대로 저장하는 함수
void get_integers(int n, unsigned int *p)을 작성하시오.

코드 작성 영역 이외에는 수정하지 마시오.



#include <stdio.h>


void get_integers(int n, unsigned int *p)
{
	// ====== 코드 작성 영역 =======

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

입력 설명
생략.
출력 설명
생략.
입력 예시 복사
4 1 2 3 4 0 1 3 2 -1
출력 예시 복사
1 2 4 3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void get_integers(int n, unsigned int* p)
{
	// ====== 코드 작성 영역 =======
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
/*문제 설명
[ 두 캐릭터 사이에 하나의 short ]

unsigned char 범위의 수 a와 c를 입력받고,
unsigned short 범위의 수 b를 입력받아,
unsigned int에 a b c 순서로 합쳐 출력하는 프로그램을 작성하시오.
입력 설명
a와 b, c를 공백으로 구분하여 입력한다.
출력 설명
a b c를 순서대로 이어붙여 unsigned int로 출력한다.
입력 예시 복사
3 258 0
출력 예시 복사
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
/*문제 설명
[ 3 Byte 저장하기 ]

3바이트 4개 값을 합쳐
unsigned int data[3] 배열에 저장하는 프로그램을 작성하시오.
입력 설명
0 이상 2^24 미만의 10진 정수 4개를 공백으로 구분하여 입력한다.

출력 설명
3바이트 정수 4개가 저장된 unsigned int 배열 3칸을 공백으로 구분하여 출력하시오.
입력 예시 복사
1 2 3 4
출력 예시 복사
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
/*문제 설명
[ 3 Byte 읽기 ]

unsigned int 범위의 정수 3개를 배열에 저장하고,
앞에서부터 3바이트씩 4개로 나눠 출력하는 프로그램을 작성하시오.
입력 설명
unsigned int 범위의 10진 정수 3개를 공백으로 구분하여 입력한다.
출력 설명
3바이트씩 4개의 10진 정수를 공백으로 구분하여 출력하시오.
입력 예시 복사
33554433 196608 1024
출력 예시 복사
1 2 3 4
Hint
직전 문제와 정확히 반대이다.
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
/*문제 설명
[ 커스텀 암호화 ]

12 byte의 data를 입력받아 배열에 저장한다.
이어서 입력되는 12개의 a_n은 n번째 바이트에 적을 data의 인덱스를 나타낸다.
data와 a_n을 이용하여 재조합한 res를 만들고, res를 앞에서부터
unsigned int로 읽은 결과를 출력하시오.
입력 설명
unsigned char 범위의 수 12개(data)를 공백으로 구분하여 입력한다.
이어서 0~11 사이의 수 12개(a_n)를 공백으로 구분하여 입력한다.
출력 설명
a_n을 기준으로 data를 재조합한 배열을 unsigned int 배열로 읽어서 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 0 11 12
3 2 1 9 10 11 0 4 7 6 5 8
출력 예시 복사
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
/*[ 두 캐릭터 사이에 하나의 short ]*/
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
/*[ 3 Byte 저장하기 ]*/
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
/*[ 3 Byte 읽기 ]*/
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
/*[ 커스텀 암호화 ]*/
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
/*규현*/
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

	// ====== 코드 작성 영역 ======
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

