
#if 0
/*문제 설명
1 ~ 26 사이의 정수 n이 입력될 때,
n번째 알파벳을 대문자로 출력하시오.
입력 설명
1 ~ 26 사이의 정수 n이 입력된다.
출력 설명
n번째 알파벳을 대문자로 출력한다.
입력 예시 복사
4
출력 예시 복사
D*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%c", n - 1 + 'A');
	return 0;
}
#endif

#if 0
/*문제 설명
[2차원 인덱스를 1차원 인덱스로]

2차원 배열은 물리적으로 1차원 배열과 동일하다.
따라서, 두 개의 정수로 인덱싱하던 것을 0과 하나의 정수로 인덱싱 하는 것이 가능하다.

예를 들어,
int [3][2]배열에서 [1][1]칸은 [0][3]로 표현할 수 있다.
즉, 0과 정수 3으로 접근할 수 있다.

이처럼, 원본 배열의 크기와 원하는 인덱스가 주어질 때
같은 위치를 인덱싱할 수 있는 하나의 정수를 계산하는 프로그램을 작성하시오.
입력 설명
4개의 정수 n, m, x, y가 공백으로 구분되어 입력된다.
이는 원본 배열의 첫번째 크기, 두번째 크기, 원하는 인덱스의 첫번째 값, 두번째 값이다.
(1 <= n, m < 100 , 0 <= x < n , 0 <= y < m)
출력 설명
첫번째 인덱스를 0으로 고정하고,
두번째 인덱스로만 입력된 인덱스와 같은 위치를 나타낼 수 있는 정수를 출력하시오.
입력 예시 복사
5 5 2 3
출력 예시 복사
13*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, x, y;
	scanf("%d %d %d %d", &n, &m, &x, &y);
	printf("%d", m * x + y);
	return 0;
}
#endif

#if 0
/*문제 설명
[주소 계산하기]

2차원배열 int i[n][m]가 있을 때,
특정 번지 k를 나타내는 인덱스(x, y)를 계산하는 프로그램을 작성하시오.

배열 i의 시작주소를 0번지로 변환하고, 특정 번지는 상대주소 값으로 계산한다.

인덱스 x와 y는 각각 0 이상이며, 이 때 가능한 인덱스 쌍 중 y값이 최소인 경우를 출력하면 된다.
입력 설명
n, m, k가 공백으로 구분되어 입력된다.
(0 < n, m <= 10 )
출력 설명
k 번지에 접근하기 위한 인덱스 쌍을 출력하시오.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, k, num;
	scanf("%d %d %d", &n, &m, &k);
	num = k / 4;
	printf("%d %d", num / m, num % m);
	return 0;
}
#endif

#if 0
/*문제 설명
[홀수 자릿수]

정수 n (0 <= n < 10^100)을 입력받아,
이 정수 n의 홀수 번 째 자릿수만 출력하시오.

예를 들어, 2623451이면 2241를 출력해야한다.
입력 설명
0 이상 10^100 미만의 정수 n이 입력된다.
출력 설명
정수 n의 홀수번째 자릿수(1의 자리, 100의 자리, ...)를 출력하시오.
입력 예시 복사
501364
출력 예시 복사
034*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int len, i = 1;
	char n[10000];
	scanf("%s", n);
	len = strlen(n);
	if (len % 2) i = 0;
	for (; i < len; i += 2) printf("%c", n[i]);
	// flag 사용하는 방법 생각하기
	return 0;
}
#endif

#if 0
/*문제 설명
[숫자 입력 문자 출력 2]

1 ~ 10 사이의 정수 n이 입력될 때,
아래 규칙에 따른 출력이 나오는 프로그램을 작성하시오.

 1 -> a
 2 -> q
 3 -> w
 4 -> e
 5 -> -
 6 -> z
 7 -> +
 8 -> c
 9 -> v
10 -> g
입력 설명
1 ~ 10 사이의 정수 n이 입력된다.
출력 설명
주어진 규칙에 따라 문자를 출력한다.
입력 예시 복사
6
출력 예시 복사
z*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	switch (n) {
		case 1: printf("a"); break;
		case 2: printf("q"); break;
		case 3: printf("w");  break;
		case 4: printf("e");  break;
		case 5: printf("-");  break;
		case 6: printf("z");  break;
		case 7: printf("+");  break;
		case 8: printf("c");  break;
		case 9: printf("v");  break;
		case 10: printf("g");  break;
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 원소간 거리 구하기 ]

int i[6][6] 크기의 2차원배열의 원소 36개와 정수 A, B를 입력 받아,
배열 상에서 원소 A와 B가 떨어진 상대 거리를 구하여 출력하시오.
여기서 상대 거리란, A의 위치를 기준 0으로 보고 A부터 B까지의 거리를 의미한다.

예를 들어, 입력된 원소가 다음과 같을 때,
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36

원소 8과 23 사이의 거리를 구하면 다음과 같다.
 8 -> [1][1]
23 -> [3][4]
이므로, 상대 거리는 15이다.
입력 설명
정수 36개와 A, B가 차례로 입력된다.
배열의 원소 중 중복되는 값은 없다.
출력 설명
2차원 배열에서 정수 A와 B사이의 상대 거리를 출력한다.
단 정수 A는 B보다 먼저 나타난다.
입력 예시 복사
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
1 36
출력 예시 복사
35*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[36], num1, num2, idx1, idx2;
	for (int i = 0; i < 36; i++) scanf("%d", &arr[i]);
	scanf("%d %d", &num1, &num2);
	for (int i = 0; i < 36; i++) {
		if (arr[i] == num1) idx1 = i;
		if (arr[i] == num2) idx2 = i;
	}
	printf("%d", idx2 - idx1);
	return 0;
}
#endif

#if 0
/*문제 설명
[암호화 키보드]

qwerty 자판의 배열을 이용한 암호화 프로그램을 작성하시오.

암호화 방법은 다음과 같다.
알파벳 자판에서 한 개의 키 위에는 두 개의 키가 있는데, 이 중에서 왼쪽 키를 '위' 라고 하자.
알파벳 문자열이 입력되면, 문자에 해당하는 키 위에 있는 키로 바꾸어 출력하면 된다.

예를 들어,
apple -> q00o3
asdf -> qwer
로 출력하면 된다.
입력 설명
소문자 알파벳으로 이루어진 문자열이 입력된다.
문자열의 최대 길이는 50 이다.
출력 설명
암호화 된 문자열을 출력한다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int len;
	char n[51];
	scanf("%s", n);
	len = strlen(n);
	for (int i = 0; i < len; i++) {
		switch (n[i]){
			case 'q': n[i] = '1'; break;
			case 'w': n[i] = '2'; break;
			case 'e': n[i] = '3'; break;
			case 'r': n[i] = '4'; break;
			case 't': n[i] = '5'; break;
			case 'y': n[i] = '6'; break;
			case 'u': n[i] = '7'; break;
			case 'i': n[i] = '8'; break;
			case 'o': n[i] = '9'; break;
			case 'p': n[i] = '0'; break;
			case 'a': n[i] = 'q'; break;
			case 's': n[i] = 'w'; break;
			case 'd': n[i] = 'e'; break;
			case 'f': n[i] = 'r'; break;
			case 'g': n[i] = 't'; break;
			case 'h': n[i] = 'y'; break;
			case 'j': n[i] = 'u'; break;
			case 'k': n[i] = 'i'; break;
			case 'l': n[i] = 'o'; break;
			case 'z': n[i] = 'a'; break;
			case 'x': n[i] = 's'; break;
			case 'c': n[i] = 'd'; break;
			case 'v': n[i] = 'f'; break;
			case 'b': n[i] = 'g'; break;
			case 'n': n[i] = 'h'; break;
			case 'm': n[i] = 'j'; break;
		}
	}
	printf("%s", n);
	return 0;
}
#endif

#if 0
/*문제 설명
[큰 비트 연산]

문제 설명:
기존의 비트 연산은 한 자료형 내에서 이루어지며,
1, 2, 4, 8바이트 단위로만 비트 쉬프트 연산이 가능하다.

10바이트 배열에 저장된 모든 비트를 왼쪽으로 쉬프트 연산을 할 수 있도록 구현하려고 한다.
이때, 각 바이트간 비트 이동이 연속되어야 한다.

예를 들어,  2바이트 10101010 11110000를 왼쪽으로 2비트 쉬프트하면
10101011 11000000이 된다.
입력 설명
첫째 줄에 10바이트에 저장할 정수(0~255) 10개가 공백으로 구분되어 입력된다.
둘째 줄에 왼쪽으로 몇 비트 쉬프트할 지 입력된다. 이 값은 0 이상 80 미만이다.
출력 설명
쉬프트 연산을 한 결과를 10진 정수로 출력한다.*/
#define _CRT_SECURE_NO_WARNINGS

