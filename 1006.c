
#if 0
/*���� ����
1 ~ 26 ������ ���� n�� �Էµ� ��,
n��° ���ĺ��� �빮�ڷ� ����Ͻÿ�.
�Է� ����
1 ~ 26 ������ ���� n�� �Էµȴ�.
��� ����
n��° ���ĺ��� �빮�ڷ� ����Ѵ�.
�Է� ���� ����
4
��� ���� ����
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
/*���� ����
[2���� �ε����� 1���� �ε�����]

2���� �迭�� ���������� 1���� �迭�� �����ϴ�.
����, �� ���� ������ �ε����ϴ� ���� 0�� �ϳ��� ������ �ε��� �ϴ� ���� �����ϴ�.

���� ���,
int [3][2]�迭���� [1][1]ĭ�� [0][3]�� ǥ���� �� �ִ�.
��, 0�� ���� 3���� ������ �� �ִ�.

��ó��, ���� �迭�� ũ��� ���ϴ� �ε����� �־��� ��
���� ��ġ�� �ε����� �� �ִ� �ϳ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
4���� ���� n, m, x, y�� �������� ���еǾ� �Էµȴ�.
�̴� ���� �迭�� ù��° ũ��, �ι�° ũ��, ���ϴ� �ε����� ù��° ��, �ι�° ���̴�.
(1 <= n, m < 100 , 0 <= x < n , 0 <= y < m)
��� ����
ù��° �ε����� 0���� �����ϰ�,
�ι�° �ε����θ� �Էµ� �ε����� ���� ��ġ�� ��Ÿ�� �� �ִ� ������ ����Ͻÿ�.
�Է� ���� ����
5 5 2 3
��� ���� ����
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
/*���� ����
[�ּ� ����ϱ�]

2�����迭 int i[n][m]�� ���� ��,
Ư�� ���� k�� ��Ÿ���� �ε���(x, y)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�迭 i�� �����ּҸ� 0������ ��ȯ�ϰ�, Ư�� ������ ����ּ� ������ ����Ѵ�.

�ε��� x�� y�� ���� 0 �̻��̸�, �� �� ������ �ε��� �� �� y���� �ּ��� ��츦 ����ϸ� �ȴ�.
�Է� ����
n, m, k�� �������� ���еǾ� �Էµȴ�.
(0 < n, m <= 10 )
��� ����
k ������ �����ϱ� ���� �ε��� ���� ����Ͻÿ�.*/
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
/*���� ����
[Ȧ�� �ڸ���]

���� n (0 <= n < 10^100)�� �Է¹޾�,
�� ���� n�� Ȧ�� �� ° �ڸ����� ����Ͻÿ�.

���� ���, 2623451�̸� 2241�� ����ؾ��Ѵ�.
�Է� ����
0 �̻� 10^100 �̸��� ���� n�� �Էµȴ�.
��� ����
���� n�� Ȧ����° �ڸ���(1�� �ڸ�, 100�� �ڸ�, ...)�� ����Ͻÿ�.
�Է� ���� ����
501364
��� ���� ����
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
	// flag ����ϴ� ��� �����ϱ�
	return 0;
}
#endif

#if 0
/*���� ����
[���� �Է� ���� ��� 2]

1 ~ 10 ������ ���� n�� �Էµ� ��,
�Ʒ� ��Ģ�� ���� ����� ������ ���α׷��� �ۼ��Ͻÿ�.

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
�Է� ����
1 ~ 10 ������ ���� n�� �Էµȴ�.
��� ����
�־��� ��Ģ�� ���� ���ڸ� ����Ѵ�.
�Է� ���� ����
6
��� ���� ����
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
/*���� ����
[ ���Ұ� �Ÿ� ���ϱ� ]

int i[6][6] ũ���� 2�����迭�� ���� 36���� ���� A, B�� �Է� �޾�,
�迭 �󿡼� ���� A�� B�� ������ ��� �Ÿ��� ���Ͽ� ����Ͻÿ�.
���⼭ ��� �Ÿ���, A�� ��ġ�� ���� 0���� ���� A���� B������ �Ÿ��� �ǹ��Ѵ�.

���� ���, �Էµ� ���Ұ� ������ ���� ��,
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36

���� 8�� 23 ������ �Ÿ��� ���ϸ� ������ ����.
 8 -> [1][1]
23 -> [3][4]
�̹Ƿ�, ��� �Ÿ��� 15�̴�.
�Է� ����
���� 36���� A, B�� ���ʷ� �Էµȴ�.
�迭�� ���� �� �ߺ��Ǵ� ���� ����.
��� ����
2���� �迭���� ���� A�� B������ ��� �Ÿ��� ����Ѵ�.
�� ���� A�� B���� ���� ��Ÿ����.
�Է� ���� ����
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
1 36
��� ���� ����
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
/*���� ����
[��ȣȭ Ű����]

qwerty ������ �迭�� �̿��� ��ȣȭ ���α׷��� �ۼ��Ͻÿ�.

��ȣȭ ����� ������ ����.
���ĺ� ���ǿ��� �� ���� Ű ������ �� ���� Ű�� �ִµ�, �� �߿��� ���� Ű�� '��' ��� ����.
���ĺ� ���ڿ��� �ԷµǸ�, ���ڿ� �ش��ϴ� Ű ���� �ִ� Ű�� �ٲپ� ����ϸ� �ȴ�.

���� ���,
apple -> q00o3
asdf -> qwer
�� ����ϸ� �ȴ�.
�Է� ����
�ҹ��� ���ĺ����� �̷���� ���ڿ��� �Էµȴ�.
���ڿ��� �ִ� ���̴� 50 �̴�.
��� ����
��ȣȭ �� ���ڿ��� ����Ѵ�.*/
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
/*���� ����
[ū ��Ʈ ����]

���� ����:
������ ��Ʈ ������ �� �ڷ��� ������ �̷������,
1, 2, 4, 8����Ʈ �����θ� ��Ʈ ����Ʈ ������ �����ϴ�.

10����Ʈ �迭�� ����� ��� ��Ʈ�� �������� ����Ʈ ������ �� �� �ֵ��� �����Ϸ��� �Ѵ�.
�̶�, �� ����Ʈ�� ��Ʈ �̵��� ���ӵǾ�� �Ѵ�.

���� ���,  2����Ʈ 10101010 11110000�� �������� 2��Ʈ ����Ʈ�ϸ�
10101011 11000000�� �ȴ�.
�Է� ����
ù° �ٿ� 10����Ʈ�� ������ ����(0~255) 10���� �������� ���еǾ� �Էµȴ�.
��° �ٿ� �������� �� ��Ʈ ����Ʈ�� �� �Էµȴ�. �� ���� 0 �̻� 80 �̸��̴�.
��� ����
����Ʈ ������ �� ����� 10�� ������ ����Ѵ�.*/
#define _CRT_SECURE_NO_WARNINGS

