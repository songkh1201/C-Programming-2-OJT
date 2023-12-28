#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//system("chcp 437");

#if 0
/*문제 설명
[비트를 그림으로]

unsigned int 크기의 정수 하나를 입력받아,
해당 정수의 비트를 그림으로 변환하여 출력하시오.

정수의 각 비트가 1이면 @, 0이면 O으로 변환하여 1 x 32 크기의 그림을 출력한다.

예를 들어, 4294967294의 비트 표현은
11111111_11111111_11111111_11111101이므로
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@O@를 출력한다.
입력 설명
unsigned int 범위의 정수가 입력된다.
출력 설명
비트가 1이면 @, 0이면 O를 출력하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, str;
	scanf("%u", &n);
	for (int i = 31; i >= 0; i--) {
		str = n >> i & 1;
		if (str) {
			printf("@");
		}
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
#include<math.h>
int main() {
	unsigned int data;
	unsigned int n, num1, num2;
	scanf("%x %d", &data, &n);
	num1 = data >> 16;
	num1 = num1 % (int)pow(2, (16 - n));
	num1 = num1 << (16 + n);
	num2 = data % (int)pow(2, 16);
	num2 = num2 >> n;
	printf("%X", num1 | num2);
	return 0;
}
#endif

#if 0
/*문제 설명
[한	글인가 알파벳인가 그것이 문제로다]

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
	char str[5];
	scanf("%s", str);
	if (str[0] & 0x80) {
		printf("한글");
	}
	else printf("english");
	return 0;
}
#endif

#if 0
/*[비트 셋팅]

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
	unsigned int n;
	int num1, num2;
	scanf("%u", &n);
	num2 = n % 16;
	num1 = n - num2;
	printf("%u", (num1 >> 4) | (num2 << 4));
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
	printf("%u", (num1 >> 16) | (num3 << 16) | (num2 >> 16) | (num4 << 16));
	return 0;
}
#endif

#if 0
/*문제 설명
[진법 변환기2]

정수 N과 X가 공백으로 구분되어 입력된다.
여기서 X(2 <= X < 10)는 정수 N이 X진수임을 의미한다. 

정수 N을 10진수로 변환한 결과를 출력하시오.
입력 설명
정수 N과 X가 공백으로 구분되어 입력된다.
출력 설명
정수 N을 10진수로 변환한 결과를 출력하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	
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
int is_hangul(char str) {
	if (str & 0x80) {
		return 1;
	}
	return 0;
}
int main() {
	char str[100];
	int len, cnt = 0;
	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (is_hangul(str[i])) cnt++;
	}
	printf("%d", len - cnt);
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

위와 같은 방법으로 변환하여 출력하는 프로그램을 작성하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int sum, arr[5], idx;
	scanf("%d", &n);
	for (int i = 4; i >= 0; i--) {
		sum = (n >> i) % 16;
		arr[5 - i - 1] = sum;
	}
	for (idx = 0; idx < 5; idx++) {
		if (arr[idx] != 0) break;
	}
	for (int i = idx; i < 5; i++) {
		printf("%X", arr[i]);
	}
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
	int n, sum, cnt = 0, x;
	scanf("%d %d", &n, &x);
	for (int i = 5; i >= 0; i--) {
		sum = (n >> i) % 8;
		if (sum == x) cnt++;
	}
	printf("%d", cnt);
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
#include<math.h>
int main() {
	unsigned int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 5; i >= 2; i--) {
		sum += ((n >> i) & 1) * pow(2, i - 2);
	}
	printf("%X", sum);
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
	unsigned int n, x;
	scanf("%d %d", &n, &x);
	n = n & (~(1 << x));
	printf("%d", n);
	return 0;
}
#endif

#if 0
/*[암호화4]

unsigned int 크기의 data와, unsigned char 크기의 key가 주어진다.
data의 모든 바이트에 key를 xor한 결과를 출력하시오.
입력 설명
data와 key가 공백으로 구분되어 입력된다.
출력 설명
data의 모든 바이트에 key로 xor 연산한 값을 출력하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int data, key, sum = 0;
	scanf("%u %u", &data, &key);
	for (int i = 0; i < 4; i++) {
		sum += ((((data >> 8 * i) % 256) ^ key) % 256) << (8 * i);
	}
	printf("%u", sum);
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

입력 설명:

10진수 정수 N이 입력된다. ( 0 <= N < 256 )
입력 설명
10진수 정수 N이 입력된다. ( 0 <= N < 256 )
출력 설명
특수하게 변환된 16진수를 출력하시오.
(단, 영문자는 모두 대문자로 출력한다.)*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	int sum, arr[5], idx, con = 1;
	scanf("%d", &n);
	for (int i = 4; i >= 0; i--) {
		sum = (n >> i) % 16;
		arr[5 - i - 1] = sum;
		if (sum != 0) con = 0;
	}
	if (con) {
		printf("%d", arr[4]);
	}
	else {
		for (idx = 0; idx < 5; idx++) {
			if (arr[idx] != 0) break;
		}
		for (int i = idx; i < 5; i++) {
			printf("%X", arr[i]);
		}
	}
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
#include<math.h>
int main() {
	unsigned int n, ans = 0;
	scanf("%d", &n);
	for (int i = 7; i >= 0; i--) {
		ans += (n >> i & 1) * ((int)pow(2, 7 - i));
	}
	printf("%d", ans);
	return 0;
}
#endif

#if 0
/*문제 설명
[진법 변환기2]

정수 N과 X가 공백으로 구분되어 입력된다.
여기서 X(2 <= X < 10)는 정수 N이 X진수임을 의미한다. 

정수 N을 10진수로 변환한 결과를 출력하시오.
입력 설명
정수 N과 X가 공백으로 구분되어 입력된다.
출력 설명
정수 N을 10진수로 변환한 결과를 출력하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	long long N, X, sum = 0, num = 1, len;
	char arr[100];
	for (len = 0; len < 100; len++) {
		scanf("%c", &arr[len]);
		if (arr[len] == ' ') break;
	}
	len--;
	scanf("%lld", &X);
	while (len >= 0) {
		sum += (arr[len] - '0') * num;
		num *= X;
		len--;
	}
	printf("%lld", sum);
	return 0;
}
#endif

#if 0
/**/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char N[100] = { 0, };
	int X;
	for (int i = 0; i < 32; i++) {
		scanf("%c", &N[i]);
		if (N[i] == ' ') {
			break;
		}
	}
	scanf("%d", &X);

	int index = 0;
	for (int i = 0; i < 100; i++) {
		if (N[i] == ' ') {
			index = i;
		}
	}
	for (int i = 0; i < index; i++) {
		N[i] = N[i] - '0';
	}

	int mul = 1;
	long long sum = 0;
	for (int i = index - 1; i >= 0; i--) {
		sum = sum + N[i] * mul;
		mul = mul * X;
	}
	printf("%lld", sum);


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
	unsigned int data, key;
	scanf("%u %u", &data, &key);
	unsigned int a, b, c, d;
	a = (data >> 24) % 256;
	b = (data >> 16) % 256;
	c = (data >> 8) % 256;
	a = (a ^ key) << 24;
	b = (b ^ key) << 16;
	c = (c ^ key) << 8;
	d = (data % 256) ^ key;
	printf("%u", a + b + c + d);
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

