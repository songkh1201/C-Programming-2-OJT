
#if 0
/*문제 설명
[ ㅈㄱㅈ ]

애플 제품에는 텍스트 대치라는 기능이 있다.
기본 예시로, "ㅈㄱㅈ"을 입력하면 자동으로 "지금 가는 중!"으로 변환된다.

이와 같이, INU가 입력되면 Incheon National University로 변환하는 프로그램을 작성하시오.
입력 설명
100자 내의 문자열을 입력한다.
영문자와 숫자, 특수문자, 공백을 포함한다.
출력 설명
텍스트 내의 INU를 Incheon National University로 변환한 문자열을 출력한다.
대소문자를 구분한다.
입력 예시 복사
I am a student at INU.
출력 예시 복사
I am a student at Incheon National University.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s[101];
	gets(s);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == 'I' && s[i + 1] == 'N' && s[i + 2] == 'U') {
			printf("Incheon National University");
			i += 2;
		}
		else printf("%c", s[i]);
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 비트 일부 반전하기 ]

unsigned int n과 두 자연수 p, q를 입력받아,
숫자 n의 p번 비트부터 q번 비트까지 반전하여 출력하는 프로그램을 작성하시오.
입력 설명
정수 n과 음이아닌 정수 p, q(0 <= p <= q < 32)를 공백으로 구분해 입력한다.
출력 설명
n의 p번 비트부터 q번 비트까지 반전된 값을 출력한다.
입력 예시 복사
29 1 3
출력 예시 복사
19*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned int n;
	int p, q;
	scanf("%u %d %d", &n, &p, &q);
	for (int i = p; i <= q; i++) {
		if (n >> i & 1) n &= ~(1 << i);
		else n |= 1 << i;
	}
	printf("%u", n);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 배열 밀어내기 ]

6x6 크기의 unsigned char 2차원 배열을 입력받고,
행렬의 모든 원소를 n칸씩 밀어낸 행렬을 출력하는 프로그램을 작성하시오.

n이 양수이면 오른쪽으로 밀어내고, n이 음수이면 왼쪽으로 밀어낸다.

원소가 열 밖으로 밀려날 경우, 그 다음 행으로 넘어간다.
마지막 행에서 열 밖으로 밀려난 원소는 다시 첫번째 행으로 넘어간다.
입력 설명
0~255 사이의 정수 36개를 공백으로 구분하여 입력한다.
이어서, 정수 n을 입력한다. ( -36 <= n <= 36 )
출력 설명
배열의 모든 원소를 n칸씩 다음 주소로 밀어낸 핼렬을 출력한다.
단, 출력 시 %3d를 사용하며 공백으로 구분한다.
입력 예시 복사
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
3
출력 예시 복사
 34  35  36   1   2   3
  4   5   6   7   8   9
 10  11  12  13  14  15
 16  17  18  19  20  21
 22  23  24  25  26  27
 28  29  30  31  32  33*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[36];
	int n;
	for (int i = 0; i < 36; i++) scanf("%hhu", &arr[i]);
	scanf("%d", &n);
	for (int i = 0; i < 36; i++) {
		int num = i - n;
		if (num < 0) num += 36;
		if (num > 35) num %= 36;
		printf("%3d ", arr[num]);
		if (i % 6 == 5) printf("\n");
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 12의 배수인가? ]

양의 정수 N을 입력 받아,
N이 12의 배수인지 판단하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 N을 입력한다.
단, 1 <= N < 10^100
출력 설명
N이 12의 배수면 1을 출력하고 12의 배수가 아니면 0을 출력한다.
공백 없이 이어서 모든 자릿수의 합을 출력한다.
입력 예시 복사
1126889537266375008
출력 예시 복사
187
Hint
3의 배수이면서 4의 배수면 12의 배수이다.
어떤 정수 p의 끝 두자리가 4의 배수이면 p는 4의 배수이다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	long long sum1 = 0, sum2 = 0;
	char N[101];
	scanf("%s", N);
	for (int i = 0; i < strlen(N); i++) {
		sum1 += N[i] - '0';
	}
	sum2 += (N[strlen(N) - 1] - '0') + ((N[strlen(N) - 2] - '0') * 10);
	if (sum1 % 3 == 0 && sum2 % 4 == 0) printf("1");
	else printf("0");
	printf("%lld", sum1);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 2차원 배열에서 사각형 영역의 합 구하기 ]

8x8 크기 2차원 배열의 시작 주소와, 사각형 영역을 입력 받아,
사각형 영역 내부의 원소들의 합을 반환하는 함수인
int squareAreaArray(int* array, int x1, int y1, int x2, int y2)를 작성하시오.

사각형에서 인자 x1은 위쪽 경계, y1은 왼쪽 경계, x2은 아래쪽 경계, y2은 오른쪽 경계를 의미한다.
사각형 영역 내부는 경계를 포함한다.
단, x1 <= x2이고 y1 <= y2 이다.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int squareAreaArray(int* array, int x1, int y1, int x2, int y2) {

	// ==================== 코드 작성 영역 ====================
	int sum = 0;
	for (int i = x1; i <= x2; i++) {
		for (int j = y1; j <= y2; j++) {
			sum += *(array + (i * 8) + j);
		}
	}
	return sum;
	// ==================== 이하 수정 금지 ====================
}

// 이하 코드 수정 시 부정 행위 처리.
int main() {

	int array[8][8] = { 0, };
	int x1, y1, x2, y2;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

	printf("%d", squareAreaArray(array, x1, y1, x2, y2));

	return 0;
}

#endif

#if 0
/*문제 설명
[ 홀수번 입력 숫자 찾기 ]

n개의 양의 정수를 입력받는다.
입력 받은 정수 중, 홀수번 입력된 정수를 찾아 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 n을 입력한다. n은 1이상 100 미만의 수이다.
둘째 줄에 n개의 unsigned int 정수를 입력한다.
단, 홀수번 입력한 수는 한개이며, 나머지 수는 모두 짝수 번 입력한다.
출력 설명
홀수번 입력한 정수를 출력한다.
입력 예시 복사
13
1 2 2 3 3 3 3 4 5 5 6 6 1
출력 예시 복사
4*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, cnt, num, ans, flag[100] = { 0 };
	unsigned int arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%u", &arr[i]);
	for (int i = 0; i < n; i++) {
		num = arr[i];
		cnt = 0;
		if (flag[i] == 0) {
			for (int j = i; j < n; j++) {
				if (arr[j] == num && flag[j] == 0) {
					cnt++;
					flag[j]++;
				}
			}
		}
		if (cnt % 2) {
			ans = num;
		}
	}
	printf("%d", ans);
	return 0;
}
#endif

#if 0
/*문제 설명
[ 적운 분류기 ]

적운은 수직으로 발달하는 구름으로, 뭉게구름이라고도 부른다.
적운은 그 모양에 따라 세가지로 분류할 수 있다.
가로가 더 길면 편평적운,
세로가 더 길면 봉우리적운,
가로와 세로가 같으면 중간적운으로 분류한다.

구름의 모습을 10x10 크기의 2차원 배열로 입력받아,
적운의 종류를 출력하는 프로그램을 작성하시오.
입력 설명
10 x 10 크기의 배열을 입력한다.
배열의 요소에서 0은 하늘이고 1은 구름이다.

단, 배열에는 하나의 구름만 존재한다.
출력 설명
가로 길이가 더 길면 humilis,
세로 길이가 더 길면 congestus,
구름의 세로 길이와 가로 길이가 같으면 mediocris 를 출력한다.
입력 예시 복사
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 1 1 1 1 0 0 0
0 0 1 1 1 1 1 1 0 0
0 0 1 1 1 1 1 1 1 0
0 0 0 1 1 1 1 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
출력 예시 복사
humilis*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10][10], n1 = 9, n2 = 0, m1 = 0, m2 = 0, idx1 = 0, idx2 = 0, n3 = 9, n4 = 0, idx3 = 0, idx4 = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 10; i++) {
		idx1 = 0;
		idx2 = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[i][j]) {
				idx1 = j;
				break;
			}
		}
		for (int j = 9; j >= 0; j--) {
			if (arr[i][j]) {
				idx2 = j;
				break;
			}
		}
		if (idx1 < n1) n1 = idx1;
		if (idx2 > n2) n2 = idx2;
	}
	for (int i = 0; i < 10; i++) {
		idx3 = 0;
		idx4 = 0;
		for (int j = 0; j < 10; j++) {
			if (arr[j][i]) {
				idx3 = j;
				break;
			}
		}
		for (int j = 9; j >= 0; j--) {
			if (arr[j][i]) {
				idx4 = j;
				break;
			}
		}
		if (idx3 < n3) n3 = idx3;
		if (idx4 > n4) n4 = idx4;
	}
	m1 = n2 - n1 + 1;
	m2 = n4 - n3 + 1;
	if (m1 > m2)printf("humilis");
	else if (m1 < m2)printf("congestus");
	else printf("mediocris");
	return 0;
}
#endif

#if 0
/*문제 설명
[ 엇! 갈려 읽기 ]

unsigned int 배열에 n개의 정수를 입력 받아,
배열의 시작 주소부터 m바이트 뒤에서부터 unsigned int형으로 읽은 결과를 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 정수 n, m 을 입력한다.
둘째 줄에 n개의 unsigned int 정수를 입력한다.
단, 2 <= n < 10 이고 0 <= m < 4 이다.
출력 설명
배열의 시작 주소를 기준으로 m바이트 뒤에서부터 배열의 끝까지 읽은 결과를 공백으로 구분하여 출력한다.
출력하는 정수의 개수는 n-1이다.
입력 예시 복사
4 3
0 1 2 3
출력 예시 복사
256 512 768
Hint
입력된 수는 unsigned int 로 4 byte 크기이다.*/