#endif

#if 0
/*���� ����
[ matrix �ð� ���� ȸ���ϱ� ]

5x5 ũ���� matrix(2���� �迭)�� �Էµȴ�.
�� matrix�� �ð� �������� 90�� ȸ����Ų matrix�� ����Ͻÿ�.
�Է� ����
5x5 ũ���� 2�����迭(matrix)�� �Էµȴ�.
��� ����
�Է¹��� matirx�� �ð�������� 90�� ȸ����Ų matrix�� ����Ѵ�.*/
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
/*���� ����
[�� ���̳���! �� ��̳���! �� �� ���� ���� ����!!]


�� ���� ���� ������� ������ ��Ģ�� ������ ����.

��Ʈ�� ��ȣ �������� ��'��'�� ���ÿ� �����ڵ��� �ƹ��� �հ������� ����Ų��.
���� ������ �ƹ� ���ڸ� �θ��� �������� �հ������� ���۵Ǿ� �������� ������� �Ѿ�鼭
���ڸ� �ϳ��� ī��Ʈ�ϸ� �� ������ ��� �ݺ��ȴ�.
������ ���� ���ڱ��� ī��Ʈ���� �� ������� ����� ��÷�̴�.

�� ���� ���� ������� ������ �ϴ�,
������ �ð��� ���µ� ���� �ϳ��ϳ� ���� �ɾ��ֳ���� ������ �� ���ΰ���
���� ��Ȳ�� ���ڸ� �Է��ϸ� ��÷�ڰ� �������� �ٷ� ������ִ� ���α׷��� �����ϰ��� �Ѵ�.
�Է� ����
ù° �ٿ� �ڿ��� n�� �Էµȴ�. n�� ���ӿ� ���� ���� ����� ����.
��° �ٿ� n���� �� k_i�� �Էµȴ�.
k_i�� i��° ����� ������ ����� ��Ÿ����.
��° �ٿ� �ڿ��� a�� b�� �Էµȴ�. a�� �����̸�, b�� ������ ��ģ ���̴�.

(2 <= n < 50)
(1 <= k_i <= n, 1 <= i <= n)
(1 <= a <= n, 1 <= b < 100)
��� ����
�������� ��ȣ�� ��µȴ�.
�Է� ���� ����
5
2 5 4 1 3
1 7
��� ���� ����
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
/*���� ����
[�ּ� ����ϱ�]

2�����迭 char i[n][m]�� ���� ��,
Ư�� ���� k�� ��Ÿ���� �ε���(x, y)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�迭 i�� �����ּҸ� 0������ ��ȯ�ϰ�, Ư�� ������ ����ּ� ������ ����Ѵ�.

�ε��� x�� y�� ���� 0 �̻��̸�, �� �� ������ �ε��� �� �� y���� �ּ��� ��츦 ����ϸ� �ȴ�.
�Է� ����
n, m, k�� �������� ���еǾ� �Էµȴ�.
(0 < n, m <= 10 )
��� ����
k ������ �����ϱ� ���� �ε��� ���� ����Ͻÿ�.
�Է� ���� ����
2 3 4
��� ���� ����
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
/*���� ����
[��ȣȭ Ű����]

qwerty ������ �迭�� �̿��� ��ȣȭ ���α׷��� �ۼ��Ͻÿ�.

��ȣȭ ����� ������ ����.
���ĺ� ���ǿ��� �� ���� Ű ������ �� ���� Ű�� �ִµ�, �� �߿��� ������ Ű�� '��' ��� ����.
���ĺ� ���ڿ��� �ԷµǸ�, ���ڿ� �ش��ϴ� Ű ���� �ִ� Ű�� �ٲپ� ����ϸ� �ȴ�.

���� ���,
apple -> w--p4
asdf -> wert
�� ����ϸ� �ȴ�.
�Է� ����
�ҹ��� ���ĺ����� �̷���� ���ڿ��� �Էµȴ�.
���ڿ��� �ִ� ���̴� 50 �̴�.
��� ����
��ȣȭ �� ���ڿ��� ����Ѵ�.
�Է� ���� ����
include
��� ���� ����
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
/*���� ����
[ matrix �ݽð� ���� ȸ���ϱ� ]

5x5 ũ���� matrix(2���� �迭)�� �Էµȴ�.
�� matrix�� �ݽð� �������� 90�� ȸ����Ų matrix�� ����Ͻÿ�.
�Է� ����
5x5 ũ���� 2�����迭(matrix)�� �Էµȴ�.
��� ����
�Է¹��� matirx�� �ݽð� �������� 90�� ȸ����Ų matrix�� ����Ѵ�.

�Է� ���� ����
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

��� ���� ����
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
/*���� ����
[ū ��Ʈ ����]

���� ����:
������ ��Ʈ ������ �� �ڷ��� ������ �̷������,
1, 2, 4, 8����Ʈ �����θ� ��Ʈ ����Ʈ ������ �����ϴ�.

10����Ʈ �迭�� ����� ��� ��Ʈ�� �������� ����Ʈ ������ �� �� �ֵ��� �����Ϸ��� �Ѵ�.
�̶�, �� ����Ʈ�� ��Ʈ �̵��� ���ӵǾ�� �Ѵ�.

���� ���,  2����Ʈ 10101010 11110000�� �������� 2��Ʈ ����Ʈ�ϸ�
10101011 11000000�� �ȴ�.
�Է� ����
ù° �ٿ� 10����Ʈ�� ������ ����(0~255) 10���� �������� ���еǾ� �Էµȴ�.
��° �ٿ� �������� �� ��Ʈ ����Ʈ�� �� �Էµȴ�. �� ���� 0 �̻� 80 �̸��̴�.
��� ����
����Ʈ ������ �� ����� 10�� ������ ����Ѵ�.
�Է� ���� ����
1 2 3 4 5 6 7 8 9 10
9
��� ���� ����
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