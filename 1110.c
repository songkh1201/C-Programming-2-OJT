#if 0
/*���� ����
[ strlen �Լ� ]

size_t strlen(const char* str) �Լ��� ���ڿ��� ���̸� ��ȯ�ϴ� C ǥ�� ���̺귯�� �Լ��̴�.
�Լ��� ���θ� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.

#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
size_t strlen(const char* str) {



}
// ===============================

int main() {

	char buffer[100];
	gets(buffer);
	printf("%zu", strlen(buffer));

	return 0;
}



�Է� ����
���ڿ��� �Է��Ѵ�.
��� ����
���ڿ��� ���̸� ����Ѵ�.
�Է� ���� ����
"I am a student at Incheon National University."
��� ���� ����
49*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
size_t strlen(const char* str) {
	char* str2 = str;
	while (*str2++ != NULL);
	str2--;
	return str2 - str;
}
// ===============================

int main() {

	char buffer[100];
	gets(buffer);
	printf("%zu", strlen(buffer));

	return 0;
}
#endif

#if 0
/*���� ����
[ strcnt �Լ� ]


size_t strcnt(const char* str, char c) �Լ��� �Է��� ���ڿ����� Ư�� ������ ������ ���� ��ȯ�ϴ� �Լ��̴�.
�Լ��� ���θ� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.



#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
size_t strcnt(const char* str, char c) {


}
// ===============================

int main() {
	char buffer[100];
	char c;
	gets(buffer);
	scanf("%c", &c);
	printf("%zu", strcnt(buffer, c));
	return 0;
}

�Է� ����
ù° �ٿ� ���ڿ��� �Է��Ѵ�.
��° �ٿ� ã�� ���� �� ���� �Է��Ѵ�.
��� ����
���ڿ����� ã�� ������ ������ ���� ����Ѵ�.
��ҹ��ڸ� �����Ѵ�.
�Է� ���� ����
"I am a student at Incheon National University."
i
��� ���� ����
3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
size_t strcnt(const char* str, char c) {
	int cnt = 0;
	while (*str != NULL) {
		if (*str == c) cnt++;
		str++;
	}
	return cnt;
}
// ===============================

int main() {
	char buffer[100];
	char c;
	gets(buffer);
	scanf("%c", &c);
	printf("%zu", strcnt(buffer, c));
	return 0;
}
#endif

#if 0
/*���� ����
[ conv_strcpy ]

char* conv_strcpy(char* dest, const char* src, char find, char replace) �Լ��� ���ڿ��� ���� �ΰ��� �Է¹޾�
���ڿ�(src)���� Ư�� ����(find)�� ��� ã�� �ٸ� ����(replace)�� �ٲپ� ���ο� ���ڿ�(dest)�� �����ϴ� �Լ��̴�.
�Լ��� ���θ� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.

#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
char* conv_strcpy(char* dest, const char* src, char find, char replace) {


}
// ===============================

int main() {

	char src[101];
	char dest[101];
	char find, replace;
	gets(src);
	scanf("%c %c", &find, &replace);

	printf("%s", conv_strcpy(dest, src, find, replace));

	return 0;
}

�Է� ����
ù° �ٿ� ���ڿ��� �Է��Ѵ�.
��° �ٿ� ã�� ����(find)�� �ٲ� ����(replace)�� �Է��Ѵ�.
��� ����
���ڿ����� ���ڸ� ã�� �ٲ� ���ڿ��� ����Ѵ�.
��ҹ��ڸ� �����Ѵ�.
�Է� ���� ����
I am a student at Incheon National University.
a A
��� ���� ����
I Am A student At Incheon NAtionAl University.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
char* conv_strcpy(char* dest, const char* src, char find, char replace) {
	char* dest2 = dest;
	while (*src != NULL) {
		if (*src == find) *dest = replace;
		else *dest = *src;
		src++;
		dest++;
	}
	*dest = NULL;
	return dest2;
}
// ===============================

int main() {

	char src[101];
	char dest[101];
	char find, replace;
	gets(src);
	scanf("%c %c", &find, &replace);

	printf("%s", conv_strcpy(dest, src, find, replace));

	return 0;
}
#endif

#if 0
/*���� ����
[ stricat �Լ� ]

char* stricat(char* dest, const char* src) �Լ��� ���ڿ� �ΰ��� �Է¹޾�
���ڿ�(dest)�� �տ� ���ڿ�(src)�� �ٿ� �ִ� �Լ��̴�.
�Լ��� ���θ� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========

char* stricat(char* dest, const char* src) {


}
// ===============================

int main() {

	char src[101];
	char dest[101];
	gets(dest);
	gets(src);

	stricat(dest, src);
	printf("%s\n", dest);

	return 0;
}

�Է� ����
ù° �ٿ� ���ڿ�(dest)�� �Է��Ѵ�.
��� ����
���ڿ����� ���ڸ� ã�� �ٲ� ���ڿ��� ����Ѵ�.
��ҹ��ڸ� �����Ѵ�.
�Է� ���� ����
I have a pen.
I have an apple.
��� ���� ����
I have an apple.I have a pen.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========

char* stricat(char* dest, const char* src) {
	char s1[201], * dest2 = dest;
	int idx = 0, idx2 = 0;
	while (*src != NULL) {
		s1[idx] = *src;
		idx++;
		src++;
	}
	while (*dest != NULL) {
		s1[idx] = *dest;
		idx++;
		dest++;
	}
	dest = dest2;
	for (int i = 0; i < idx; i++) {
		*(dest + i) = s1[i];
	}
	*(dest + idx) = NULL;
	return dest;
}
// ===============================

int main() {

	char src[101];
	char dest[101];
	gets(dest);
	gets(src);

	stricat(dest, src);
	printf("%s\n", dest);

	return 0;
}
#endif

#if 0
/*[ 3 byte �����ϱ� ���׷��̵�! ]

3����Ʈ n�� ���� ���� unsigned int �迭 data�� ��ƴ���� �����ϰ�,
�� ����� �������� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, data�� ������ ����� ���� ����Ʈ�� 0���� ä���.
�Է� ����
ù° �ٿ� 100 ������ ���� ���� n�� �Է��Ѵ�.
��° �ٿ� n���� 0 ~ 2^24 - 1 ������ ������ �������� �����Ͽ� �Է��Ѵ�.
��� ����
�Է��� 3����Ʈ �������� ��ƺٿ�
unsigned int �迭�� ������ ����� �������� �����Ͽ� ����Ѵ�.
�Է� ���� ����
7
7 256 1 4 3 2 1
��� ���� ����
7 65537 1024 33554435 65536 0
Hint*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[400] = { 0 };
	int n, idx;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%u", &data[3 * i]);
	}
	idx = (n * 3) / 4;
	if ((n * 3) % 4) idx++;
	for (int i = 0; i < idx; i++) {
		unsigned int* p = (unsigned int*)&data[4 * i];
		printf("%u ", *p);
	}
	return 0;
}
#endif

#if 0
/*���� ����
[ strstr �Լ� ]

char* strstr(const char* str, const char* substr) �Լ���
�ϳ��� ���ڿ�(str) ������ �ٸ� ���ڿ�(substr)�� ó������ ��Ÿ���� ��ġ�� �����͸� ��ȯ�ϴ� C ǥ�� ���̺귯�� �Լ��̴�.
�Լ��� ���θ� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
char* strstr(const char* str, const char* substr) {



}
// ===============================

int main() {

	char str[101];
	char str2[101];
	gets(str);
	gets(str2);

	char* result = strstr(str, str2);
	if (result == NULL) {
		printf("%ld", result);
	}
	else {
		printf("%d", result - str);
	}

	return 0;
}


�Է� ����
ù° �ٿ� �˻��� ���ڿ� str�� �Է��Ѵ�.
��° �ٿ� ã�� ���ڿ� substr�� �Է��Ѵ�.
��� ����
str �ȿ��� substr�� ��Ÿ���� ��ġ�� ã�� �� ��ġ�� ����Ű�� �����͸� ��ȯ�Ѵ�.
ã���� �ϴ� ���ڿ��� ������ NULL �����͸� ��ȯ�Ѵ�.
�Է� ���� ����
I am a student at Incheon National University.
at
��� ���� ����
15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
char* strstr(const char* str, const char* substr) {
	char* s1 = substr;
	int len = 0;
	while (*substr++ != NULL) len++;
	substr = s1;
	while (*substr != NULL) {
		if (*str == NULL) return NULL;
		if (*str == *substr) {
			substr++;
		}
		else substr = s1;
		str++;
	}
	return str - len;
}
// ===============================

int main() {

	char str[101];
	char str2[101];
	gets(str);
	gets(str2);

	char* result = strstr(str, str2);
	if (result == NULL) {
		printf("%ld", result);
	}
	else {
		printf("%d", result - str);
	}

	return 0;
}
#endif

#if 0
/*���� ����
[ �ܾ� ���� ������ ]

���ڿ� source�� �ܾ� ������ ������ ���ڿ� destination�� �����ϴ� �Լ�
void reverseStringAtSpace(char *destination, char *source)�� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.



#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========



// ===============================

int main(int argc, char const *argv[])
{
	char str[104] = {0};
	char str2[104] = {0};
	gets(str);
	reverseStringAtSpace(str2, str);
	printf("%s", str2);
	return 0;
}

�Է� ����
���ĺ��� �������� ������ ���ڿ��� �Է��Ѵ�.
��� ����
�ܾ� ������ ������ ���ڿ��� ����Ѵ�.
�Է� ���� ����
Do you like my car
��� ���� ����
car my like you Do*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
void reverseStringAtSpace(char* destination, char* source) {
	int idx = 0;
	int len2 = 0;
	char* s2 = source;
	while (*source++ != NULL) len2++;
	source = s2;
	idx = len2 - 1;
	while (1) {
		int len = 0;
		char* s1 = source;
		while (*source != ' ' && *source != NULL) {
			len++;
			source++;
		}
		for (int i = 0; i < len; i++) {
			*(destination + len2 - len + i) = *(s1 + i);
			idx--;
		}
		if (*source == NULL) break;
		*(destination + idx) = ' ';
		len2 = idx;
		idx--;
		source++;
	}
}
// ===============================

int main(int argc, char const* argv[])
{
	char str[104] = { 0 };
	char str2[104] = { 0 };
	gets(str);
	reverseStringAtSpace(str2, str);
	printf("%s", str2);
	return 0;
}
#endif

#if 0
/*���� ����
[ �ܾ� ���� ������ ]

���ڿ��� �Է¹ް�, �� �ܾ��� ���θ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
���ĺ��� �������� �̷���� ���ڿ��� �Է��Ѵ�.
���ڿ��� �ִ� 100���̴�.
��� ����
���ڿ��� �� �ܾ��� ���θ� ������ ����Ѵ�.
�Է� ���� ����
I wanna race for you
��� ���� ����
I annaw ecar rof uoy*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s1[101], s2[101] = { 0 };
	int len, len2;
	gets(s1);
	len = strlen(s1);
	for (int i = 0; i < len; i++) {
		len2 = 0;
		for (int j = 0; s1[i + j] != ' ' && s1[i + j] != NULL; j++) len2++;
		for (int j = 0; j < len2; j++) {
			s2[i + j] = s1[i + len2 - j - 1];
		}
		s2[i + len2] = ' ';
		i += len2;
	}
	printf("%s", s2);
	return 0;
}
#endif

#if 0
/*���� ����
[ ���ڸ� ���ڿ��� ]

unsigned int n�� char *destination�� ���ڷ� �޾�,
destination�� n�� 10������ �ۼ��ϴ� �Լ�
void uint2str(char* destination, unsigned int n)�� �ϼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.



#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========



// ===============================

int main(int argc, char const *argv[])
{
	unsigned int n;
	char str[20] = {0};
	scanf("%u", &n);
	uint2str(str, n);
	printf("%s", str);
	return 0;
}



�Է� ����
unsigned int ������ 10�� ������ �Է��Ѵ�.
��� ����
�Է��� ���� ��µȴ�.
�Է� ���� ����
1234556
��� ���� ����
1234556*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
void uint2str(char* destination, unsigned int n) {
	char s1[21] = { 0 };
	int idx = 0, flag = 1;
	while (n > 0 || flag) {
		s1[idx] = n % 10;
		n /= 10;
		idx++;
		flag = 0;
	}
	for (int i = 0; i < idx; i++) {
		*(destination + i) = s1[idx - i - 1] + '0';
	}
}
// ===============================

int main(int argc, char const* argv[])
{
	unsigned int n;
	char str[20] = { 0 };
	scanf("%u", &n);
	uint2str(str, n);
	printf("%s", str);
	return 0;
}
#endif

#if 0
/*���� ����
[ ���ڿ��� 100��~! ]

���ڿ� n���� �Է¹ް�,
�Է¹��� �ݴ� ������ ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ����
ù° �ٿ� 1 �̻� 100 ������ ���� n�� �Է��Ѵ�.
��° �� ���� n�ٿ� ���� ���ĺ��� �������� ������ ���ڿ� n���� �Է��Ѵ�.
��, �� ���ڿ��� ���̴� �ִ� 50���̴�.
��� ����
�Է��� �ݴ� ������ ���ڿ����� ����Ѵ�.
�Է� ���� ����
9
See your body into the moonlight
Even if I try to cancel
All the pictures into the mind
There's a flashing in my eyes
Don't you see my Condition?
The fiction is gonna run it again
Can't you see now illusions?
Right into your mind....
Deja Vu!
��� ���� ����
Deja Vu!
Right into your mind....
Can't you see now illusions?
The fiction is gonna run it again
Don't you see my Condition?
There's a flashing in my eyes
All the pictures into the mind
Even if I try to cancel
See your body into the moonlight*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	char str[100][51];
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		gets(str[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		puts(str[i]);
	}
	return 0;
}
#endif

#if 0
/*�߰���� 9��*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[20];
	char n;
	int idx = 0;
	for (int i = 0; i < 20; i++) scanf("%hhu", &data[i]);
	for (int i = 0; i < 5; i++) {
		scanf(" %c", &n);
		if (n == 'c') {
			printf("%hhu ", data[idx]);
			idx++;
		}
		else if (n == 's') {
			unsigned short* p = (unsigned short*)&data[idx];
			printf("%hu ", *p);
			idx += 2;
		}
		else if (n == 'i') {
			unsigned int* p = (unsigned int*)&data[idx];
			printf("%u ", *p);
			idx += 4;
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
/*����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char* stricat(char* dest, const char* src) {
	int len_dest = 0; // pen
	int len_src = 0; // apple
	for (int i = 0; i < 101; i++) {
		if (dest[i] != NULL) {
			len_dest++;
		}
		else break;
	}
	for (int i = 0; i < 101; i++) {
		if (src[i] != NULL) {
			len_src++;
		}
		else break;
	}
	for (int i = len_dest + len_src; i >= len_src; i--) { // src���̸�ŭ �����
		dest[i] = dest[i - len_src];
	}
	for (int i = 0; i < len_src; i++) {
		dest[i] = src[i];
	}

	return dest;

}
// ===============================

int main() {

	char src[101];
	char dest[101];
	gets(dest);
	gets(src);

	stricat(dest, src);
	printf("%s\n", dest);

	return 0;
}
#endif

#if 0
/*����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);
	unsigned char a[300] = { 0, };
	unsigned char* pp = a;
	unsigned int* p = a;
	for (int i = 0; i < n; i++) {
		scanf("%u", (pp + 3 * i));
	}
	int b = 0;
	if ((n * 3) % 12 == 0) b = n * 3 / 4;
	else { b = (n * 3) / 4 + 1; }


	for (int i = 0; i < b; i++) {
		printf("%u ", *(p + i));
	}

	return 0;
}
#endif

#if 0
/*����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void uint2str(char* destination, unsigned int n) {
	// ======== �ڵ� �ۼ� ���� ========

	char source[20] = { 0 };
	int len = 0;
	int flag = 1;
	for (int i = 0; i < 20; i++) {
		if (n > 0 || flag) {
			source[i] = n % 10;
			n /= 10;
			flag = 0;
			len++;
		}
		else break;
	}
	for (int i = len - 1; i >= 0; i--) { // 6 5 4 3 2 1 0
		destination[len - 1 - i] = source[i] + '0';
	}


	// ===============================
}

int main(int argc, char const* argv[])
{
	unsigned int n;
	char str[20] = { 0 };
	scanf("%u", &n);
	uint2str(str, n);
	printf("%s", str);
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
/*��ȣ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
char* stricat(char* dest, const char* src) {
	int i = 0;
	char rew[201] = { 0 };
	while (src[i] != '\0') {
		rew[i] = src[i];
		i++;
	}
	int j = 0;
	while (dest[j] != '\0') {
		rew[i + j] = dest[j];
		j++;
	}
	int k = 0;
	while (rew[k] != '\0') {
		dest[k] = rew[k];
		k++;
	}
	dest[k] = '\0';

	return dest;
}
// ===============================

int main() {
	char src[101];
	char dest[101];

	gets(dest);
	gets(src);

	stricat(dest, src);
	printf("%s\n", dest);

	return 0;
}
#endif

#if 0
/*����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== �ڵ� �ۼ� ���� ========
void reverseStringAtSpace(char* destination, char* source) {
	char* ptr1 = destination;
	char* ptr2 = source;
	int len = 0;
	while (*ptr2 != NULL) {
		len++;
		ptr2++;
	}
	ptr2 = source;
	int index = 0;
	int idx;
	int word = 0;
	while (*ptr2 != NULL) {
		word = 0;
		while (*ptr2 != ' ') {
			word++;
			ptr2++;
		}
		idx = index;
		while (word > 0) {
			*(ptr1 + len - word - idx) = *(ptr2 - word);
			index++;
			word--;
		}
		*(ptr1 + len - index) = ' ';

		ptr2++;
   }
	*(ptr1 + len) = '\0';

}
// ===============================

int main(int argc, char const* argv[])
{
	char str[104] = { 0 };
	char str2[104] = { 0 };
	gets(str);
	reverseStringAtSpace(str2, str);
	printf("%s", str2);
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

