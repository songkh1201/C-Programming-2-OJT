
#if 0
/*���� ����
[ ������ ]

���� ��ǰ���� �ؽ�Ʈ ��ġ��� ����� �ִ�.
�⺻ ���÷�, "������"�� �Է��ϸ� �ڵ����� "���� ���� ��!"���� ��ȯ�ȴ�.

�̿� ����, INU�� �ԷµǸ� Incheon National University�� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
100�� ���� ���ڿ��� �Է��Ѵ�.
�����ڿ� ����, Ư������, ������ �����Ѵ�.
��� ����
�ؽ�Ʈ ���� INU�� Incheon National University�� ��ȯ�� ���ڿ��� ����Ѵ�.
��ҹ��ڸ� �����Ѵ�.
�Է� ���� ����
I am a student at INU.
��� ���� ����
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
/*���� ����
[ ��Ʈ �Ϻ� �����ϱ� ]

unsigned int n�� �� �ڿ��� p, q�� �Է¹޾�,
���� n�� p�� ��Ʈ���� q�� ��Ʈ���� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
���� n�� ���̾ƴ� ���� p, q(0 <= p <= q < 32)�� �������� ������ �Է��Ѵ�.
��� ����
n�� p�� ��Ʈ���� q�� ��Ʈ���� ������ ���� ����Ѵ�.
�Է� ���� ����
29 1 3
��� ���� ����
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
/*���� ����
[ �迭 �о�� ]

6x6 ũ���� unsigned char 2���� �迭�� �Է¹ް�,
����� ��� ���Ҹ� nĭ�� �о ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

n�� ����̸� ���������� �о��, n�� �����̸� �������� �о��.

���Ұ� �� ������ �з��� ���, �� ���� ������ �Ѿ��.
������ �࿡�� �� ������ �з��� ���Ҵ� �ٽ� ù��° ������ �Ѿ��.
�Է� ����
0~255 ������ ���� 36���� �������� �����Ͽ� �Է��Ѵ�.
�̾, ���� n�� �Է��Ѵ�. ( -36 <= n <= 36 )
��� ����
�迭�� ��� ���Ҹ� nĭ�� ���� �ּҷ� �о �۷��� ����Ѵ�.
��, ��� �� %3d�� ����ϸ� �������� �����Ѵ�.
�Է� ���� ����
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
3
��� ���� ����
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
/*���� ����
[ 12�� ����ΰ�? ]

���� ���� N�� �Է� �޾�,
N�� 12�� ������� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� N�� �Է��Ѵ�.
��, 1 <= N < 10^100
��� ����
N�� 12�� ����� 1�� ����ϰ� 12�� ����� �ƴϸ� 0�� ����Ѵ�.
���� ���� �̾ ��� �ڸ����� ���� ����Ѵ�.
�Է� ���� ����
1126889537266375008
��� ���� ����
187
Hint
3�� ����̸鼭 4�� ����� 12�� ����̴�.
� ���� p�� �� ���ڸ��� 4�� ����̸� p�� 4�� ����̴�.*/
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
/*���� ����
[ 2���� �迭���� �簢�� ������ �� ���ϱ� ]

8x8 ũ�� 2���� �迭�� ���� �ּҿ�, �簢�� ������ �Է� �޾�,
�簢�� ���� ������ ���ҵ��� ���� ��ȯ�ϴ� �Լ���
int squareAreaArray(int* array, int x1, int y1, int x2, int y2)�� �ۼ��Ͻÿ�.

�簢������ ���� x1�� ���� ���, y1�� ���� ���, x2�� �Ʒ��� ���, y2�� ������ ��踦 �ǹ��Ѵ�.
�簢�� ���� ���δ� ��踦 �����Ѵ�.
��, x1 <= x2�̰� y1 <= y2 �̴�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int squareAreaArray(int* array, int x1, int y1, int x2, int y2) {

	// ==================== �ڵ� �ۼ� ���� ====================
	int sum = 0;
	for (int i = x1; i <= x2; i++) {
		for (int j = y1; j <= y2; j++) {
			sum += *(array + (i * 8) + j);
		}
	}
	return sum;
	// ==================== ���� ���� ���� ====================
}

// ���� �ڵ� ���� �� ���� ���� ó��.
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
/*���� ����
[ Ȧ���� �Է� ���� ã�� ]

n���� ���� ������ �Է¹޴´�.
�Է� ���� ���� ��, Ȧ���� �Էµ� ������ ã�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� n�� �Է��Ѵ�. n�� 1�̻� 100 �̸��� ���̴�.
��° �ٿ� n���� unsigned int ������ �Է��Ѵ�.
��, Ȧ���� �Է��� ���� �Ѱ��̸�, ������ ���� ��� ¦�� �� �Է��Ѵ�.
��� ����
Ȧ���� �Է��� ������ ����Ѵ�.
�Է� ���� ����
13
1 2 2 3 3 3 3 4 5 5 6 6 1
��� ���� ����
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
/*���� ����
[ ���� �з��� ]

������ �������� �ߴ��ϴ� ��������, ���Ա����̶�� �θ���.
������ �� ��翡 ���� �������� �з��� �� �ִ�.
���ΰ� �� ��� ��������,
���ΰ� �� ��� ���츮����,
���ο� ���ΰ� ������ �߰��������� �з��Ѵ�.

������ ����� 10x10 ũ���� 2���� �迭�� �Է¹޾�,
������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
10 x 10 ũ���� �迭�� �Է��Ѵ�.
�迭�� ��ҿ��� 0�� �ϴ��̰� 1�� �����̴�.

��, �迭���� �ϳ��� ������ �����Ѵ�.
��� ����
���� ���̰� �� ��� humilis,
���� ���̰� �� ��� congestus,
������ ���� ���̿� ���� ���̰� ������ mediocris �� ����Ѵ�.
�Է� ���� ����
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
��� ���� ����
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
/*���� ����
[ ��! ���� �б� ]

unsigned int �迭�� n���� ������ �Է� �޾�,
�迭�� ���� �ּҺ��� m����Ʈ �ڿ������� unsigned int������ ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� ���� n, m �� �Է��Ѵ�.
��° �ٿ� n���� unsigned int ������ �Է��Ѵ�.
��, 2 <= n < 10 �̰� 0 <= m < 4 �̴�.
��� ����
�迭�� ���� �ּҸ� �������� m����Ʈ �ڿ������� �迭�� ������ ���� ����� �������� �����Ͽ� ����Ѵ�.
����ϴ� ������ ������ n-1�̴�.
�Է� ���� ����
4 3
0 1 2 3
��� ���� ����
256 512 768
Hint
�Էµ� ���� unsigned int �� 4 byte ũ���̴�.*/

