#if 0
/*문제 설명
[숫자 입력 알파벳 출력 2]

0 ~ 25 사이의 정수 n이 입력된다.
뒤에서부터 n번째 알파벳 소문자를 출력하시오.
입력 설명
0 ~ 25 사이의 정수 n이 입력된다.
출력 설명
뒤에서부터 n번째 알파벳 소문자를 출력하시오.
입력 예시 복사
1
출력 예시 복사
y*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%c", 'z' - n);
	return 0;
}
#endif

#if 0
/*문제 설명
[가장 오른쪽 1의 위치 찾기]

int 범위의 양의 정수 x가 입력된다.
x의 비트 중에서 가장 오른쪽에 있는 값이 1인 비트의 위치를 출력하시오.
단, x의 LSB를 0번 비트로 간주한다.
입력 설명
양의 정수 x가 입력된다.
출력 설명
x에서 가장 오른쪽에 있는 값이 1인 비트의 위치를 출력한다.

입력 예시 복사
34
출력 예시 복사
1*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	for (int i = 0; i < 32; i++) {
		if (x >> i & 1) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[대소문자 세기]

알파벳 대문자와 소문자로 구성된 문자열이 주어진다.
각 문자(52가지)의 개수를 구해 출력하시오.
입력 설명
100자 이하의 알파벳 대소문자로 구성된 문자열이 하나 입력된다.

출력 설명
소문자 a부터 소문자 z까지, 대문자 A부터 대문자 Z까지
그 개수를 공백으로 구분하여 출력하시오.
즉, 수가 52개 출력되어야 한다.

입력 예시 복사
asdfASDF
출력 예시 복사
1 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 1 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	int cnt1[26] = { 0 }, cnt2[26] = { 0 };
	char str[101];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (islower(str[i])) {
			cnt1[str[i] - 'a']++;
		}
		else cnt2[str[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) printf("%d ", cnt1[i]);
	for (int i = 0; i < 26; i++) printf("%d ", cnt2[i]);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 3차원 원소간 거리 구하기 ]

int i[3][5][5] 크기의 3차원배열의 원소 75개와 정수 A, B를 입력 받아,
배열 상에서 원소 A와 B가 떨어진 상대 거리를 구하여 출력하시오.
여기서 상대 거리란, A의 위치를 기준 0으로 보고 A부터 B까지의 메모리 주소상 떨어진 거리를 의미한다.

예를 들어, 입력된 원소가 다음과 같을 때,
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
26 27 28 29 30
31 32 33 34 35
36 37 38 39 40
41 42 43 44 45
46 47 48 49 50
51 52 53 54 55
56 57 58 59 60
61 62 63 64 65
66 67 68 69 70
71 72 73 74 75

원소 8과 23 사이의 거리를 구하면 다음과 같다.
 8 -> [0][1][2]
62 -> [2][2][1]
이므로, 상대 거리는 54이다.
입력 설명
정수 75개와 A, B가 차례로 입력된다.
배열의 원소 중 중복되는 값은 없다.
출력 설명
3차원 배열에서 정수 A와 B사이의 상대 거리를 출력한다.
단 정수 A는 B보다 먼저 나타난다.

입력 예시 복사
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
26 27 28 29 30
31 32 33 34 35
36 37 38 39 40
41 42 43 44 45
46 47 48 49 50
51 52 53 54 55
56 57 58 59 60
61 62 63 64 65
66 67 68 69 70
71 72 73 74 75
1 75
출력 예시 복사
74*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[75], idx1, idx2, num1, num2;
	for (int i = 0; i < 75; i++) scanf("%d", &arr[i]);
	scanf("%d %d", &num1, &num2);
	for (int i = 0; i < 75; i++) {
		if (arr[i] == num1) idx1 = i;
		if (arr[i] == num2) idx2 = i;
	}
	printf("%d", idx2 - idx1);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 주소 계산하기 2 ]

3차원배열 short i[l][n][m]가 있을 때,
특정 번지 k를 나타내는 인덱스(z, x, y)를 계산하는 프로그램을 작성하시오.

배열 i의 시작주소를 0번지로 변환하고, 특정 번지는 상대주소 값으로 계산한다.

인덱스 l, x와 y는 각각 0 이상이며, 이 때 가능한 인덱스 쌍 중 z는 최대이고 y값은 최소인 경우를 출력하면 된다.

입력 설명
l, n, m, k가 공백으로 구분되어 입력된다.
(0 < l, n, m <= 10 ; k는 2의 배수)

출력 설명
k 번지에 접근하기 위한 인덱스 쌍을 출력하시오.
입력 예시 복사
3 2 3 14
출력 예시 복사
1 0 1*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int l, n, m, k;
	scanf("%d %d %d %d", &l, &n, &m, &k);
	k /= 2;
	printf("%d %d %d", k / (n * m), (k % (n * m)) / m, (k % (n * m)) % m);
	return 0;
}
#endif

#if 0
/*문제 설명

[ 큰 수 시리즈, 뭐가 더 큰가? ]


int나 long long으로도 저장할 수 없는 큰 수 N, M이 주어진다.

둘 중에 더 큰 수를 찾아 출력하시오.

입력 설명
첫째 줄에 N이 주어진다.
둘째 줄에 M이 주어진다.
(0 <= N, M < 10^100)
출력 설명
두 수 중 더 큰 수를 출력하시오.
입력 예시 복사
1126889537266375008
2414875239475421895
출력 예시 복사
2414875239475421895*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int num = 0, len;
	char N[101], M[101];
	scanf("%s", N);
	scanf("%s", M);
	if (strlen(N) > strlen(M)) {
		printf("%s", N);
	}
	else if (strlen(N) < strlen(M)) {
		printf("%s", M);
	}
	else {
		for (int i = 0; i < strlen(N); i++) {
			if (N[i] > M[i]) {
				printf("%s", N);
				break;
			}
			else if (N[i] < M[i]) {
				printf("%s", M);
				break;
			}
		}
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[적기 의세모]

모세의 기적과 반대로, 이번에는 비트를 반으로 나눠 합친다.
unsigned char 범위의 정수 data와 0 ~ 8 사이의 정수 n이 입력된다.

data의 상위 4비트는 오른쪽으로 n비트 쉬프트하고,
data의 하위 4비트는 왼쪽으로 n비트 쉬프트하여
겹친 수를 출력하시오. (겹친다는 건 1이 우선순위를 갖는다는 의미이다.)
입력 설명
unsigned char 범위의 정수 data와 0 ~ 8 사이의 정수 n이 공백으로 구분되어 입력된다.

출력 설명
설명과 같은 연산을 수행한 결과를 출력하시오.

입력 예시 복사
202 4
출력 예시 복사
172*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data;
	int n, num1, num2;
	scanf("%hhu %d", &data, &n);
	num1 = (data & 0xF0) >> n;
	num2 = ((data & 0x0F) << n) & 0xFF;
	printf("%d", num1 | num2);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 3차원 배열의 마주보는 면의 평균 비교하기 ]

3x3x3 크기의 큐브 형태로 3차원 배열이 주어진다.
3차원 배열의 6개의 면에 대해 각 면의 평균 값을 구하고,
마주보는 면끼리 평균 값이 같은 쌍의 개수를 출력하시오.
입력 설명
3x3x3 크기의 3차원 배열의 각 요소가 공백으로 구분되어 입력된다.

출력 설명
3차원 배열의 6면에 대한 평균을 비교하여, 값이 같은 쌍의 개수를 출력한다.

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
1*/
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
[큰 비트 연산]

