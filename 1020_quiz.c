
#if 0
/*���� ����
[ �ع� �Ÿ� ���ϱ� ]


unsinged int x, y�� �Է� �޾�,
x�� y�� �ع� �Ÿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ع� �Ÿ�(Hamming distance)�� �� ������ ��Ʈ ǥ������, LSB(0�� ��Ʈ)�� �������� ���� �ٸ� ��Ʈ�� ������ �ǹ��Ѵ�.

���� ���,
x = 73 (1001001), y = 23 (11101) �� ���, �ع� �Ÿ��� 3�̴�.
�Է� ����
unsigned int x, y�� �������� ������ �Է��Ѵ�.

��� ����
����� x�� y�� �ع� �Ÿ��� ����Ѵ�.

�Է� ���� ����
1 4
��� ���� ����
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
/*���� ����
[ Ư�� ��Ʈ ������ �� ����ϱ� ]

unsigned int n�� �� �ڿ��� p, q�� �Է¹޾�,
���� n�� p�� ��Ʈ���� q�� ��Ʈ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
���� n�� ���̾ƴ� ���� p, q(0 <= p < q < 32)�� �������� ������ �Է��Ѵ�.
��� ����
n�� p�� ��Ʈ���� q�� ��Ʈ������ 1�� ������ ����Ѵ�.
�Է� ���� ����
29 1 3
��� ���� ����
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
/*���� ����
[ �𼭸� ��� ����� ]

���� N�� �Է¹޾�,
NxN ũ���� �𼭸� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�𼭸� ����̶�, ����� �»�� �� �� (0, 0)���� �ִ��� ������,
�ð�������� ���ư��� 1�� �۾����� ����̴�.
�Է� ����
���� N�� �Է��Ѵ�. N�� 1�̻� 20���� �����̴�.
��� ����
�𼭸� ����� ����Ѵ�.
��, ��� �� %3d�� ����Ѵ�.
�Է� ���� ����
7
��� ���� ����
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
/*���� ����
[ Ư�� ���� ��Ʈ 1�� ����� ]

unsigned int x�� �ڿ��� a, b (a < b)�� �Է� �޾�,
x�� a�� ��Ʈ���� b�� ��Ʈ������ ��Ʈ�� 1�� ����� ���α׷��� �ۼ��Ͻÿ�.

��, ���� x�� LSB (Least Significant Bit)�� 0�� ��Ʈ�̴�.
�Է� ����
���� x�� �ڿ��� a, b�� �������� ������ �Է��Ѵ�.
��� ����
���� x�� a�� ��Ʈ���� b�� ��Ʈ���� ��� 1�� ���� ���� ����Ѵ�.
�Է� ���� ����
58 2 5
��� ���� ����
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
/*���� ����
[ ������ũ ����� ]

�Ͼ� ��ȭ���� ������ ������ ���δ�.
�����̴� ��� ���簢��������, ũ�Ⱑ ���� �ٸ���.
��ȭ���� �ϳ��� ���̰� ����, ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

��ȭ���� ũ��� 10x10 �̴�.
�Է� ����
ù° �ٿ� ���� �������� �� N�� �Է��Ѵ�.
��° �� ���� N+1��° �ٱ��� ���ڸ� �ټ� ���� �Է��Ѵ�.

ù��° ���� �������� ���� ��Ÿ����.
�ι�° ���� ����° ���� �����̸� ���̴� ��ǥ�� �ǹ��Ѵ�.
��ǥ�� �������� �»�� �𼭸��� �������� �Ѵ�.
�׹�° ���� �ټ���° ���� �������� ũ���̴�. ���� ����, ������ �����̴�.
��� ����
�����̰� ���� ���� ������ 0����, �����̰� ���� ���� �������� ������ ����Ѵ�.

��, �����̰� ���ļ� ���� ���, ���߿� ���� �������� ���� ����Ѵ�.
�Է� ���� ����
2
1 0 0 2 2
2 1 0 3 2
3 2 7 2 2
��� ���� ����
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
1 0 0 2 2�� ����
1 1 0 ...
1 1 0 ...
0 0 0 ... �� �Ǿ�����
2 1 0 3 2�� ���� ���ٿ��� ���� ���ó�� �Ǿ���.*/
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
/*���� ����
[ �����ο� ���� ]

10 ����Ʈ ũ���� data�� p�� �Է¹޾�,
data�� p��° ����Ʈ���� �� 2����Ʈ�� �о ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� 1����Ʈ�� �������� �����Ͽ� �� 10����Ʈ�� data�� �Է��Ѵ�.
��, �Է� data�� ������ ����.

��° �ٿ� p�� �Է��Ѵ�. (1 <= p <= 9)
��� ����
data�� p��° ����Ʈ���� �� 2����Ʈ�� �о ����Ѵ�.
�Է� ���� ����
5 4 3 2 1 1 2 3 4 5
4
��� ���� ����
258
Hint
short �� 2byte*/
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
/*���� ����
[ ��� ]

12����Ʈ�� �Է¹޾� �迭�� �����Ѵ�.
6��° ����Ʈ�� 7��° ����Ʈ ���̿� ��𼼰� �ִ�.
����� ������� �¿� 6����Ʈ�� �� 12����Ʈ�̴�.

���� n(0 <= n < 48)�� �Է¹޾�, ��𼼸� �������� �¿�� n��Ʈ�� �о��.
����� ����¿� ���� �迭�� ���� ������ �з��� ��Ʈ�� �������.
�Է� ����
ù° �ٿ� 1����Ʈ ���� 12���� �������� �����Ͽ� �Է��Ѵ�.
��° �ٿ� ��𼼰� �о ��Ʈ�� n�� �Է��Ѵ�.
n�� 0 �̻� 48 �̸��̴�.
��� ����
��𼼰� �о ����� ����Ʈ���� �������� �����Ͽ� 10������ ����Ѵ�.
�Է� ���� ����
1 2 3 4 5 6 7 8 9 10 11 12
4
��� ���� ����
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
/*���� ����
[ 3�� ����ΰ� ]

���� ���� N�� �Է� �޾�,
N�� �ڸ����� N�� 3�� ������� ���θ� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ����
ù° �ٿ� N�� �Է��Ѵ�.
��, 1 <= N < 10^100
��� ����
N�� 3�� ����� 1�� ����ϰ� 3�� ����� �ƴϸ� 0�� ����Ѵ�.
������� �̾ N�� �ڸ����� ����Ѵ�.
�Է� ���� ����
33333333333333333333333333333333333333333333
��� ���� ����
144
Hint
� ���� �� �ڸ����� ���� ���� ����� 3�� �����, �� ���� 3�� ����̴�.*/
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
/*���� ����
[ RGB2GRAY ]

RGB �̹����� �� �ȼ��� ������(R), ���(G), �Ķ���(B)�� �� ���� ä�η� �����Ǿ� ������,
�� ä���� �ȼ� ���� 0���� 255������ ������ ǥ���ȴ�.

RGB �̹����� ���� ���� N�� ���� ���� M, �׸��� �� ä�ο� ���� �ȼ� ���� �Է¹޾�,
�̹����� ��� �ȼ��� ���� R, G, B ���� ����� ���Ͽ� ȸ���� �̹����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� N�� M�� �Է��Ѵ�. (1 <= N, M < 100)
��° �ٿ� N���� ���ڸ� 3*M�� �Է��Ѵ�.

���� ù M���� �� �ȼ��� R �����̰�, �̾ G, B ������ ���� M�� �Է��Ѵ�.
�� ���ڴ� 0~255 ������ ���̴�.
��� ����
ȸ���� �̹����� �迭�� ����Ѵ�.
��, ����� 0~255 ������ �����̰�, �Ҽ��� �Ʒ��� ��� ������.
�Է� ���� ����
5 2
0 0 255 255 0
0 245 255 255 245
255 255 255 255 255
255 255 255 255 255
127 127 255 255 127
127 127 127 127 127
��� ���� ����
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
/*���� ����
[ ū ���� ���� ]

�ִ� 100�ڸ� ��� �� ���� ���� �� �ִ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
�ִ� 100�ڸ� ��� �� ���� �ٹٲ����� ������ �Է��Ѵ�.
��� ����
�Է��� ��� �ΰ��� ���� ����� ����Ͻÿ�.
�Է� ���� ����
1234567891011121314151617181920
1357924680123456789
��� ���� ����
1234567891012479238831740638709
Hint
100�ڸ� + 100�ڸ��� ����� 101�ڸ��� �� �� �ִ�.*/
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
/*[ �ع� �Ÿ� ���ϱ� ]
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
/*[ Ư�� ��Ʈ ������ �� ����ϱ� ]*/
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
/*[ Ư�� ���� ��Ʈ 1�� ����� ]*/
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
/*ū �� ����*/
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
/*[ �����ο� ���� ]*/
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
/*[ ��� ]*/
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
/*[ 3�� ����ΰ� ]*/
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
/*[ ū ���� ���� ]*/
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
/*[ �𼭸� ��� ����� ]*/
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
/*���ش�*/
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
/*12����Ʈ �عְŸ�*/
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
/*�𼼸�*/
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
/*����*/
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
/*��Ʈ��*/
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
/*��Ʋ��������*/
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
/*���̾Ƹ�� ��*/
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
/*2563 ������*/
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
/*1477 : [����-�迭����] 2���� �迭 ���� ä��� 3-2  ���� XXXXX*/
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
/*ū��������*/
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
/*ū�����ϱ�*/
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
/*�ּ�*/
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
/*������ȯ1*/
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
/*����*/
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
/*�ؽ�Ʈ����*/
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
/*�����б�*/
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
/*���簢���������*/
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
/*���簢���������*/
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
/*3����*/
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