#endif

#if 0
/*���� ����
[ �����ο� �迭 ]

20 ����Ʈ ũ���� data�� �Է¹ް�,
�Է¹��� �ڷ��� ���ǿ� �°� data�� �о ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� 1����Ʈ�� �������� �����Ͽ� �� 20����Ʈ�� data�� �Է��Ѵ�.
��, �Է� data�� ������ ����.

��° �ٿ� 5���� ���ĺ��� �������� ���еǾ� �Է��Ѵ�.
���ĺ��� c, s, i�� �ԷµǸ�, c�� unsigned char, s�� unsigned short, i�� unsigned int�� �ǹ��Ѵ�.

����, data���� �а� ���� ����Ʈ�� �ִٸ� �����Ѵ�.
��� ����
�Է��� ���ĺ� ������� �ش� �ڷ��� �����͸� �̿��Ͽ� data�� �տ������� ��ġ�� �ʰ� �д´�.
��, ���� ����� �������� �����Ͽ� 10������ ����Ѵ�.
�Է� ���� ����
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
c c s s i
��� ���� ����
1 2 1027 1541 168364039
Hint
�� �ڷ����� ũ��� ������ ����.
char �� 1byte
short �� 2byte
int �� 4byte*/
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
/*���� ����
[ �θ��� �� ]

12����Ʈ�� �Է¹޾� �迭�� �����Ѵ�.
3��° ����Ʈ�� 4��° ����Ʈ, 9��° ����Ʈ�� 10��° ����Ʈ ���̿� �θ��� �𼼰� �ִ�.
���� n(n < 24)�� �Է¹޾�, �� �𼼸� �������� �¿� 3����Ʈ�� n��Ʈ�� �о��.
�� �𼼿� ���� �迭�� ���� ������ �з��� ��Ʈ�� �������,
�� ���� �� ���̿��� ��ġ�� ��Ʈ�� OR �������� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� 1����Ʈ ���� 12���� �������� �����Ͽ� �Է��Ѵ�.
��° �ٿ� �𼼰� �о ��Ʈ�� n�� �Է��Ѵ�.
n�� 0 �̻� 24 �̸��̴�.
��� ����
�𼼰� �о ����� ����Ʈ���� �������� �����Ͽ� 10������ ����Ѵ�.
�Է� ���� ����
0 1 2 3 4 5 6 7 8 9 10 11
10
��� ���� ����
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
/*[ ��! ���� �б� ]*/
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