기존의 비트 연산은 한 자료형 내에서 이루어지며,
1, 2, 4, 8바이트 단위로만 비트 쉬프트 연산이 가능하다.

10바이트 배열에 저장된 모든 비트를 오른쪽으로 쉬프트 연산을 할 수 있도록 구현하려고 한다.
이때, 각 바이트간 비트 이동이 연속되어야 한다.

예를 들어,  2바이트 10101010 11110000를 오른쪽으로 2비트 쉬프트하면
00101010 10111100이 된다. (좌측 새로 생기는 비트는 0으로 채운다.)
입력 설명
첫째 줄에 10바이트에 저장할 정수(0~255) 10개가 공백으로 구분되어 입력된다.
둘째 줄에 오른쪽으로 몇 비트 쉬프트할 지 입력된다. 이 값은 0 이상 80 미만이다.
출력 설명
쉬프트 연산을 한 결과를 10진 정수로 출력한다.

입력 예시 복사
1 2 3 4 5 6 7 8 9 10
9
출력 예시 복사
0 0 129 1 130 2 131 3 132 4*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	unsigned char arr[10];
	for (int i = 0; i < 10; i++) scanf("%hhu", &arr[i]);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 9; j > 0; j--) {
			arr[j] = (arr[j] >> 1) | (arr[j - 1] << 7);
		}
		arr[0] >>= 1;
	}
	for (int i = 0; i < 10; i++) printf("%hhu ", arr[i]);
	return 0;
}
#endif

#if 0
/*문제 설명
[아 신이난다! 아 재미난다! 아 더 게임 오브 데스!! 2]

더 게임 오브 데스라는 게임의 규칙은 다음과 같다.

인트로 구호 마지막의 데'쓰'와 동시에 참가자들은 아무나 손가락으로 가리킨다.
이후 술래가 아무 숫자를 부르면 주최자의 손가락부터 시작되어 가리켜진 사람에게 넘어가면서
숫자를 하나씩 카운트하며 이 과정이 계속 반복된다.
술래가 말한 숫자까지 카운트했을 때 지목당한 사람이 당첨이다.

더 게임 오브 데스라는 게임을 하다,
평소 특히 술을 맥이고 싶던 사람이 있던 김아무개는
손가락으로 모두 지목을 하면 재빠르게 목표의 데스를 부르는 수를 계산하고자 한다.
다만 그는 머리가 나빠, 박자는 생명을 듣기 십상이므로, 프로그램을 만들어 도와주자.

입력 설명
첫째 줄에 자연수 n이 입력된다. n은 게임에 참가 중인 사람의 수다. (2 <= n < 50)
둘째 줄에 n개의 수 k_i가 입력된다.
k_i는 i번째 사람이 지목한 사람을 나타낸다. (1 <= k_i <= n, 1 <= i <= n)
셋째 줄에 자연수 a와 b가 입력된다. a는 술래이며, b는 술래의 목표이다.

출력 설명
목표에 도달하기 위한 가장 작은 수를 출력하시오.
단, 어떤 수를 불러도 목표에 도달할 수 없다면, 0을 출력하시오.

입력 예시 복사
5
2 5 4 1 3
1 3
출력 예시 복사
3*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, k[50], a, b, cnt = 0, p[50] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &k[i]);
	scanf("%d %d", &a, &b);
	for (int i = 0; i < n; i++) {
		p[a]++;
		a = k[a - 1];
		cnt++;
		if (a == b) break;
		if (p[a]) {
			cnt = 0;
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

