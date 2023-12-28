
#if 0
/*양의 정수 n을 입력받아,
'*'(이하 별)을 n개 출력하는 프로그램을 작성하시오.*/
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
/*문제 설명
양의 정수 n을 입력받아,
'*'(이하 별)로 높이가 n인 산을 만들려고 한다.
가장 낮은 높이에는 n개의 별을, 가장 높은 높이에는 1개의 별을 찍는다.
단, 별은 오른쪽 끝부터 출력하며, 별 사이는 공백으로 구분한다.
입력 설명
양의 정수 n이 입력된다.*/
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
/*문제 설명
양의 정수 n을 입력받아,
'*'(이하 별)로 높이가 n인 산을 만들려고 한다.
가장 낮은 높이에는 n개의 별을, 가장 높은 높이에는 1개의 별을 찍는다.
별은 왼쪽부터 출력하며, 별 사이는 공백으로 구분한다.
입력 설명
양의 정수 n이 입력된다.*/
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
/*문제 설명
최대 길이 30의 문자열을 입력받아,
대문자는 소문자로, 소문자는 대문자로 변환하여 출력하는 프로그램을 작성하시오.

단, <stdio.h> 외의 다른 헤더 파일을 사용해서는 안된다. (제출 코드는 다시 검토된다.)

입력 설명
최대 길이 30의 문자열이 입력된다.*/
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
/*문제 설명
최대 길이 30의 문자열을 입력받아,
대문자는 소문자로 변환하여 출력하는 프로그램을 작성하시오.

단, <stdio.h> 외의 다른 헤더 파일을 사용해서는 안된다. (제출 코드는 다시 검토된다.)

입력 설명
최대 길이 30의 문자열이 입력된다.*/
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
/*문제 설명
서로 다른 정수 10개가 주어질 때,
가장 작은 수와 그 수가 주어진 순서(인덱스)를
출력하는 프로그램을 작성하시오.
입력 설명
int 범위 내의 정수 10개가 공백으로 구분되어 주어진다.*/
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
/*문제 설명
서로 다른 정수 10개가 주어질 때,
가장 큰 수와 그 수가 주어진 순서(인덱스)를
출력하는 프로그램을 작성하시오.
입력 설명
int 범위 내의 정수 10개가 공백으로 구분되어 주어진다.*/
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
/*문제 설명
10개의 정수를 입력받아 배열에 저장한다.
배열 원소의 전체 평균을 구하고, 
그 값과 같은 값이 배열 안에 있으면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
단, 평균의 소수점 아래는 버린다.
입력 설명
int 범위 내의 정수 10개가 공백으로 구분되어 입력된다.*/
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
/*문제 설명
10개의 정수를 입력받아 배열에 저장한다.
배열 원소의 전체 합을 구하고,
그 값과 같은 값이 배열 안에 있으면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
입력 설명
int 범위 내의 정수 10개가 공백으로 구분되어 입력된다.*/
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
/*문제 설명
두 양의 정수 n과 m을 입력받고,
1부터 m의 배수이면서 n 이하인 수 중에서 가장 큰 수까지
1씩 증가시키면서 출력하는 프로그램을 작성하시오.
입력 설명
n과 m이 공백으로 구분되어 입력된다.
두 양의 정수는 int 범위 내의 값이다.
n은 m보단 크다.*/
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
/*문제 설명
두 양의 정수 n과 m을 입력받고,
1부터 m의 배수이면서 n 초과인 수 중에서 가장 작은 수까지
1씩 증가시키면서 출력하는 프로그램을 작성하시오.
입력 설명
n과 m이 공백으로 구분되어 입력된다.
두 양의 정수는 int 범위 내의 값이다.
n은 m보단 크다.*/
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
/*문제 설명
정수 a와 b (a < b)가 주어질 때,
a <= n <= b인 n 중에서 소수가 아닌 정수의 개수를 출력하려고 한다.
소수를 판단하는 함수인 isPrime을 완성하여 사용하여야 하며, 소수가 아닌 수의 개수는 cnt 변수에 저장한다.
문제에 제시된 코드는 수정할 수 없다.*/
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
/*문제 설명
정수 a와 b (a < b)가 주어질 때,
a <= n <= b인 n 중에서 소수인 정수의 개수를 출력하려고 한다.
소수를 판단하는 함수인 isPrime을 완성하여 사용하여야 하며, 소수의 개수는 cnt 변수에 저장한다.
문제에 제시된 코드는 수정할 수 없다.*/
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
/*문제 설명
팰린드롬이란, 뒤집어 읽어도 제대로 읽는 것과 같은 문장이나 낱말, 숫자, 문자열 등을 말한다.
0~100000000 사이의 숫자가 입력되면, 그 수가 팰린드롬 수인지 판단하여
팰린드롬이라면 "palindrome"을, 아니라면 입력한 수와 그 수를 뒤집은 수를 이어서 출력하시오.

단, 만약 900을 뒤집으면 009에서 앞의 0을 떼어 9가 된다. 즉, 9009를 출력하여야 한다.

입력 설명
0이상, 1억 이하의 수가 입력된다.
출력 설명
palindrome 또는 입력된 수와 뒤집은 수가 출력된다.
입력된 수가 팰린드롬이면 palindrome를, 아니면 입력한 수와 뒤집은 수를 출력한다.*/
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
/*문제 설명
팰린드롬이란, 뒤집어 읽어도 제대로 읽는 것과 같은 문장이나 낱말, 숫자, 문자열 등을 말한다.
0~100000000 사이의 숫자가 입력되면, 그 수는 팰린드롬 수인지 판단하여
팰린드롬이라면 'palindrome'를, 아니라면 뒤집은 수를 출력하시오.
단, 만약 900을 뒤집으면 009이고, 이는 숫자 9가 된다. 즉, 9를 출력하여야 한다.
입력 설명
0이상, 1억 이하의 수가 입력된다.
출력 설명
palindrome 또는 입력된 수를 뒤집은 수가 출력된다.
입력된 수가 팰린드롬이면 palindrome를, 아니면 뒤집은 수를 출력한다.*/
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
/*문제 설명
unsinged int 범위의 숫자를 입력받아, 이 숫자의 홀수번째 자릿수만 보고자 한다.
예를 들어, 1234이면 24를 보고 싶은 것이다.
홀수 자릿수만 떼어내어 출력하시오.
\
입력 설명
unsigned int 범위(0 ~ 2^32 - 1)의 수가 입력된다.
출력 설명
입력된 수의 홀수 자리(1의 자리, 100의 자리...)만 출력하시오.*/
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
/*문제 설명
unsinged int 범위의 숫자가 입력받아, 이 숫자의 짝수번째 자릿수만 보고자 한다.
예를 들어 1234이면 13을 보고 싶은 것이다.
짝수 자릿수만 떼어내어 출력하시오.
입력 설명
unsigned int 범위(0 ~ 2^32 - 1)의 수가 입력된다.
출력 설명
입력된 수의 짝수 자리(10의 자리, 1000의 자리...)만 출력하시오.*/
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
/*문제 설명
공백이 없는 문자열 하나와 정수 n이 주어질 때,
주어진 문자열 내에 길이가 n 이하인 팰린드롬이 몇 개 있는 지
출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 공백이 없는 문자열이 하나 입력된다. 최대 100자이다.
둘째 줄에 자연수 n이 주어진다.
n은 주어진 문자열의 길이 이하이다.
출력 설명
주어진 문자열에 길이가 n 이하인 팰린드롬이 몇 개 있는 지 출력하시오.*/
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
/*문제 설명
공백이 없는 문자열 하나와 정수 n이 주어질 때,
주어진 문자열 내에 길이가 n 이상인 팰린드롬이 몇 개 있는 지
출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 공백이 없는 문자열이 하나 입력된다. 최대 100자이다.
둘째 줄에 자연수 n이 주어진다.
n은 주어진 문자열의 길이 이하이다.
출력 설명
주어진 문자열에 길이가 n 이상인 팰린드롬이 몇 개 있는 지 출력하시오.*/
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
/*문제 설명
[ bit AND는 할 줄 알지? ]

unsigned int 범위의 정수 n이 주어진다.
이 n의 가장 아래 비트(LSB)의 값을 0으로 바꾸어 출력하시오.

입력 설명
unsigned int 범위의 수 하나가 입력된다.
출력 설명
입력된 수에서 가장 아래 비트(LSB)를 0으로 바꾼 수를 출력한다.*/
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
/*문제 설명
[ bit OR은 할 줄 알지? ]

unsigned int 범위의 정수 n이 주어진다.
이 n의 가장 아래 비트(LSB)의 값을 1로 바꾸어 출력하시오.

입력 설명
unsigned int 범위의 수 하나가 입력된다.
출력 설명
입력된 수에서 가장 아래 비트(LSB)를 1로 바꾼 수를 출력한다.*/
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
/*문제 설명
[암호화]
비트 XOR을 사용하면 암호화를 할 수 있다.
1로 xor연산을 하면 무조건 반전되고,
0으로 xor연산을 하면 무조건 유지된다.
이미 xor 연산으로 암호화된 1byte 크기의 data와
암호화에 사용된 1byte 크기의 key가 주어질 때,
원래의 data는 무엇이었는 지 출력하시오.

입력 설명
0~255 사이의 data와 key가 순서대로 공백으로 구분되어 주어진다.

출력 설명
암호화 전의 data를 출력하시오.*/
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
/*문제 설명
[ 모세의 기적 ]

0~255 사이의 숫자 data와, 0~4사이의 숫자 n이 주어질 때,
data의 중심을 양쪽으로 n칸씩 가른 수를 출력하시오.

예를 들어, 170과 1이 주어진다면,
1010_1010 -> 0100_0101
69를 출력해야한다.

입력 설명
data와 n이 공백으로 구분되어 입력된다.
출력 설명
설명과 같은 연산을 한 결과를 출력하시오.*/
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
/*문제 설명
[ 모세의 기적 ]
0~255 사이의 숫자 data가 주어질 때,
data의 중심을 양쪽으로 2칸씩 가른 수를 출력하시오.
예를 들어, 170이 주어진다면,
1010_1010 -> 1000_0010
130를 출력해야한다.

입력 설명
data가 공백으로 구분되어 입력된다.
출력 설명
설명과 같은 연산을 한 결과를 출력하시오.*/
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
/*문제 설명
[암호화2] 
int 변수의 첫 바이트와 세번 째 바이트의 위치를 바꿔 저장하고
두번 째 바이트와 네번 째 바이트의 위치를 바꿔 저장하는 방식으로
암호화를 하고자 한다.
예를 들어 0x543210ff를 0x10ff5432로 변환하는 것이다.
위와 같은 작업을 실행하여 결과를 출력하는 프로그램을 작성하시오.

입력 설명
unsigned int 범위의 10진수가 하나 주어진다.

출력 설명
위와 같은 과정을 거쳐 암호화된 수를 10진수로 출력하시오.*/
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
/*문제 설명
[암호화2]
문제 설명:
int 변수의 첫 바이트와 네번 째 바이트의 위치를 바꿔 저장하고
두번 째 바이트와 세번 째 바이트의 위치를 바꿔 저장하는 방식으로
암호화를 하고자 한다.
즉, 네 바이트의 순서를 뒤집는다.
예를 들어 0x543210ff를 0xff103254로 변환하는 것이다.
위와 같은 작업을 실행하여 결과를 출력하는 프로그램을 작성하시오.

입력 설명
unsigned int 범위의 10진수가 하나 주어진다.

출력 설명
위와 같은 과정을 거쳐 암호화된 수를 10진수로 출력하시오.*/
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
/*문제 설명
[값으로 인덱스 찾기]
 10개의 양의 정수를 입력받아 배열에 저장하고,
 전체 배열에서 찾으려는 값의 인덱스를 출력하시오.

입력 설명
 첫째 줄에 10개의 서로 다른 양의 정수가 입력된다.

 둘째 줄에 찾으려는 값이 입력된다.

출력 설명
배열 내에서 찾으려는 값의 인덱스를 출력한다.*/
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
/*문제 설명
[특정 비트의 값은?]
0 ~ 255 사이의 수가 있을 때,
이 수의 n번 비트의 값을 출력하시오.

입력 설명
0 ~ 255 사이의 수(x)와 0 ~ 7 사이의 수(n)가 공백으로 구분되어 입력된다.

출력 설명
x의 n번 비트를 출력하시오.*/
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
/*문제 설명
[특정 비트의 값은?]
0 ~ 255 사이의 수가 있을 때, 
이 수의 3번 비트의 값을 출력하시오.

입력 설명
0 ~ 255 사이의 수가 입력된다.

출력 설명
이 수의 3번 비트의 값을 출력하시오.*/
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
/*문제 설명
[파형 그리기]
디지털 신호는 0 또는 1이다.
수신기로 디지털 신호를 읽으면 0 또는 1이 저장될 것이다.
통신을 할 땐 한 비트씩 읽지 않고 보통 한 바이트씩 읽어낸다.
그렇게 저장된 숫자는 봐도 잘 모르겠으므로, 시각화를 하는 프로그램을 제작해보자.

입력 설명
첫째 줄에 정수 n이 주어진다. (1 <= n < 10)
둘째 줄에 n개의 정수가 주어진다. 각각 0~255 사이의 값을 갖는다.

출력 설명
8*n개의 글자가 출력된다.
비트가 1이면 '-'를 0이면 '_'를 출력하는 것이다.*/
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
/*문제 설명
[파형 그리기]
디지털 신호는 0 또는 1이다.
수신기로 디지털 신호를 읽으면 0 또는 1이 저장될 것이다.
통신을 할 땐 한 비트씩 읽지 않고 보통 한 바이트씩 읽어낸다.
그렇게 저장된 숫자는 봐도 잘 모르겠으므로, 시각화를 하는 프로그램을 제작해보자.

입력 설명
정수 n이 주어진다. 0~255 사이의 값을 갖는다.

출력 설명
8개의 글자가 출력된다.

비트가 1이면 '-'를 0이면 '_'를 출력하는 것이다.*/
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
/*문제 설명
[2진수 누적합 구하기]
8비트의 2진수를 입력받아, 각 자리까지의 누적 합을 출력하시오.

입력 설명
8비트의 2진수가 입력된다.

출력 설명
각 자리수에 해당 자리수까지 누적 합을 출력한다.*/
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
/*문제 설명
[한 번에 네 글자 받기]
unsigned int 자료형의 크기는 4바이트이다.
이 자료형에 1바이트인 문자를 네 개 저장할 수 있다.
unsigned int 크기의 수를 받고, 문자열을 출력하시오.

입력 설명
unsigned int 범위의 수가 하나 입력된다.

출력 설명
해당 수의 각 바이트 별 문자 네 개를 출력하시오.*/
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
/*문제 설명
[한 번에 네 글자 받기]
unsigned int 자료형의 크기는 4바이트이다.
이 자료형에 1바이트인 문자를 네 개 저장할 수 있다.
unsigned int 크기의 수를 받고, 문자열을 출력하시오.

입력 설명
unsigned int 범위의 수가 하나 입력된다.

출력 설명
해당 수의 각 바이트 별 문자 네 개를 출력하시오.*/
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
/*문제 설명
[진법 변환기]
10진수 N과 임의의 수 X( 2 <= X < 10 )가 공백으로 구분되어 입력된다.
N을 X진수로 변환한 결과를 출력하시오.
X진수는 0부터 X개의 숫자를 이용하여 수를 나타낸다.
예를 들어, 2진수는 0부터 두 개이므로 0과 1만을 사용하여 나타낸다.
3이라면 2진수로 11이 된다. (1 * 2^1 + 1 * 2^0)
3은 3진수로 10이다. (1 * 3^1 + 0 * 3^0)
5는 3진수로 12이다. (1 * 3^1 + 2 * 3^0)

입력 설명
unsigned int 범위의 수 N과 X가 공백으로 구분되어 주어진다.

출력 설명
N을 X진수로 변환한 결과를 출력하시오.*/
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
/*문제 설명
[진법 변환기]
10진수 N이 공백으로 구분되어 입력된다.
N을 2진수로 변환한 결과를 출력하시오.

입력 설명
unsigned int 범위의 수 N이 주어진다.

출력 설명
N을 2진수로 변환한 결과를 출력하시오.*/
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
/*문제 설명
[ 파형 읽어내기 ]
정보를 담은 전자기파가 전선을 통해 흘러온다.

HIGH/LOW를 구분하며 한 비트 한 비트를 읽어 모으면,
비로소 모든 정보가 모인 수를 얻을 수 있게 된다.
입력 설명
첫째 줄에 정수 n이 입력된다. (1 <= n < 10)
둘째 줄에 n*8개의 문자가 입력된다. 각 문자는 '-' 또는 '_'이며,
'-'는 1을 '_'는 0을 의미한다.
출력 설명
해석을 완료한 n개의 수를 출력하라. 부호없는 1바이트 정수이다.*/
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
/*문제 설명
[비트를 그림으로]
unsigned int 크기의 정수 하나를 입력받아,
해당 정수의 비트를 그림으로 변환하여 출력하시오.
정수의 각 비트가 1이면 @, 0이면 O으로 변환하여 1 x 32 크기의 그림을 출력한다.
예를 들어, 4294967293의 비트 표현은
11111111_11111111_11111111_11111101이므로
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@O@를 출력한다.
입력 설명
unsigned int 범위의 정수가 입력된다.
출력 설명
비트가 1이면 @, 0이면 O를 출력하시오.*/
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
/*문제 설명
[모세의 기적2]
unsigned int 범위의 data와, 0~16사이의 숫자 n이 주어진다.
data의 중심을 기준으로 양쪽으로 n칸씩 시프트 연산한 결과를 16진수로 출력하시오.
data의 중심이란, 16번 비트와 15번 비트 사이를 의미한다.
예를 들어, 0x35AFAB96과 3이 주어진다면,
00110101_10101111_10101011_10010110
-> 10101101_01111000_00010101_01110010
이므로, 0xAD781572를 출력해야한다.
입력 설명
data와 n이 공백으로 구분되어 입력된다.
단, data는 16진수로 주어진다.
출력 설명
연산한 결과를 16진수 형태로 출력하시오.*/
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
/*문제 설명
[한글인가 알파벳인가 그것이 문제로다]
한글 또는 알파벳 한 글자가 입력된다.
입력된 글자가 영어라면 "english"를,
한글이라면 "한글"을 출력하시오.

입력 설명:
한글 또는 알파벳 한 글자가 입력된다.

출력 설명:
입력된 글자가 영어라면 "english"를,
한글이라면 "한글"을 출력하시오.

입력 설명
한글 또는 알파벳 한 글자가 입력된다.
출력 설명
입력된 글자가 영어라면 "english"를,
한글이라면 "한글"을 출력하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char n[4];
	scanf("%s", n);
	if (n[0] & 0x80) printf("한글");
	else printf("english");
	return 0;
}
#endif

#if 0
/*문제 설명
unsigned int 범위의 수를 정수를 입력받는다.
입력받은 정수의 첫번째 바이트와 세번째 바이트의 위치를 바꿔 저장하고,
두번째 바이트와 네번째 바이트의 위치를 바꿔 저장하는 방법으로 암호화를 한다.

예를 들어, 0x543210ff는 0x10ff5432로 변환된다.

암호화 된 결과를 출력하는 프로그램을 작성하시오.
입력 설명
unsigned int 범위의 10진수가 하나 주어진다.
출력 설명
암호화된 수를 10진수로 출력하시오.*/
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
/*문제 설명
[비트 셋팅]

unsigned int 범위의 정수 n과, 0 ~ 31 사이의 정수 x가 주어진다.
정수 n의 x번 비트를 1로 바꾼 결과를 출력하시오.
입력 설명
정수 n과 x가 공백으로 구분되어 입력된다.
출력 설명
정수 n의 x번 비트를 1로 바꾼 결과를 출력하시오.*/
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
/*문제 설명
[암호화3]

unsigned char 범위의 정수 n이 주어질 때,
정수 n의 상위 4비트와 하위 4비트를 서로 바꾼 수를 출력하시오.
입력 설명
0 ~ 255 사이의 정수 하나가 입력된다.
출력 설명
입력된 정수의 상위 4비트와 하위 4비트를 서로 바꾼 수를 출력하시오.*/
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
/*문제 설명
[특수한 16진수]

unsigned char 변수의 크기는 1바이트(8비트)이다.
16진수 한 자리는 4비트의 크기를 표현할 수 있으므로, 
unsigned char 변수는 각각 4비트씩 두 자리의 16진수로 표현할 수 있다.

예를 들어, 0111_1010 은
0111 -> 7
    1010 -> A
01111010 -> 7A 로 표현된다.

만약, 같은 unsigned char 변수 값을 앞에서부터 4비트씩 차례로 읽어 변환한다면, 
아래와 같이 5자리의 16진수로 변환할 수 있다.

0111 -> 7
 1111 -> F
  1110 -> E
   1101 -> D
    1010 -> A
01111010 -> 7FEDA 로 표현된다.

위와 같은 방법으로 변환하여 출력하는 프로그램을 작성하시오.
입력 설명
10진수 정수 N이 입력된다. ( 0 <= N < 256 )
출력 설명
특수하게 변환된 16진수를 출력하시오.
(단, 영문자는 모두 대문자로 출력한다.)*/
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
/*문제 설명
unsigned char 범위의 정수 n과, 3비트 크기의 정수 x가 입력된다.
2진수 표현에서 정수 n에 비트 패턴 x가 몇번 나타나는지 출력하시오.

예를 들어, 247과 7이 주어졌다면,
11110111
111
 111
     111
이므로 정수 n에는 비트 패턴 x가 3번 나타난다.

입력 설명:
정수 n과 x가 공백으로 구분되어 입력된다.

출력 설명:
정수 n에 x가 나타난 횟수를 출력하시오.

입력 설명
정수 n과 x가 공백으로 구분되어 입력된다.
출력 설명
정수 n에 x가 나타난 횟수를 출력하시오.*/
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
/*문제 설명
[진법 변환기2]

양의 정수 N과 X가 공백으로 구분되어 입력된다.
여기서 X(2 <= X < 10)는 정수 N이 X진수임을 의미한다. 

정수 N을 10진수로 변환한 결과를 출력하시오.


N을 10진수로 변환한 결과는 unsigned int 범위에 있다.

입력 설명
정수 N과 X가 공백으로 구분되어 입력된다.
출력 설명
정수 N을 10진수로 변환한 결과를 출력하시오.*/
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
/*문제 설명
[문자열에 알파벳이 몇 개?]

알파벳과 한글이 섞인 문자열이 주어진다. 최대 10글자이다.
주어진 문자열에서 알파벳이 총 몇 개인 지 출력하시오.
입력 설명
한글과 알파벳이 섞인 문자열이 주어진다. 최대 10글자이다.
출력 설명
주어진 문자열에 들어있는 알파벳의 개수를 출력하시오.*/
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
/*문제 설명
unsigned char 범위의 정수 하나를 입력받아,
해당 정수의 비트를 그림으로 변환하여 출력하시오.

정수의 각 비트가 1이면 '#', 0이면 '*'을 변환하여 출력한다.

예를 들어, 170이 입력되면,
출력 값은 #*#*#*#* 이 된다.
입력 설명
0 ~ 255 사이의 정수가 입력된다.
출력 설명
정수의 8개 비트에 대해 변환한 결과를 출력하시오.*/
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
/*문제 설명
[비트열 추출하기]

unsigned char 범위의 정수 n이 주어진다.
정수 n의 5번 비트부터 2번 비트까지를 추출하여
추출한 4비트를 16진수 한 자리로 출력하시오.
입력 설명
unsigned char 범위의 정수가 하나 주어진다.
출력 설명
추출한 4비트를 16진수로 출력하시오.*/
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
/*문제 설명
[상위 4비트만 남기기]

unsigned char 범위의 정수 n이 입력된다.
정수 n의 8개 비트 중 상위 4 비트만 남긴 후, 그 정수를 출력하시오.
입력 설명
0 ~ 255 사이의 정수 하나가 입력된다.
출력 설명
입력된 정수의 상위 4 비트만 남기고, 하위 4 비트는 0으로 만든 정수를 출력하시오.*/
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
/*문제 설명
[비트 카운트]

unsigned int 범위의 정수 n이 주어진다.
정수 n의 비트 중 0의 개수를 출력하는 프로그램을 작성하시오.
입력 설명
unsigned int 범위의 정수 하나가 입력된다.
출력 설명
입력된 정수를 구성하는 비트 중 0의 개수를 출력하시오.*/
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
/*문제 설명
[비트 셋팅]

unsigned char 범위의 정수 n과, 0 ~ 7 사이의 정수 x가 주어진다.
정수 n의 x번 비트를 0으로 만든 정수를 출력하시오.
입력 설명
정수 n과 x가 공백으로 구분되어 입력된다.
출력 설명
정수 n의 x번 비트를 0으로 만든 정수를 출력하시오.*/
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
/*문제 설명
[암호화4]

unsigned int 크기의 data와, unsigned char 크기의 key가 주어진다.
data의 모든 바이트에 key를 xor한 결과를 출력하시오.
입력 설명
data와 key가 공백으로 구분되어 입력된다.
출력 설명
data의 모든 바이트에 key로 xor 연산한 값을 출력하시오.*/
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
/*문제 설명
[암호화 1]

비트 XOR을 사용하면 암호화를 할 수 있다.

1로 xor연산을 하면 무조건 반전되고,
0으로 xor연산을 하면 무조건 유지된다.

이미 xor 연산으로 암호화된 1byte 크기의 data와
암호화에 사용된 1byte 크기의 key가 주어질 때,
원래의 data는 무엇이었는 지 출력하시오.
입력 설명
0~255 사이의 data와 key가 순서대로 공백으로 구분되어 주어진다.
출력 설명
암호화 전의 data를 출력하시오.*/
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
/*문제 설명
[암호화 2]

int 변수의 첫 바이트와 세번 째 바이트의 위치를 바꿔 저장하고
두번 째 바이트와 네번 째 바이트의 위치를 바꿔 저장하는 방식으로
암호화를 하고자 한다.

예를 들어 0x543210ff를 0x10ff5432로 변환하는 것이다.

위와 같은 작업을 실행하여 결과를 출력하는 프로그램을 작성하시오.

입력 설명
unsigned int 범위의 10진수가 하나 주어진다.

출력 설명
위와 같은 과정을 거쳐 암호화된 수를 10진수로 출력하시오.*/
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
/*문제 설명
[비트 뒤집기]
unsigned char 크기의 정수가 하나 입력된다.
이 정수의 비트열을 뒤집은 결과를 출력하시오.

비트열을 뒤집는다는 것은, 문자열을 뒤집듯이 비트를 뒤집는 것이다.

예를 들어, 42 (0010_1010)를 뒤집으면 84 (0101_0100)가 된다.
입력 설명
unsigned char 크기의 정수 하나가 입력된다.
출력 설명
입력된 정수의 비트열을 뒤집은 결과를 출력하시오.*/
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

