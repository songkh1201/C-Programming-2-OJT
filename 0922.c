#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//system("chcp 437");

#if 0
/*���� ����
[��Ʈ�� �׸�����]

unsigned int ũ���� ���� �ϳ��� �Է¹޾�,
�ش� ������ ��Ʈ�� �׸����� ��ȯ�Ͽ� ����Ͻÿ�.

������ �� ��Ʈ�� 1�̸� @, 0�̸� O���� ��ȯ�Ͽ� 1 x 32 ũ���� �׸��� ����Ѵ�.

���� ���, 4294967294�� ��Ʈ ǥ����
11111111_11111111_11111111_11111101�̹Ƿ�
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@O@�� ����Ѵ�.
�Է� ����
unsigned int ������ ������ �Էµȴ�.
��� ����
��Ʈ�� 1�̸� @, 0�̸� O�� ����Ͻÿ�.*/
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
/*���� ����
[���� ����2]

unsigned int ������ data��, 0~16������ ���� n�� �־�����.
data�� �߽��� �������� �������� nĭ�� ����Ʈ ������ ����� 16������ ����Ͻÿ�.

data�� �߽��̶�, 16�� ��Ʈ�� 15�� ��Ʈ ���̸� �ǹ��Ѵ�.

���� ���, 0x35AFAB96�� 3�� �־����ٸ�,
00110101_10101111_10101011_10010110
-> 10101101_01111000_00010101_01110010
�̹Ƿ�, 0xAD781572�� ����ؾ��Ѵ�.
�Է� ����
data�� n�� �������� ���еǾ� �Էµȴ�.
��, data�� 16������ �־�����.
��� ����
������ ����� 16���� ���·� ����Ͻÿ�.*/
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
/*���� ����
[��	���ΰ� ���ĺ��ΰ� �װ��� �����δ�]

�ѱ� �Ǵ� ���ĺ� �� ���ڰ� �Էµȴ�.
�Էµ� ���ڰ� ������ "english"��,
�ѱ��̶�� "�ѱ�"�� ����Ͻÿ�.

�Է� ����:
�ѱ� �Ǵ� ���ĺ� �� ���ڰ� �Էµȴ�.

��� ����:
�Էµ� ���ڰ� ������ "english"��,
�ѱ��̶�� "�ѱ�"�� ����Ͻÿ�.

�Է� ����
�ѱ� �Ǵ� ���ĺ� �� ���ڰ� �Էµȴ�.
��� ����
�Էµ� ���ڰ� ������ "english"��,
�ѱ��̶�� "�ѱ�"�� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[5];
	scanf("%s", str);
	if (str[0] & 0x80) {
		printf("�ѱ�");
	}
	else printf("english");
	return 0;
}
#endif

#if 0
/*[��Ʈ ����]

unsigned int ������ ���� n��, 0 ~ 31 ������ ���� x�� �־�����.
���� n�� x�� ��Ʈ�� 1�� �ٲ� ����� ����Ͻÿ�.
�Է� ����
���� n�� x�� �������� ���еǾ� �Էµȴ�.
��� ����
���� n�� x�� ��Ʈ�� 1�� �ٲ� ����� ����Ͻÿ�.*/
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
/*���� ����
[��ȣȭ3]

unsigned char ������ ���� n�� �־��� ��,
���� n�� ���� 4��Ʈ�� ���� 4��Ʈ�� ���� �ٲ� ���� ����Ͻÿ�.
�Է� ����
0 ~ 255 ������ ���� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ���� 4��Ʈ�� ���� 4��Ʈ�� ���� �ٲ� ���� ����Ͻÿ�.*/
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
/*���� ����
unsigned int ������ ���� ������ �Է¹޴´�.
�Է¹��� ������ ù��° ����Ʈ�� ����° ����Ʈ�� ��ġ�� �ٲ� �����ϰ�,
�ι�° ����Ʈ�� �׹�° ����Ʈ�� ��ġ�� �ٲ� �����ϴ� ������� ��ȣȭ�� �Ѵ�.

���� ���, 0x543210ff�� 0x10ff5432�� ��ȯ�ȴ�.

��ȣȭ �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
unsigned int ������ 10������ �ϳ� �־�����.
��� ����
��ȣȭ�� ���� 10������ ����Ͻÿ�.*/
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
/*���� ����
[���� ��ȯ��2]

���� N�� X�� �������� ���еǾ� �Էµȴ�.
���⼭ X(2 <= X < 10)�� ���� N�� X�������� �ǹ��Ѵ�. 

���� N�� 10������ ��ȯ�� ����� ����Ͻÿ�.
�Է� ����
���� N�� X�� �������� ���еǾ� �Էµȴ�.
��� ����
���� N�� 10������ ��ȯ�� ����� ����Ͻÿ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	
	return 0;
}
#endif

#if 0
/*���� ����
[���ڿ��� ���ĺ��� �� ��?]

���ĺ��� �ѱ��� ���� ���ڿ��� �־�����. �ִ� 10�����̴�.
�־��� ���ڿ����� ���ĺ��� �� �� ���� �� ����Ͻÿ�.
�Է� ����
�ѱ۰� ���ĺ��� ���� ���ڿ��� �־�����. �ִ� 10�����̴�.
��� ����
�־��� ���ڿ��� ����ִ� ���ĺ��� ������ ����Ͻÿ�.*/
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
/*���� ����
[Ư���� 16����]

unsigned char ������ ũ��� 1����Ʈ(8��Ʈ)�̴�.
16���� �� �ڸ��� 4��Ʈ�� ũ�⸦ ǥ���� �� �����Ƿ�, 
unsigned char ������ ���� 4��Ʈ�� �� �ڸ��� 16������ ǥ���� �� �ִ�.

���� ���, 0111_1010 ��
0111 -> 7
    1010 -> A
01111010 -> 7A �� ǥ���ȴ�.

����, ���� unsigned char ���� ���� �տ������� 4��Ʈ�� ���ʷ� �о� ��ȯ�Ѵٸ�, 
�Ʒ��� ���� 5�ڸ��� 16������ ��ȯ�� �� �ִ�.

0111 -> 7
 1111 -> F
  1110 -> E
   1101 -> D
    1010 -> A
01111010 -> 7FEDA �� ǥ���ȴ�.

���� ���� ������� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
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
/*���� ����
unsigned char ������ ���� n��, 3��Ʈ ũ���� ���� x�� �Էµȴ�.
2���� ǥ������ ���� n�� ��Ʈ ���� x�� ��� ��Ÿ������ ����Ͻÿ�.

���� ���, 247�� 7�� �־����ٸ�,
11110111
111
 111
     111
�̹Ƿ� ���� n���� ��Ʈ ���� x�� 3�� ��Ÿ����.

�Է� ����:
���� n�� x�� �������� ���еǾ� �Էµȴ�.

��� ����:
���� n�� x�� ��Ÿ�� Ƚ���� ����Ͻÿ�.

�Է� ����
���� n�� x�� �������� ���еǾ� �Էµȴ�.
��� ����
���� n�� x�� ��Ÿ�� Ƚ���� ����Ͻÿ�.*/
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
/*���� ����
[��Ʈ�� �����ϱ�]

unsigned char ������ ���� n�� �־�����.
���� n�� 5�� ��Ʈ���� 2�� ��Ʈ������ �����Ͽ�
������ 4��Ʈ�� 16���� �� �ڸ��� ����Ͻÿ�.
�Է� ����
unsigned char ������ ������ �ϳ� �־�����.
��� ����
������ 4��Ʈ�� 16������ ����Ͻÿ�.*/
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
/*���� ����
[��Ʈ ����]

unsigned char ������ ���� n��, 0 ~ 7 ������ ���� x�� �־�����.
���� n�� x�� ��Ʈ�� 0���� ���� ������ ����Ͻÿ�.
�Է� ����
���� n�� x�� �������� ���еǾ� �Էµȴ�.
��� ����
���� n�� x�� ��Ʈ�� 0���� ���� ������ ����Ͻÿ�.*/
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
/*[��ȣȭ4]

unsigned int ũ���� data��, unsigned char ũ���� key�� �־�����.
data�� ��� ����Ʈ�� key�� xor�� ����� ����Ͻÿ�.
�Է� ����
data�� key�� �������� ���еǾ� �Էµȴ�.
��� ����
data�� ��� ����Ʈ�� key�� xor ������ ���� ����Ͻÿ�.*/
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
/*���� ����
[Ư���� 16����]

unsigned char ������ ũ��� 1����Ʈ(8��Ʈ)�̴�.
16���� �� �ڸ��� 4��Ʈ�� ũ�⸦ ǥ���� �� �����Ƿ�, 
unsigned char ������ ���� 4��Ʈ�� �� �ڸ��� 16������ ǥ���� �� �ִ�.

���� ���, 0111_1010 ��
0111 -> 7
    1010 -> A
01111010 -> 7A �� ǥ���ȴ�.

����, ���� unsigned char ���� ���� �տ������� 4��Ʈ�� ���ʷ� �о� ��ȯ�Ѵٸ�, 
�Ʒ��� ���� 5�ڸ��� 16������ ��ȯ�� �� �ִ�.

0111 -> 7
 1111 -> F
  1110 -> E
   1101 -> D
    1010 -> A
01111010 -> 7FEDA �� ǥ���ȴ�.

���� ���� ������� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ����:

10���� ���� N�� �Էµȴ�. ( 0 <= N < 256 )
�Է� ����
10���� ���� N�� �Էµȴ�. ( 0 <= N < 256 )
��� ����
Ư���ϰ� ��ȯ�� 16������ ����Ͻÿ�.
(��, �����ڴ� ��� �빮�ڷ� ����Ѵ�.)*/
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
/*���� ����
[��ȣȭ 1]

��Ʈ XOR�� ����ϸ� ��ȣȭ�� �� �� �ִ�.

1�� xor������ �ϸ� ������ �����ǰ�,
0���� xor������ �ϸ� ������ �����ȴ�.

�̹� xor �������� ��ȣȭ�� 1byte ũ���� data��
��ȣȭ�� ���� 1byte ũ���� key�� �־��� ��,
������ data�� �����̾��� �� ����Ͻÿ�.
�Է� ����
0~255 ������ data�� key�� ������� �������� ���еǾ� �־�����.
��� ����
��ȣȭ ���� data�� ����Ͻÿ�.*/
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
/*���� ����
[��ȣȭ 2]

int ������ ù ����Ʈ�� ���� ° ����Ʈ�� ��ġ�� �ٲ� �����ϰ�
�ι� ° ����Ʈ�� �׹� ° ����Ʈ�� ��ġ�� �ٲ� �����ϴ� �������
��ȣȭ�� �ϰ��� �Ѵ�.

���� ��� 0x543210ff�� 0x10ff5432�� ��ȯ�ϴ� ���̴�.

���� ���� �۾��� �����Ͽ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ����
unsigned int ������ 10������ �ϳ� �־�����.

��� ����
���� ���� ������ ���� ��ȣȭ�� ���� 10������ ����Ͻÿ�.*/
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
/*���� ����
[��Ʈ ������]


unsigned char ũ���� ������ �ϳ� �Էµȴ�.
�� ������ ��Ʈ���� ������ ����� ����Ͻÿ�.

��Ʈ���� �����´ٴ� ����, ���ڿ��� �������� ��Ʈ�� ������ ���̴�.

���� ���, 42 (0010_1010)�� �������� 84 (0101_0100)�� �ȴ�.
�Է� ����
unsigned char ũ���� ���� �ϳ��� �Էµȴ�.
��� ����
�Էµ� ������ ��Ʈ���� ������ ����� ����Ͻÿ�.*/
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
/*���� ����
[���� ��ȯ��2]

���� N�� X�� �������� ���еǾ� �Էµȴ�.
���⼭ X(2 <= X < 10)�� ���� N�� X�������� �ǹ��Ѵ�. 

���� N�� 10������ ��ȯ�� ����� ����Ͻÿ�.
�Է� ����
���� N�� X�� �������� ���еǾ� �Էµȴ�.
��� ����
���� N�� 10������ ��ȯ�� ����� ����Ͻÿ�.*/
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