#endif

#if 0
/*문제 설명
[ 자유로운 배열 ]

20 바이트 크기의 data를 입력받고,
입력받은 자료형 조건에 맞게 data를 읽어서 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 1바이트씩 공백으로 구분하여 총 20바이트의 data를 입력한다.
단, 입력 data에 음수는 없다.

둘째 줄에 5개의 알파벳이 공백으로 구분되어 입력한다.
알파벳은 c, s, i가 입력되며, c는 unsigned char, s는 unsigned short, i는 unsigned int를 의미한다.

만약, data에서 읽고 남은 바이트가 있다면 무시한다.
출력 설명
입력한 알파벳 순서대로 해당 자료형 포인터를 이용하여 data를 앞에서부터 겹치지 않게 읽는다.
단, 읽은 결과를 공백으로 구분하여 10진수로 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
c c s s i
출력 예시 복사
1 2 1027 1541 168364039
Hint
각 자료형의 크기는 다음과 같다.
char 는 1byte
short 는 2byte
int 는 4byte*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[20];
	char n[5];
	int idx = 0;
	for (int i = 0; i < 20; i++) scanf("%hhu", &data[i]);
	for (int i = 0; i < 5; i++) scanf(" %c", &n[i]);
	for (int i = 0; i < 5; i++) {
		if (n[i] == 'c') {
			printf("%hhu ", *(unsigned char*)&*(data + idx));
			idx++;
		}
		else if (n[i] == 's') {
			printf("%hu ", *(unsigned short*)&*(data + idx));
			idx += 2;
		}
		else if (n[i] == 'i') {
			printf("%u ", *(unsigned int*)&*(data + idx));
			idx += 4;
		}
	}
	return 0;
}
#endif

#if 0
/*문제 설명
[ 두명의 모세 ]

12바이트를 입력받아 배열에 저장한다.
3번째 바이트와 4번째 바이트, 9번째 바이트와 10번째 바이트 사이에 두명의 모세가 있다.
정수 n(n < 24)을 입력받아, 각 모세를 기준으로 좌우 3바이트를 n비트씩 밀어낸다.
각 모세에 의해 배열의 범위 밖으로 밀려난 비트는 사라지고,
두 명의 모세 사이에서 겹치는 비트는 OR 연산으로 처리하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 1바이트 정수 12개를 공백으로 구분하여 입력한다.
둘째 줄에 모세가 밀어낼 비트수 n을 입력한다.
n은 0 이상 24 미만이다.
출력 설명
모세가 밀어낸 결과를 바이트마다 공백으로 구분하여 10진수로 출력한다.
입력 예시 복사
0 1 2 3 4 5 6 7 8 9 10 11
10
출력 예시 복사
4 8 0 0 0 217 29 96 0 0 2 66*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char arr[12], a1[12] = { 0 }, a2[12] = { 0 };
	int n;
	for (int i = 0; i < 12; i++) {
		scanf("%hhu", &arr[i]);
		if (i < 6) a1[i] = arr[i];
		if (i >= 6) a2[i] = arr[i];
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			a1[j] = (a1[j] << 1) | (a1[j + 1] >> 7);
		}
		a1[2] <<= 1;
		for (int j = 8; j > 3; j--) {
			a1[j] = (a1[j] >> 1) | (a1[j - 1] << 7);
		}
		a1[3] >>= 1;

		for (int j = 3; j < 8; j++) {
			a2[j] = (a2[j] << 1) | (a2[j + 1] >> 7);
		}
		a2[8] <<= 1;
		for (int j = 11; j > 9; j--) {
			a2[j] = (a2[j] >> 1) | (a2[j - 1] << 7);
		}
		a2[9] >>= 1;
	}
	for (int i = 0; i < 12; i++) {
		if (i < 3) printf("%hhu ", a1[i]);
		else if (i >= 3 && i <= 8) printf("%hhu ", a1[i] | a2[i]);
		else if (i > 8) printf("%hhu ", a2[i]);
	}
	return 0;
}
#endif

#if 0
/*[ 엇! 갈려 읽기 ]*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, m;
	unsigned int arr[10], num;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) scanf("%u", &arr[i]);
	for (int i = 0; i < n - 1; i++) {
		if ((i + ((m / 4) + 1)) < n) {
			num = (arr[i + (m / 4)] << ((m % 4) * 8)) | (arr[i + ((m / 4) + 1)] << ((4 - (m % 4)) * 8));
		}
		else num = (arr[i + (m / 4)] << ((m % 4) * 8));
		printf("%u ", num);
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