#endif

#if 0
/*문제 설명
[ matrix 시계 방향 회전하기 ]

5x5 크기의 matrix(2차원 배열)가 입력된다.
이 matrix를 시계 방향으로 90도 회전시킨 matrix를 출력하시오.
입력 설명
5x5 크기의 2차원배열(matrix)가 입력된다.
출력 설명
입력받은 matirx를 시계방향으로 90도 회전시킨 matrix를 출력한다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int arr[5][5], max = 0, len = 0, len2, num;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	for (; max > 0; max /= 10, len++);
	for (int i = 0; i < 5; i++) {
		for (int j = 4; j >= 0; j--) {
			printf("%2d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[아 신이난다! 아 재미난다! 아 더 게임 오브 데스!!]


더 게임 오브 데스라는 게임의 규칙은 다음과 같다.

인트로 구호 마지막의 데'쓰'와 동시에 참가자들은 아무나 손가락으로 가리킨다.
이후 술래가 아무 숫자를 부르면 주최자의 손가락부터 시작되어 가리켜진 사람에게 넘어가면서
숫자를 하나씩 카운트하며 이 과정이 계속 반복된다.
술래가 말한 숫자까지 카운트했을 때 지목당한 사람이 당첨이다.

더 게임 오브 데스라는 게임을 하다,
술마실 시간도 없는데 언제 하나하나 세고 앉아있나라는 생각이 든 주인공은
지목 상황과 숫자를 입력하면 당첨자가 누구인지 바로 계산해주는 프로그램을 제작하고자 한다.
입력 설명
첫째 줄에 자연수 n이 입력된다. n은 게임에 참가 중인 사람의 수다.
둘째 줄에 n개의 수 k_i가 입력된다.
k_i는 i번째 사람이 지목한 사람을 나타낸다.
셋째 줄에 자연수 a와 b가 입력된다. a는 술래이며, b는 술래가 외친 수이다.

(2 <= n < 50)
(1 <= k_i <= n, 1 <= i <= n)
(1 <= a <= n, 1 <= b < 100)
출력 설명
당참자의 번호가 출력된다.
입력 예시 복사
5
2 5 4 1 3
1 7
출력 예시 복사
5*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, arr[50], a, b;
	scanf("%d", n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; i++) {
		a = arr[a - 1];
	}
	printf("%d", a);
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
/*문제 설명
[주소 계산하기]

2차원배열 char i[n][m]가 있을 때,
특정 번지 k를 나타내는 인덱스(x, y)를 계산하는 프로그램을 작성하시오.

배열 i의 시작주소를 0번지로 변환하고, 특정 번지는 상대주소 값으로 계산한다.

인덱스 x와 y는 각각 0 이상이며, 이 때 가능한 인덱스 쌍 중 y값이 최소인 경우를 출력하면 된다.
입력 설명
n, m, k가 공백으로 구분되어 입력된다.
(0 < n, m <= 10 )
출력 설명
k 번지에 접근하기 위한 인덱스 쌍을 출력하시오.
입력 예시 복사
2 3 4
출력 예시 복사
1 1*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d %d", k / m, k % m);
	return 0;
}
#endif

#if 0
/*문제 설명
[암호화 키보드]

qwerty 자판의 배열을 이용한 암호화 프로그램을 작성하시오.

암호화 방법은 다음과 같다.
알파벳 자판에서 한 개의 키 위에는 두 개의 키가 있는데, 이 중에서 오른쪽 키를 '위' 라고 하자.
알파벳 문자열이 입력되면, 문자에 해당하는 키 위에 있는 키로 바꾸어 출력하면 된다.

예를 들어,
apple -> w--p4
asdf -> wert
로 출력하면 된다.
입력 설명
소문자 알파벳으로 이루어진 문자열이 입력된다.
문자열의 최대 길이는 50 이다.
출력 설명
암호화 된 문자열을 출력한다.
입력 예시 복사
include
출력 예시 복사
9jfp8r4*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int len;
	char n[51];
	scanf("%s", n);
	len = strlen(n);
	for (int i = 0; i < len; i++) {
		switch (n[i]) {
		case 'q': n[i] = '2'; break;
		case 'w': n[i] = '3'; break;
		case 'e': n[i] = '4'; break;
		case 'r': n[i] = '5'; break;
		case 't': n[i] = '6'; break;
		case 'y': n[i] = '7'; break;
		case 'u': n[i] = '8'; break;
		case 'i': n[i] = '9'; break;
		case 'o': n[i] = '0'; break;
		case 'p': n[i] = '-'; break;
		case 'a': n[i] = 'w'; break;
		case 's': n[i] = 'e'; break;
		case 'd': n[i] = 'r'; break;
		case 'f': n[i] = 't'; break;
		case 'g': n[i] = 'y'; break;
		case 'h': n[i] = 'u'; break;
		case 'j': n[i] = 'i'; break;
		case 'k': n[i] = 'o'; break;
		case 'l': n[i] = 'p'; break;
		case 'z': n[i] = 's'; break;
		case 'x': n[i] = 'd'; break;
		case 'c': n[i] = 'f'; break;
		case 'v': n[i] = 'g'; break;
		case 'b': n[i] = 'h'; break;
		case 'n': n[i] = 'j'; break;
		case 'm': n[i] = 'k'; break;
		}
	}
	printf("%s", n);
	return 0;
}
#endif

#if 0
/*문제 설명
[ matrix 반시계 방향 회전하기 ]

5x5 크기의 matrix(2차원 배열)가 입력된다.
이 matrix를 반시계 방향으로 90도 회전시킨 matrix를 출력하시오.
입력 설명
5x5 크기의 2차원배열(matrix)가 입력된다.
출력 설명
입력받은 matirx를 반시계 방향으로 90도 회전시킨 matrix를 출력한다.

입력 예시 복사
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

출력 예시 복사
 5 10 15 20 25
 4  9 14 19 24
 3  8 13 18 23
 2  7 12 17 22
 1  6 11 16 21	*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[j][i]);
		}
		printf("\n");
		}
	return 0;
}
#endif

#if 0
/*문제 설명
[큰 비트 연산]

문제 설명:
기존의 비트 연산은 한 자료형 내에서 이루어지며,
1, 2, 4, 8바이트 단위로만 비트 쉬프트 연산이 가능하다.

10바이트 배열에 저장된 모든 비트를 왼쪽으로 쉬프트 연산을 할 수 있도록 구현하려고 한다.
이때, 각 바이트간 비트 이동이 연속되어야 한다.

예를 들어,  2바이트 10101010 11110000를 왼쪽으로 2비트 쉬프트하면
10101011 11000000이 된다.
입력 설명
첫째 줄에 10바이트에 저장할 정수(0~255) 10개가 공백으로 구분되어 입력된다.
둘째 줄에 왼쪽으로 몇 비트 쉬프트할 지 입력된다. 이 값은 0 이상 80 미만이다.
출력 설명
쉬프트 연산을 한 결과를 10진 정수로 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 10
9
출력 예시 복사
4 6 8 10 12 14 16 18 20 0*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n[10], num, con = 255, ans[10] = { 0, }, idx = 9;
	for (int i = 0; i < 10; i++) scanf("%d", &n[i]);
	scanf("%d", &num);
	for (int i = 9; i >= 0; i--) {
		if (num >= 8) {
			num -= 8;
		}
		else if (num < 8) {
			ans[i] = (ans[i] | (n[idx] << num)) & con;
			if (i > 0) {
				ans[i - 1] = ((n[idx] << num) >> 8) & con;
			}
			idx--;
		}
	}
	for (int i = 0; i < 10; i++) printf("%d ", ans[i]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, arr[50], a, b, num = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	scanf("%d %d", &a, &b);
	num = a;
	for (int i = 0; i < b; i++) {
		a = arr[a - 1];
		num = a;
	}
	printf("%d", num);
	return 0;
}
#endif

#if 0
// ?????
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, bin[80], num, idx = 0, ans = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		for (int j = 7; j >= 0; j--) {
			bin[idx] = n >> j & 1;
			idx++;
		}
	}
	scanf("%d", &num);
	for (int i = 0; i < 80; i++) {
		if (i + num >= 80) {
			bin[i] = 0;
		}
		else bin[i] = bin[i + num];
	}
	idx = 0;
	for (int i = 0; i < 80; i++) {
		if (i % 8 == 0) {
			ans = 0;
			idx = 0;
		}
		ans = ans | (bin[i] << (7 - (i % 8)));
		idx++;
		if (idx == 7) printf("%d ", ans);
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[10];
	int shift;
	for (int i = 0; i < 10; i++) {
		scanf("%hhu", &arr[i]);
	}
	scanf("%d", &shift);
	for (int j = 0; j < shift; j++) {
		for (int i = 0; i < 9; i++) {
			arr[i] = (arr[i] << 1) | (arr[i + 1] >> 7);
		}
		arr[9] <<= 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
#endif