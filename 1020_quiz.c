
#if 0
/*문제 설명
[ 해밍 거리 구하기 ]


unsinged int x, y를 입력 받아,
x와 y의 해밍 거리를 계산하는 프로그램을 작성하시오.

해밍 거리(Hamming distance)는 두 정수의 비트 표현에서, LSB(0번 비트)를 기준으로 서로 다른 비트의 개수를 의미한다.

예를 들어,
x = 73 (1001001), y = 23 (11101) 일 경우, 해밍 거리는 3이다.
입력 설명
unsigned int x, y를 공백으로 구분해 입력한다.

출력 설명
계산한 x와 y의 해밍 거리를 출력한다.

입력 예시 복사
1 4
출력 예시 복사
2*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int x, y;
	int cnt = 0;
	scanf("%u %u", &x, &y);
	for (int i = 0; i < 32; i++) {
		if ((x >> i & 1) != (y >> i & 1)) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 특정 비트 구간의 합 계산하기 ]

unsigned int n과 두 자연수 p, q를 입력받아,
숫자 n의 p번 비트부터 q번 비트까지의 합을 출력하는 프로그램을 작성하시오.
입력 설명
정수 n과 음이아닌 정수 p, q(0 <= p < q < 32)를 공백으로 구분해 입력한다.
출력 설명
n의 p번 비트부터 q번 비트까지의 1의 개수를 출력한다.
입력 예시 복사
29 1 3
출력 예시 복사
2*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n, p, q;
	int cnt = 0;
	scanf("%u %u %u", &n, &p, &q);
	for (int i = p; i <= q; i++) {
		if (n >> i & 1) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 모서리 행렬 만들기 ]

정수 N을 입력받아,
NxN 크기의 모서리 행렬을 출력하는 프로그램을 작성하시오.

모서리 행렬이란, 행렬의 좌상단 끝 점 (0, 0)에서 최댓값을 가지고,
시계방향으로 돌아가며 1씩 작아지는 행렬이다.
입력 설명
정수 N을 입력한다. N은 1이상 20이하 정수이다.
출력 설명
모서리 행렬을 출력한다.
단, 출력 시 %3d를 사용한다.
입력 예시 복사
7
출력 예시 복사
 49  48  47  46  45  44  43
 26  25  24  23  22  21  42
 27  10   9   8   7  20  41
 28  11   2   1   6  19  40
 29  12   3   4   5  18  39
 30  13  14  15  16  17  38
 31  32  33  34  35  36  37*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, arr[20][20] = { 0 }, x = 0, y = 0, flag = 0, idx = 0, n2, h = 0;
	scanf("%d", &n);
	n2 = n;
	for (int i = 0; i < n * n; i++) {
		if (flag % 4 == 0) {
			arr[x][y] = (n * n) - i;
			idx++;
			if (y + h == n - 1) {
				idx++;
				flag++;
				x++;
				continue;
			}
			y++;
		}
		else if (flag % 4 == 1) {
			arr[x][y] = (n * n) - i;
			idx++;
			if (x + h == n - 1) {
				idx++;
				flag++;
				y--;
				continue;
			}
			x++;
		}
		else if (flag % 4 == 2) {
			arr[x][y] = (n * n) - i;
			idx++;
			if (y - h == 0) {
				idx++;
				flag++;
				x--;
				h++;
				continue;
			}
			y--;
		}
		else if (flag % 4 == 3) {
			arr[x][y] = (n * n) - i;
			idx++;
			if (x - h == 0) {
				idx++;
				flag++;
				y++;
				continue;
			}
			x--;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 특정 구간 비트 1로 만들기 ]

unsigned int x와 자연수 a, b (a < b)를 입력 받아,
x의 a번 비트부터 b번 비트까지의 비트를 1로 만드는 프로그램을 작성하시오.

단, 정수 x의 LSB (Least Significant Bit)는 0번 비트이다.
입력 설명
정수 x와 자연수 a, b를 공백으로 구분해 입력한다.
출력 설명
정수 x의 a번 비트부터 b번 비트까지 모두 1로 만든 값을 출력한다.
입력 예시 복사
58 2 5
출력 예시 복사
62*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int x;
	int a, b;
	scanf("%u %d %d", &x, &a, &b);
	for (int i = a; i <= b; i++) {
		x |= 1 << i;
	}
	printf("%u", x);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 모자이크 만들기 ]

하얀 도화지에 색종이 조각을 붙인다.
색종이는 모두 직사각형이지만, 크기가 각기 다르다.
도화지에 하나씩 붙이고 나서, 최종 결과를 출력하는 프로그램을 작성하시오.

도화지의 크기는 10x10 이다.
입력 설명
첫째 줄에 붙인 색종이의 수 N을 입력한다.
둘째 줄 부터 N+1번째 줄까지 숫자를 다섯 개씩 입력한다.

첫번째 수는 색종이의 색을 나타낸다.
두번째 수와 세번째 수는 색종이를 붙이는 좌표를 의미한다.
좌표는 색종이의 좌상단 모서리를 기준으로 한다.
네번째 수와 다섯번째 수는 색종이의 크기이다. 각각 가로, 세로의 길이이다.
출력 설명
색종이가 붙지 않은 바탕은 0으로, 색종이가 붙은 곳은 색종이의 색으로 출력한다.

단, 색종이가 겹쳐서 붙은 경우, 나중에 붙인 색종이의 색을 출력한다.
입력 예시 복사
2
1 0 0 2 2
2 1 0 3 2
3 2 7 2 2
출력 예시 복사
1 1 0 0 0 0 0 0 0 0
2 2 2 0 0 0 0 0 0 0
2 2 2 0 0 0 0 3 3 0
0 0 0 0 0 0 0 3 3 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
Hint
1 0 0 2 2에 의해
1 1 0 ...
1 1 0 ...
0 0 0 ... 이 되었지만
2 1 0 3 2에 의해 덧붙여져 예시 출력처럼 되었다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10][10] = { 0 }, N, n1, n2, n3, n4, n5;
	scanf("%d", &N);
	for (int i = 0; i <= N; i++) {
		scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
		for (int j = n2; j < n2 + n5; j++) {
			for (int l = n3; l < n3 + n4; l++) {
				arr[j][l] = n1;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 자유로운 접근 ]

10 바이트 크기의 data와 p를 입력받아,
data의 p번째 바이트부터 뒤 2바이트를 읽어서 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 1바이트씩 공백으로 구분하여 총 10바이트의 data를 입력한다.
단, 입력 data에 음수는 없다.

둘째 줄에 p를 입력한다. (1 <= p <= 9)
출력 설명
data의 p번째 바이트부터 뒤 2바이트를 읽어서 출력한다.
입력 예시 복사
5 4 3 2 1 1 2 3 4 5
4
출력 예시 복사
258
Hint
short 는 2byte*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[10];
	int p;
	for (int i = 0; i < 10; i++) scanf("%hhu", &data[i]);
	scanf("%d", &p);
	unsigned short int* q = (unsigned short int*)((unsigned char*)&data + (p - 1));
	printf("%d", *q);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 빅모세 ]

12바이트를 입력받아 배열에 저장한다.
6번째 바이트와 7번째 바이트 사이에 빅모세가 있다.
빅모세의 영향력은 좌우 6바이트씩 총 12바이트이다.

정수 n(0 <= n < 48)을 입력받아, 빅모세를 기준으로 좌우로 n비트씩 밀어낸다.
빅모세의 영향력에 의해 배열의 범위 밖으로 밀려난 비트는 사라진다.
입력 설명
첫째 줄에 1바이트 정수 12개를 공백으로 구분하여 입력한다.
둘째 줄에 빅모세가 밀어낼 비트수 n을 입력한다.
n은 0 이상 48 미만이다.
출력 설명
빅모세가 밀어낸 결과를 바이트마다 공백으로 구분하여 10진수로 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 10 11 12
4
출력 예시 복사
16 32 48 64 80 96 0 112 128 144 160 176*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[12];
	int n;
	for (int i = 0; i < 12; i++) scanf("%hhu", &arr[i]);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			arr[j] = (arr[j] << 1) | (arr[j + 1] >> 7);
		}
		arr[5] <<= 1;
		for (int j = 11; j > 6; j--) {
			arr[j] = (arr[j] >> 1) | (arr[j - 1] << 7);
		}
		arr[6] >>= 1;
	}
	for (int i = 0; i < 12; i++) printf("%hhu ", arr[i]);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 3의 배수인가 ]

양의 정수 N을 입력 받아,
N의 자릿수와 N이 3의 배수인지 여부를 판단하는 프로그램을 작성하시오.

입력 설명
첫째 줄에 N을 입력한다.
단, 1 <= N < 10^100
출력 설명
N이 3의 배수면 1을 출력하고 3의 배수가 아니면 0을 출력한다.
공백없이 이어서 N의 자릿수를 출력한다.
입력 예시 복사
33333333333333333333333333333333333333333333
출력 예시 복사
144
Hint
어떤 수의 각 자릿수의 값을 더한 결과가 3의 배수면, 그 수는 3의 배수이다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[101];
	int flag = 0;
	unsigned long long sum = 0;
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		sum += arr[i] - '0';
	}
	if (sum % 3 == 0) flag = 1;
	printf("%d%d", flag, strlen(arr));
	return 0;
}
#endif

#if 0
/*문제 설명
[ RGB2GRAY ]

RGB 이미지의 각 픽셀은 빨간색(R), 녹색(G), 파란색(B)의 세 가지 채널로 구성되어 있으며,
각 채널의 픽셀 값은 0부터 255까지의 정수로 표현된다.

RGB 이미지의 가로 길이 N과 세로 길이 M, 그리고 각 채널에 대한 픽셀 값을 입력받아,
이미지의 모든 픽셀에 대해 R, G, B 값의 평균을 구하여 회색조 이미지를 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 N과 M을 입력한다. (1 <= N, M < 100)
둘째 줄에 N개씩 숫자를 3*M줄 입력한다.

그중 첫 M줄은 각 픽셀의 R 성분이고, 이어서 G, B 성분을 각각 M줄 입력한다.
각 숫자는 0~255 사이의 값이다.
출력 설명
회색조 이미지를 배열로 출력한다.
단, 평균은 0~255 사이의 정수이고, 소수점 아래는 모두 버린다.
입력 예시 복사
5 2
0 0 255 255 0
0 245 255 255 245
255 255 255 255 255
255 255 255 255 255
127 127 255 255 127
127 127 127 127 127
출력 예시 복사
127 127 255 255 127
127 209 212 212 209*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N, M, RGB[4][100][100];
	scanf("%d %d", &N, &M);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < M; j++) {
			for (int l = 0; l < N; l++) scanf("%d", &RGB[i][j][l]);
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			RGB[3][i][j] = (RGB[0][i][j] + RGB[1][i][j] + RGB[2][i][j]) / 3;
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) printf("%d ", RGB[3][i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 큰 수의 덧셈 ]

최대 100자리 양수 두 개를 더할 수 있는 프로그램을 작성하시오.
입력 설명
최대 100자리 양수 두 개를 줄바꿈으로 구분해 입력한다.
출력 설명
입력한 양수 두개를 합한 결과를 출력하시오.
입력 예시 복사
1234567891011121314151617181920
1357924680123456789
출력 예시 복사
1234567891012479238831740638709
Hint
100자리 + 100자리의 결과는 101자리가 될 수 있다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char n1[101], n2[101];
	int cn1[100] = { 0 }, cn2[100] = { 0 }, sum[101] = { 0 }, len, flag = 0;
	scanf("%s\n%s", n1, n2);
	len = strlen(n1);
	for (int i = 0; i < len; i++) {
		cn1[i] = n1[len - 1 - i] - '0';
	}
	len = strlen(n2);
	for (int i = 0; i < len; i++) {
		cn2[i] = n2[len - 1 - i] - '0';
	}
	for (int i = 0; i < 100; i++) {
		sum[i] += cn1[i] + cn2[i];
		sum[i + 1] += sum[i] / 10;
		sum[i] %= 10;
	}

	for (int i = 100; i >= 0; i--) {
		if (sum[i]) flag++;
		if (flag) printf("%d", sum[i]);
	}
	if (flag == 0) printf("0");
	return 0;
}
#endif






#if 0
/*[ 해밍 거리 구하기 ]
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int x, y, n;
	int cnt = 0;
	scanf("%u %u", &x, &y);
	n = x ^ y;
	for (int i = 0; i < 32; i++) {
		if (n >> i & 1)cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*[ 특정 비트 구간의 합 계산하기 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, p, q, cnt = 0;
	scanf("%d %d %d", &n, &p, &q);
	for (int i = p; i <= q; i++) {
		if (n >> i & 1) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*[ 특정 구간 비트 1로 만들기 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int x;
	int a, b;
	scanf("%u %d %d", &x, &a, &b);
	for (int i = a; i <= b; i++) {
		x |= 1 << i;
	}
	printf("%u", x);
	return 0;
}
#endif

#if 0
/*큰 수 빼기*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[101], b[101], bnum[101], snum[101];
	int num1[100] = { 0 }, num2[100] = { 0 }, sub[100] = { 0 }, flag = 0, flag2;
	scanf("%s\n%s", a, b);
	if (strlen(a) > strlen(b)) {
		strcpy(bnum, a);
		strcpy(snum, b);
	}
	else if (strlen(b) > strlen(a)) {
		strcpy(bnum, b);
		strcpy(snum, a);
	}
	else {
		flag2 = -1;
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] > b[i]) {
				flag2 = 0;
				break;
			}
			else if (a[i] < b[i]) {
				flag2 = 1;
				break;
			}
		}
		if (flag2 == 0) {
			strcpy(bnum, a);
			strcpy(snum, b);
		}
		else if (flag2 == 1) {
			strcpy(bnum, b);
			strcpy(snum, a);
		}
		else if (flag2 == -1) {
			strcpy(bnum, a);
			strcpy(snum, b);
		}
	}
	for (int i = 0; i < strlen(bnum); i++) {
		num1[i] = bnum[strlen(bnum) - i - 1] - '0';
	}
	for (int i = 0; i < strlen(snum); i++) {
		num2[i] = snum[strlen(snum) - i - 1] - '0';
	}
	for (int i = 0; i < 100; i++) {
		sub[i] = num1[i] - num2[i];
		if (sub[i] < 0) {
			sub[i] += 10;
			for (int j = i + 1; j < 100; j++) {
				if (num1[j] == 0) num1[j] = 9;
				else if (num1[j] > 0) {
					num1[j]--;
					break;
				}
			}
		}
	}
	for (int i = 99; i >= 0; i--) {
		if (sub[i]) flag++;
		if (flag) printf("%d", sub[i]);
	}
	return 0;
}
#endif

#if 0
/*[ 자유로운 접근 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[10];
	int p;
	for (int i = 0; i < 10; i++) scanf("%hhu", &data[i]);
	scanf("%d", &p);
	unsigned short* q = (unsigned short*)&data[p - 1];
	printf("%d", *q);
	return 0;
}
#endif

#if 0
/*[ 빅모세 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[12];
	int n;
	for (int i = 0; i < 12; i++) scanf("%hhu", &arr[i]);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			arr[j] = (arr[j] << 1) | (arr[j + 1] >> 7);
		}
		arr[5] <<= 1;
		for (int j = 11; j > 6; j--) {
			arr[j] = (arr[j] >> 1) | (arr[j - 1] << 7);
		}
		arr[6] >>= 1;
	}
	for (int i = 0; i < 12; i++) printf("%hhu ", arr[i]);
	return 0;
}
#endif

#if 0
/*[ 3의 배수인가 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char N[100];
	int sum = 0, flag = 0;
	scanf("%s", N);
	for (int i = 0; i < strlen(N); i++) sum += N[i] - '0';
	if (sum % 3 == 0) flag = 1;
	printf("%d%d", flag, strlen(N));
	return 0;
}
#endif

#if 0
/*[ RGB2GRAY ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int RGB[4][100][100] = { 0 }, N, M;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) scanf("%d", &RGB[i][j][k]);
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			RGB[3][i][j] = RGB[0][i][j] + RGB[1][i][j] + RGB[2][i][j];
			RGB[3][i][j] /= 3;
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", RGB[3][i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*[ 큰 수의 덧셈 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[101], b[101];
	int a2[100] = { 0 }, b2[100] = { 0 }, sum[101] = { 0 }, flag = 0;
	scanf("%s\n%s", a, b);
	for (int i = 0; i < strlen(a); i++) a2[i] = a[strlen(a) - i - 1] - '0';
	for (int i = 0; i < strlen(b); i++) b2[i] = b[strlen(b) - i - 1] - '0';
	for (int i = 0; i < 100; i++) {
		sum[i] += a2[i] + b2[i];
		if (sum[i] > 9) {
			sum[i + 1]++;
			sum[i] -= 10;
		}
	}
	for (int i = 100; i >= 0; i--) {
		if (sum[i]) flag++;
		if (flag) printf("%d", sum[i]);
		else if (i == 0) printf("0");
	}
	return 0;
}
#endif

#if 0
/*[ 모서리 행렬 만들기 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N, arr[20][20] = { 0 }, flag = 0, x = 0, y = 0;
	scanf("%d", &N);
	for (int i = N * N; i > 0; i--) {
		if (flag == 0) {
			arr[x][y] = i;
			if ((y + 1) >= N || arr[x][y + 1] > 0) {
				flag++;
				x++;
				continue;
			}
			y++;
		}
		else if (flag == 1) {
			arr[x][y] = i;
			if ((x + 1) >= N || arr[x + 1][y] > 0) {
				flag++;
				y--;
				continue;
			}
			x++;
		}
		else if (flag == 2) {
			arr[x][y] = i;
			if ((y - 1) < 0 || arr[x][y - 1] > 0) {
				flag++;
				x--;
				continue;
			}
			y--;
		}
		else if (flag == 3) {
			arr[x][y] = i;
			if ((x - 1) < 0 || arr[x - 1][y] > 0) {
				flag -= 3;
				y++;
				continue;
			}
			x--;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) printf("%3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*이팽달*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[20][20] = { 0 }, x = 0, y = 0, flag = 0, N;
	scanf("%d", &N);
	for (int i = N * N; i > 0; i--) {
		if (flag == 0) {
			arr[x][y] = i;
			x++;
			if (x == N || arr[x][y] > 0) {
				x--;
				y++;
				flag++;
			}
		}
		else if (flag == 1) {
			arr[x][y] = i;
			y++;
			if (y == N || arr[x][y] > 0) {
				y--;
				x--;
				flag++;
			}
		}
		else if (flag == 2) {
			arr[x][y] = i;
			x--;
			if (x < 0 || arr[x][y] > 0) {
				x++;
				y--;
				flag++;
			}
		}
		else if (flag == 3) {
			arr[x][y] = i;
			y--;
			if (y < 0 || arr[x][y] > 0) {
				y++;
				x++;
				flag = 0;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) printf("%3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*12바이트 해밍거리*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char x[12], y[12], n[12];
	int cnt = 0;
	for (int i = 0; i < 12; i++) scanf("%hhu", &x[i]);
	for (int i = 0; i < 12; i++) scanf("%hhu", &y[i]);
	for (int i = 0; i < 12; i++) n[i] = x[i] ^ y[i];
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 8; j++) {
			if (n[i] >> j & 1)cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*모세모세*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char a[20], m1[20] = { 0 }, m2[20] = { 0 };
	int n;
	for (int i = 0; i < 20; i++) {
		scanf("%hhu", &a[i]);
		if (i <= 10) m1[i] = a[i];
		if (i >= 11) m2[i] = a[i];
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			m1[j] = (m1[j] << 1) | (m1[j + 1] >> 7);
		}
		m1[4] <<= 1;
		for (int j = 10; j > 5; j--) {
			m1[j] = (m1[j] >> 1) | (m1[j - 1] << 7);
		}
		m1[5] >>= 1;

		for (int j = 11; j < 14; j++) {
			m2[j] = (m2[j] << 1) | (m2[j + 1] >> 7);
		}
		m2[14] <<= 1;
		for (int j = 19; j > 15; j--) {
			m2[j] = (m2[j] >> 1) | (m2[j - 1] << 7);
		}
		m2[15] >>= 1;
	}
	for (int i = 0; i < 20; i++) {
		if (i >= 5 && i <= 14) {
			printf("%hhu ", m1[i] | m2[i]);
		}
		else if (i < 5) printf("%hhu ", m1[i]);
		else if (i > 14) printf("%hhu ", m2[i]);
	}
	return 0;
}
#endif

#if 0
/*어디모세*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char a[12];
	int s, n;
	for (int i = 0; i < 12; i++) scanf("%hhu", &a[i]);
	scanf("%d %d", &s, &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < s; j++) {
			a[j] = (a[j] << 1) | (a[j + 1] >> 7);
		}
		a[s] <<= 1;
		for (int j = 11; j > s + 1; j--) {
			a[j] = (a[j] >> 1) | (a[j - 1] << 7);
		}
		a[s + 1] >>= 1;
	}
	for (int i = 0; i < 12; i++) printf("%hhu ", a[i]);
	return 0;
}
#endif

#if 0
/*비트모세*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[10], m1[10] = { 0 }, m2[10] = { 0 };
	int a, n;
	for (int i = 0; i < 10; i++) scanf("%hhu", &arr[i]);
	scanf("%d %d", &a, &n);
	for (int i = 0; i <= (a - 1) / 8; i++) {
		m1[i] = arr[i];
	}
	for (int i = (a - 1) / 8; i < 10; i++) {
		m2[i] = arr[i];
	}
	m1[(a - 1) / 8] &= 255 << (8 - (a % 8));
	m2[(a - 1) / 8] &= 255 >> (a % 8);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 9; j++) {
			m1[j] = (m1[j] << 1) | (m1[j + 1] >> 7);
		}
		m1[9] <<= 1;
		for (int j = 9; j > 0; j--) {
			m2[j] = (m2[j] >> 1) | (m2[j - 1] << 7);
		}
		m2[0] >>= 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%hhu ", m1[i] | m2[i]);
	}
	return 0;
}
#endif

#if 0
/*뒤틀린달팽이*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[20][20] = { 0 }, x = 0, y = 0, n, m, flag = 0;
	scanf("%d %d", &n, &m);
	for (int i = n * m; i > 0; i--) {
		if (flag == 0) {
			arr[x][y] = i;
			y++;
			if (y == m || arr[x][y] > 0) {
				y--;
				x++;
				flag++;
			}
		}
		else if (flag == 1) {
			arr[x][y] = i;
			x++;
			if (x == n || arr[x][y] > 0) {
				x--;
				y--;
				flag++;
			}
		}
		else if (flag == 2) {
			arr[x][y] = i;
			y--;
			if (y < 0 || arr[x][y] > 0) {
				y++;
				x--;
				flag++;
			}
		}
		else if (flag == 3) {
			arr[x][y] = i;
			x--;
			if (x < 0 || arr[x][y] > 0) {
				x++;
				y++;
				flag = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) printf("%3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*다이아몬드 별*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < 2 * n; i++) {
		for (int j = 0; (n - i) >= 0 ? j < n - i : j < -1 * (n - i); j++) printf(" ");
		for (int j = 0; i <= n ? j < (2 * i) - 1 : j < ((n - (i % n)) * 2) - 1; j++) printf("*");
		for (int j = 0; (n - i) >= 0 ? j < n - i : j < -1 * (n - i); j++) printf(" ");
		for (int j = 0; (n - i) >= 0 ? j < n - i : j < -1 * (n - i); j++) printf(" ");
		for (int j = 0; i <= n ? j < (2 * i) - 1 : j < ((n - (i % n)) * 2) - 1; j++) printf("*");
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*2563 색종이*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[100][100] = { 0 }, n, num1, num2, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &num1, &num2);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				arr[num1 + j][num2 + k]++;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j]) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
#endif

#if 0
/*1477 : [기초-배열연습] 2차원 배열 빗금 채우기 3-2  백준 XXXXX*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m, arr[101][101] = { 0 }, x = 0, y = 0, flag = 0, x2 = 0, y2 = 0;
	scanf("%d %d", &n, &m);
	y2 = m - 1;
	for (int i = 1; i <= n * m; i++) {
		arr[x][y] = i;
		if (flag == 0) {
			y = x + 1;
			if (y >= m) {
				x2++;
				x = x2;
				y = y2;
				if (n < m) y2--;
			}
			else {
				x = 0;
			}
			if (m == 1) y = 0;
			if (n == 1) x = 0;
			flag = 1;
		}
		else if (flag = 1) {
			y--;
			x++;
			if (x >= n) {
				x2++;
				x = x2;
				y = y2;
				flag = 1;
				continue;
			}
			if (y == 0) flag = 0;
			if (m == 1) y = 0;
			if (n == 1) x = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*큰수나누기*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char a[101];
	int n, ans[100] = { 0 }, num = 0, flag = 0;
	scanf("%s\n%d", a, &n);
	for (int i = 0; i < strlen(a); i++) {
		num *= 10;
		num += a[i] - '0';
		ans[i] = num / n;
		num -= (num / n) * n;
	}
	for (int i = 0; i < strlen(a); i++) {
		if (ans[i]) flag++;
		if (flag) printf("%d", ans[i]);
	}
	return 0;
}
#endif

#if 0
/*큰수곱하기*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	unsigned char a[101];
	int n, a2[100] = { 0 }, ans[121] = { 0 }, flag = 0, num;
	scanf("%s %d", a, &n);
	for (int i = 0; i < strlen(a); i++) {
		a2[i] = a[strlen(a) - i - 1] - '0';
	}
	for (int i = 0; i < 100; i++) {
		ans[i] += a2[i] * n;
		if (ans[i] > 9) {
			num = ans[i] / 10;
			ans[i] %= 10;
			for (int j = 0; num > 0; j++) {
				ans[i + j + 1] += num % 10;
				num /= 10;
			}
		}
	}
	for (int i = 120; i >= 0; i--) {
		if (ans[i]) flag++;
		if (flag) printf("%d", ans[i]);
	}
	return 0;
}
#endif

#if 0
/*주소*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[10];
	int p;
	for (int i = 0; i < 10; i++) scanf("%hhu", &data[i]);
	scanf("%d", &p);
	unsigned short* q = &*(data + (p - 1));  // *(data + (p - 1)) == data[p - 1]
	printf("%d", *q);
	return 0;
}
#endif

#if 0
/*진법변환1*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[101];
	int num, n = 1;
	unsigned int ans = 0;
	scanf("%s %d", arr, &num);
	for (int i = strlen(arr) - 1; i >= 0; i--) {
		ans += (arr[i] - '0') * n;
		n *= num;
	}
	printf("%u", ans);
	return 0;
}
#endif

#if 0
/*빗금*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[100][100] = { 0 }, n, m, x = 0, y = 0, flag = 0, x2 = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n * m; i++) {

		arr[x][y] = i;
		if (y == 0) {
			y = x + 1;
			x = x2;
			if (y >= m) {
				y = m - 1;
			}
			if (y == m - 1) x2++;
			flag = 1;
		}
		else if (x == n - 1) {
			y = x + 1;
			x = x2;
			if (y >= m) {
				y = m - 1;
				x2++;
			}
			if (y == m - 1) x2++;
			flag = 1;
		}
		else if (flag == 1) {
			y--;
			x++;
			if (x == n - 1 | y == 0) {
				flag = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) printf("%3d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*넥스트레벨*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[20][20] = { 0 }, n, x, y, flag = 0;
	scanf("%d", &n);
	x = 0;
	y = n - 1;
	for (int i = 1; i <= n * n; i++) {
		if (flag == 0) {
			a[x][y] = i;
			y--;
			if (y < 0 || a[x][y] > 0) {
				y++;
				x++;
				flag++;
			}
		}
		else if (flag == 1) {
			a[x][y] = i;
			x++;
			if (x >= n) {
				x--;
				y++;
				flag++;
			}
		}
		else if (flag == 2) {
			a[x][y] = i;
			x--;
			if (a[x][y]) {
				x++;
				y++;
				flag++;
			}
		}
		else if (flag == 3) {
			a[x][y] = i;
			y++;
			if (y >= n) {
				y--;
				x++;
				flag = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) printf("%3d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*파형읽기*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char arr[81];
	int n, num;
	scanf("%d", &n);
	for (int i = 0; i < 8 * n; i++) {
		scanf("%c", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		num = 0;
		for (int j = 0; j < 8; j++) {
			if (arr[(i * 8) + j] == '-') { 
				num |= 1 << (7 - j);
			}
		}
		printf("%d ", num);
	}
	return 0;
}
#endif

#if 0
/*정사각형지그재그*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[100][100] = { 0 }, n, x = 0, y = 0, flag = 0, x2 = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n * n; i++) {
		a[x][y] = i;
		if (flag == 0) {
			y = x + 1;
			if (y >= n) {
				y = n - 1;
				x2++;
			}
			x = x2;
			flag++;
		}
		else if (flag == 1) {
			y--;
			x++;
			if (y == 0 || x >= n - 1) {
				flag = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) printf("%3d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*정사각형지그재그*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[100][100] = { 0 }, n, m, x = 0, y = 0, flag = 0, x2 = 0, y2 = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n * m; i++) {
		a[x][y] = i;
		if (flag == 0) {
			y = x + 1 + y2;
			if (y >= m) {
				y = m - 1;
				x2++;
			}
			x = x2;
			if (n != 1) {
				flag++;
			}
			else if (n == 1) {
				y2++;
			}
			if (m == 1) {
				flag--;
			}
		}
		else if (flag == 1) {
			y--;
			x++;
			if (y > 0 && x >= n - 1) {
				y2++;
			}
			if (y == 0 || x >= n - 1) {
				flag = 0;
			}
		}
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
#endif

#if 0
/*3차팽*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[20][20][20] = { 0 }, n, m, k, flag = 0, flag2 = 0, x = 0, y = 0, z = 0;
	scanf("%d %d %d", &n, &m, &k);
	for (int i = n * m * k; i > 0; i--) {
		a[x][y][z] = i;
		if (i % (y * z) == 0) {
			flag2 = (flag2 + 1) % 2;
			flag = 0;
		}
		if (flag2 == 0) {
			if (flag == 0) {
				z++;
				if (z == k || a[x][y][z] > 0) {
					z--;
					y++;
					flag++;
				}
			}
			else if (flag == 1) {
				y++;
				if (y == m || a[x][y][z] > 0) {
					y--;
					z--;
					flag++;
				}
			}
			else if (flag == 2) {
				z--;
				if (z < 0 || a[x][y][z] > 0) {
					z++;
					y--;
					flag++;
				}
			}
			else if (flag == 3) {
				y--;
				if (z == k || a[x][y][z] > 0) {
					y++;
					z++;
					flag = 0;
				}
			}
		}
		else if (flag2 == 1) {
			if (flag == 0) {
				z++;
				if (z == k || a[x][y][z] > 0) {
					z--;
					y++;
					flag++;
				}
			}
			else if (flag == 1) {
				y++;
				if (y == m || a[x][y][z] > 0) {
					y--;
					z--;
					flag++;
				}
			}
			else if (flag == 2) {
				z--;
				if (z < 0 || a[x][y][z] > 0) {
					z++;
					y--;
					flag++;
				}
			}
			else if (flag == 3) {
				y--;
				if (z == k || a[x][y][z] > 0) {
					y++;
					z++;
					flag = 0;
				}
			}
		}
	}
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

