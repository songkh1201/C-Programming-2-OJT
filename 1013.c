#if 0
/*���� ����
[���� �Է� ���ĺ� ��� 2]

0 ~ 25 ������ ���� n�� �Էµȴ�.
�ڿ������� n��° ���ĺ� �ҹ��ڸ� ����Ͻÿ�.
�Է� ����
0 ~ 25 ������ ���� n�� �Էµȴ�.
��� ����
�ڿ������� n��° ���ĺ� �ҹ��ڸ� ����Ͻÿ�.
�Է� ���� ����
1
��� ���� ����
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
/*���� ����
[���� ������ 1�� ��ġ ã��]

int ������ ���� ���� x�� �Էµȴ�.
x�� ��Ʈ �߿��� ���� �����ʿ� �ִ� ���� 1�� ��Ʈ�� ��ġ�� ����Ͻÿ�.
��, x�� LSB�� 0�� ��Ʈ�� �����Ѵ�.
�Է� ����
���� ���� x�� �Էµȴ�.
��� ����
x���� ���� �����ʿ� �ִ� ���� 1�� ��Ʈ�� ��ġ�� ����Ѵ�.

�Է� ���� ����
34
��� ���� ����
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
/*���� ����
[��ҹ��� ����]

���ĺ� �빮�ڿ� �ҹ��ڷ� ������ ���ڿ��� �־�����.
�� ����(52����)�� ������ ���� ����Ͻÿ�.
�Է� ����
100�� ������ ���ĺ� ��ҹ��ڷ� ������ ���ڿ��� �ϳ� �Էµȴ�.

��� ����
�ҹ��� a���� �ҹ��� z����, �빮�� A���� �빮�� Z����
�� ������ �������� �����Ͽ� ����Ͻÿ�.
��, ���� 52�� ��µǾ�� �Ѵ�.

�Է� ���� ����
asdfASDF
��� ���� ����
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
/*���� ����
[ 3���� ���Ұ� �Ÿ� ���ϱ� ]

int i[3][5][5] ũ���� 3�����迭�� ���� 75���� ���� A, B�� �Է� �޾�,
�迭 �󿡼� ���� A�� B�� ������ ��� �Ÿ��� ���Ͽ� ����Ͻÿ�.
���⼭ ��� �Ÿ���, A�� ��ġ�� ���� 0���� ���� A���� B������ �޸� �ּһ� ������ �Ÿ��� �ǹ��Ѵ�.

���� ���, �Էµ� ���Ұ� ������ ���� ��,
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

���� 8�� 23 ������ �Ÿ��� ���ϸ� ������ ����.
 8 -> [0][1][2]
62 -> [2][2][1]
�̹Ƿ�, ��� �Ÿ��� 54�̴�.
�Է� ����
���� 75���� A, B�� ���ʷ� �Էµȴ�.
�迭�� ���� �� �ߺ��Ǵ� ���� ����.
��� ����
3���� �迭���� ���� A�� B������ ��� �Ÿ��� ����Ѵ�.
�� ���� A�� B���� ���� ��Ÿ����.

�Է� ���� ����
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
��� ���� ����
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
/*���� ����
[ �ּ� ����ϱ� 2 ]

3�����迭 short i[l][n][m]�� ���� ��,
Ư�� ���� k�� ��Ÿ���� �ε���(z, x, y)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�迭 i�� �����ּҸ� 0������ ��ȯ�ϰ�, Ư�� ������ ����ּ� ������ ����Ѵ�.

�ε��� l, x�� y�� ���� 0 �̻��̸�, �� �� ������ �ε��� �� �� z�� �ִ��̰� y���� �ּ��� ��츦 ����ϸ� �ȴ�.

�Է� ����
l, n, m, k�� �������� ���еǾ� �Էµȴ�.
(0 < l, n, m <= 10 ; k�� 2�� ���)

��� ����
k ������ �����ϱ� ���� �ε��� ���� ����Ͻÿ�.
�Է� ���� ����
3 2 3 14
��� ���� ����
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
/*���� ����

[ ū �� �ø���, ���� �� ū��? ]


int�� long long���ε� ������ �� ���� ū �� N, M�� �־�����.

�� �߿� �� ū ���� ã�� ����Ͻÿ�.

�Է� ����
ù° �ٿ� N�� �־�����.
��° �ٿ� M�� �־�����.
(0 <= N, M < 10^100)
��� ����
�� �� �� �� ū ���� ����Ͻÿ�.
�Է� ���� ����
1126889537266375008
2414875239475421895
��� ���� ����
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
/*���� ����
[���� �Ǽ���]

���� ������ �ݴ��, �̹����� ��Ʈ�� ������ ���� ��ģ��.
unsigned char ������ ���� data�� 0 ~ 8 ������ ���� n�� �Էµȴ�.

data�� ���� 4��Ʈ�� ���������� n��Ʈ ����Ʈ�ϰ�,
data�� ���� 4��Ʈ�� �������� n��Ʈ ����Ʈ�Ͽ�
��ģ ���� ����Ͻÿ�. (��ģ�ٴ� �� 1�� �켱������ ���´ٴ� �ǹ��̴�.)
�Է� ����
unsigned char ������ ���� data�� 0 ~ 8 ������ ���� n�� �������� ���еǾ� �Էµȴ�.

��� ����
������ ���� ������ ������ ����� ����Ͻÿ�.

�Է� ���� ����
202 4
��� ���� ����
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
/*���� ����
[ 3���� �迭�� ���ֺ��� ���� ��� ���ϱ� ]

3x3x3 ũ���� ť�� ���·� 3���� �迭�� �־�����.
3���� �迭�� 6���� �鿡 ���� �� ���� ��� ���� ���ϰ�,
���ֺ��� �鳢�� ��� ���� ���� ���� ������ ����Ͻÿ�.
�Է� ����
3x3x3 ũ���� 3���� �迭�� �� ��Ұ� �������� ���еǾ� �Էµȴ�.

��� ����
3���� �迭�� 6�鿡 ���� ����� ���Ͽ�, ���� ���� ���� ������ ����Ѵ�.

�Է� ���� ����
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
4 5 6
7 8 9
7 8 9
7 8 9
��� ���� ����
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
/*���� ����
[ū ��Ʈ ����]

������ ��Ʈ ������ �� �ڷ��� ������ �̷������,
1, 2, 4, 8����Ʈ �����θ� ��Ʈ ����Ʈ ������ �����ϴ�.

10����Ʈ �迭�� ����� ��� ��Ʈ�� ���������� ����Ʈ ������ �� �� �ֵ��� �����Ϸ��� �Ѵ�.
�̶�, �� ����Ʈ�� ��Ʈ �̵��� ���ӵǾ�� �Ѵ�.

���� ���,  2����Ʈ 10101010 11110000�� ���������� 2��Ʈ ����Ʈ�ϸ�
00101010 10111100�� �ȴ�. (���� ���� ����� ��Ʈ�� 0���� ä���.)
�Է� ����
ù° �ٿ� 10����Ʈ�� ������ ����(0~255) 10���� �������� ���еǾ� �Էµȴ�.
��° �ٿ� ���������� �� ��Ʈ ����Ʈ�� �� �Էµȴ�. �� ���� 0 �̻� 80 �̸��̴�.
��� ����
����Ʈ ������ �� ����� 10�� ������ ����Ѵ�.

�Է� ���� ����
1 2 3 4 5 6 7 8 9 10
9
��� ���� ����
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
/*���� ����
[�� ���̳���! �� ��̳���! �� �� ���� ���� ����!! 2]

�� ���� ���� ������� ������ ��Ģ�� ������ ����.

��Ʈ�� ��ȣ �������� ��'��'�� ���ÿ� �����ڵ��� �ƹ��� �հ������� ����Ų��.
���� ������ �ƹ� ���ڸ� �θ��� �������� �հ������� ���۵Ǿ� �������� ������� �Ѿ�鼭
���ڸ� �ϳ��� ī��Ʈ�ϸ� �� ������ ��� �ݺ��ȴ�.
������ ���� ���ڱ��� ī��Ʈ���� �� ������� ����� ��÷�̴�.

�� ���� ���� ������� ������ �ϴ�,
��� Ư�� ���� ���̰� �ʹ� ����� �ִ� ��ƹ�����
�հ������� ��� ������ �ϸ� ������� ��ǥ�� ������ �θ��� ���� ����ϰ��� �Ѵ�.
�ٸ� �״� �Ӹ��� ����, ���ڴ� ������ ��� �ʻ��̹Ƿ�, ���α׷��� ����� ��������.

�Է� ����
ù° �ٿ� �ڿ��� n�� �Էµȴ�. n�� ���ӿ� ���� ���� ����� ����. (2 <= n < 50)
��° �ٿ� n���� �� k_i�� �Էµȴ�.
k_i�� i��° ����� ������ ����� ��Ÿ����. (1 <= k_i <= n, 1 <= i <= n)
��° �ٿ� �ڿ��� a�� b�� �Էµȴ�. a�� �����̸�, b�� ������ ��ǥ�̴�.

��� ����
��ǥ�� �����ϱ� ���� ���� ���� ���� ����Ͻÿ�.
��, � ���� �ҷ��� ��ǥ�� ������ �� ���ٸ�, 0�� ����Ͻÿ�.

�Է� ���� ����
5
2 5 4 1 3
1 3
��� ���� ����
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
