#if 0
/*1���� ����
[ ������ �迭 ]

������ �迭 data�� ���ڷ� �Ѱܹ޾�
�迭 �ȿ� �ִ� 10���� ���ڿ��� ���ʷ� ����ϴ� printstring �Լ��� �ۼ��Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.



#include <stdio.h>
#include <stdlib.h>

// ============== �ڵ� �ۼ� ���� ==============



// ============================================

int main(int argc, char const *argv[])
{
	char *data[10];
	for (int i = 0; i < 10; i++)
	{
		data[i] = malloc(sizeof(char) * 100);
		scanf("%s", data[i]);
	}

	printstring(data);

	return 0;
}

�Է� ����
10���� ���ڿ��� �ٹٲ����� ������ �Է��Ѵ�.
��� ����
�Է��� 10���� ���ڿ��� �ٹٲ����� ������ ���ʷ� ����Ѵ�.
�Է� ���� ����
hPZOiW8D8Z
QMVOTD3Bq5
yskWEmqbmQ
uw3uaBC7Tx
6zM0wmXtK6
yijexWsT2F
XuRnW56p6u
CvvnKciYHc
fUGEVGiaCS
pQonT0fUpt
��� ���� ����
hPZOiW8D8Z
QMVOTD3Bq5
yskWEmqbmQ
uw3uaBC7Tx
6zM0wmXtK6
yijexWsT2F
XuRnW56p6u
CvvnKciYHc
fUGEVGiaCS
pQonT0fUpt*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ============== �ڵ� �ۼ� ���� ==============
void printstring(char** data) {
	for (int i = 0; i < 10; i++) {
		printf("%s\n", data[i]);
	}
}
// ============================================

int main(int argc, char const* argv[])
{
	char* data[10];
	for (int i = 0; i < 10; i++)
	{
		data[i] = malloc(sizeof(char) * 100);
		scanf("%s", data[i]);
	}

	printstring(data);

	return 0;
}
#endif

#if 0
/*2���� ����
[ ���� �޸� �Ҵ� ]

Integer pointer ���� p�� intũ��� nĭ�� �޸� ������ �Ҵ�޴�
void allocate_memory �Լ��� �ۼ��Ͻÿ�.

��, �� �ڵ�� OJT ���������� ä���� �� ������,
�޸𸮸� �ùٸ��� �Ҵ�޴� �ڵ带 �ۼ��ϸ� ����� �� �ִ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.



#define _CRT_SECURE_NO_WARNINGS
#define _MSIZE(ptr) malloc_usable_size(ptr)
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// ============== �ڵ� �ۼ� ���� ==============

void allocate_memory(int** p, int n) {

}

// ============================================

int main() {
	int* p = NULL;
	int n;
	scanf("%d", &n);

	allocate_memory(&p, n);

	printf("%zu", _MSIZE(p));
	free(p);
	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#define _MSIZE(ptr) malloc_usable_size(ptr)
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// ============== �ڵ� �ۼ� ���� ==============

void allocate_memory(int** p, int n) {
	*p = (int*)malloc(sizeof(int) * n);
}

// ============================================

int main() {
	int* p = NULL;
	int n;
	scanf("%d", &n);

	allocate_memory(&p, n);

	printf("%zu", _MSIZE(p));
	free(p);
	return 0;
}
#endif

#if 0
/*3���� ����

[ ���� ������ �����ϱ� ]

������� �Է¿� ���� ���� ���ڿ��� �����ϴ�
void generate_format_string(char *str, int a, int b, int c, int d) �Լ��� �ۼ��Ͻÿ�.

arr[4] �迭�� �Է¹��� ������ ���� �������� ������ �����Ѵ�.
arr �迭���� 1�� "%c", arr �迭���� 2�� "%d", arr �迭���� 3�� "%hu", arr �迭���� 4�� "%hhu"�� �ǹ��Ѵ�.
���� �����ڴ� ���� ���� �����ȴ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============
void generate_format_string(char *str, int a, int b, int c, int d)
{
}

// ============================================

int main(int argc, char const *argv[])
{
	int arr[4];
	int data[4];
	scanf("%d %d %d %d", arr, arr + 1, arr + 2, arr + 3);
	scanf("%d %d %d %d", data, data + 1, data + 2, data + 3);

	char str[20];
	generate_format_string(str, arr[0], arr[1], arr[2], arr[3]);
	printf(str, data[0], data[1], data[2], data[3]);

	return 0;
}


�Է� ����
ù ��° �ٿ� ���� �������� ������ �����ϴ� 4���� ������ �Է��Ѵ�.
�� ��° �ٿ� ���� �����ڿ� ���� ����� 4���� ������ �Է��Ѵ�.
��� ����
���� �����ڿ� ���� data�� �r�� ���ʷ� ����Ѵ�.
�Է� ���� ����
1 2 3 4
100 200 65537 400
��� ���� ����
d2001144*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============
void generate_format_string(char* str, int a, int b, int c, int d)
{
	int idx = 0;
	*(str + idx) = '%';
	idx++;
	if (a == 1) {
		*(str + idx) = 'c';
		idx++;
	}
	else if (a == 2) {
		*(str + idx) = 'd';
		idx++;
	}
	else if (a == 3) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}
	else if (a == 4) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}

	*(str + idx) = '%';
	idx++;
	if (b == 1) {
		*(str + idx) = 'c';
		idx++;
	}
	else if (b == 2) {
		*(str + idx) = 'd';
		idx++;
	}
	else if (b == 3) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}
	else if (b == 4) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}

	*(str + idx) = '%';
	idx++;
	if (c == 1) {
		*(str + idx) = 'c';
		idx++;
	}
	else if (c == 2) {
		*(str + idx) = 'd';
		idx++;
	}
	else if (c == 3) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}
	else if (c == 4) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}

	*(str + idx) = '%';
	idx++;
	if (d == 1) {
		*(str + idx) = 'c';
		idx++;
	}
	else if (d == 2) {
		*(str + idx) = 'd';
		idx++;
	}
	else if (d == 3) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}
	else if (d == 4) {
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'h';
		idx++;
		*(str + idx) = 'u';
		idx++;
	}
	*(str + idx) = NULL;
}

// ============================================

int main(int argc, char const* argv[])
{
	int arr[4];
	int data[4];
	//char* str = "%c%d%hu%hhu";
	scanf("%d %d %d %d", arr, arr + 1, arr + 2, arr + 3);
	scanf("%d %d %d %d", data, data + 1, data + 2, data + 3);

	char str[20];
	generate_format_string(str, arr[0], arr[1], arr[2], arr[3]);
	printf(str, data[0], data[1], data[2], data[3]);

	return 0;
}
#endif

#if 0
/*4���� ����
[ strchr_start_pos ]

�Էµ� ���ڿ����� ������ ��ġ���� Ư�� ���ڰ� ó������ ��Ÿ���� ��ġ�� �ε����� ��ȯ�ϴ�
int strchr_start_pos(char *str, char c, int pos) �Լ��� �ۼ��Ͻÿ�.

�Լ��� ���ڿ� str, ã���� �ϴ� ���� c, �׸��� �˻� ���� ��ġ pos�� ���ڷ� �޾�,
�˻� ���� ��ġ���� ���ڿ��� ������ �ش� ���ڸ� ã��, �߰ߵ� ��� �� ��ġ�� �ε����� ��ȯ�Ѵ�.
���� ���ڰ� ���ڿ��� ���� ��� -1�� ��ȯ�Ѵ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

int strchr_start_pos(char *str, char c, int pos)
{
}

// ============================================

int main(int argc, char const *argv[])
{
	char str[101];
	char c;
	int n;
	gets(str);
	scanf("%d %c", &n, &c);
	printf("%d", strchr_start_pos(str, c, n));
	return 0;
}
�Է� ����
ù ��° �ٿ� �ִ� ���� 100 �� ���ڿ��� �Է��Ѵ�.
�� ��° �ٿ� �˻� ���� ��ġ�� ã���� �ϴ� ���ڸ� �Է��Ѵ�.
��� ����
���ڿ� �ȿ��� ã���� �ϴ� ���ڰ� �˻� ���� ��ġ ���ĺ��� ó������ ��Ÿ���� �ε����� ����Ѵ�.
���ڰ� ���ڿ��� �������� �ʴ� ���, -1�� ����Ѵ�.
�Է� ���� ����
hello world
5 o
��� ���� ����
7*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

int strchr_start_pos(char* str, char c, int pos)
{
	int idx = 0;
	char* str2 = str;
	while (*(str2 + idx) != NULL) {
		if (*(str2 + idx) == c && idx >= pos) {
			return idx;
		}
		idx++;
	}
	return -1;
}

// ============================================

int main(int argc, char const* argv[])
{
	char str[101];
	char c;
	int n;
	gets(str);
	scanf("%d %c", &n, &c);
	printf("%d", strchr_start_pos(str, c, n));
	return 0;
}
#endif

#if 0
/*5���� ����
[ n���� ���ڿ� ���� ]

2���� �����͸� ����Ͽ� n���� ���ڿ��� �Է¹޾� �����ϰ�, �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ���ڿ��� �������� �Ҵ�� �޸𸮿� ����ȴ�.

��, �迭�� ����� �� ����.
�迭 ��� �� �������� ó����.
�Է� ����
ù ��° �ٿ� ������ ���ڿ��� ���� n�� �Է��Ѵ�.
�� ���� n���� �ٿ� ���� ���ڿ��� �Է��Ѵ�. ���ڿ��� �ִ� 100���̴�.
��� ����
�Է¹��� ���ڿ����� �ٹٲ����� �����Ͽ� �������� ����Ѵ�.
�Է� ���� ����
3
abc
look
at
��� ���� ����
at
look
abc*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	char** s;
	scanf("%d\n", &n);
	s = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		s[i] = (char*)malloc(sizeof(char) * 101);
		gets(s[i]);
	}
	for (int i = n - 1; i >= 0; i--) puts(s[i]);
	return 0;
}
#endif

#if 0
/*6���� ����
[ str2uint ]

���ڿ��� unsigned int�� ��ȯ�ϴ�
unsigned int str2uint(char *str) �Լ��� �ۼ��Ͻÿ�.
str2uint �Լ��� �־��� ���ڿ��� �ִ� �� ���ڸ� ���ڷ� ��ȯ�ϰ�, �̸� �����Ͽ� ���������� ��ȣ ���� ������ �����Ѵ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

unsigned int str2uint(char *str)
{

}

// ============================================

int main(int argc, char const *argv[])
{
	char str[12];
	scanf("%s", str);
	printf("%u", str2uint(str));
	return 0;
}
�Է� ����
���ڷ� ������ �ִ� 11���� ���ڿ��� �Է��Ѵ�.
��� ����
���ڿ��� unsigned int�� ��ȯ�Ͽ� ����Ѵ�.
�Է� ���� ����
123456
��� ���� ����
123456*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

unsigned int str2uint(char* str)
{
	unsigned int n = 0;
	int len = 0, ten = 1;
	char* str2 = str;
	char s[20] = { 0 };
	while (*str2 != NULL) {
		s[len] = *str2;
		len++;
		str2++;
	}
	for (int i = 0; i < len / 2; i++) {
		char t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
	for (int i = 0; i < len; i++) {
		n += ten * (s[i] - '0');
		ten *= 10;
	}
	return n;
}

// ============================================

int main(int argc, char const* argv[])
{
	char str[12];
	scanf("%s", str);
	printf("%u", str2uint(str));
	return 0;
}
#endif

#if 0
/*7���� ����
[ ���� ��ȯ�� ����� ]

unsigned int�� �Է¹޾� ����ڰ� ������ ������ ���ڿ��� ��ȯ�ϴ�
char *uint2str_with_jinbeob(char *str, unsigned int n, int x) �Լ��� �ۼ��Ͻÿ�.

str�� n�� x�������� ǥ���� ����� �����ϰ�, str�� �ּҸ� ��ȯ�Ѵ�.


< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.



#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

char *uint2str_with_jinbeob(char *str, unsigned int n, int x)
{

}

// ============================================

int main(int argc, char const *argv[])
{
	unsigned int t;
	int n;
	char str[50] = {0};
	scanf("%u %d", &t, &n);
	printf("%s", uint2str_with_jinbeob(str, t, n));
	return 0;
}

�Է� ����
unsigned int ���� ��ȯ�� ������ ���ʷ� �Է��Ѵ�.
��ȯ�� ������ 2~10�̴�.
��� ����
�Է¹��� �������� ������ ������ ���ڿ��� ��ȯ�Ͽ� ����Ѵ�.
�Է� ���� ����
29 2
��� ���� ����
11101*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

char* uint2str_with_jinbeob(char* str, unsigned int n, int x)
{
	char* str2 = str;
	char s[50] = { 0 };
	int idx = 0;
	while (n > 0) {
		s[idx] = (n % x) + '0';
		n /= x;
		idx++;
	}
	for (int i = idx - 1; i >= 0; i--) {
		*str = s[i];
		str++;
	}
	return str2;
}

// ============================================

int main(int argc, char const* argv[])
{
	unsigned int t;
	int n;
	char str[50] = { 0 };
	scanf("%u %d", &t, &n);
	printf("%s", uint2str_with_jinbeob(str, t, n));
	return 0;
}
#endif

#if 0
/*8���� ����
[ enhanced strstr ]

�־��� ���ڿ�(str) ������ �κ� ���ڿ�(str2)�� �տ������� ã��,
�� ���� ��ġ�� ��ȯ�ϴ� char *enhanced_strstr(char *str, char *str2) �Լ��� �ۼ��Ͻÿ�.

��, str�μ��� NULL�� �Էµ� ���, ������ �˻��� str�� �̾ �˻��Ѵ�.

���� ���, �Լ��� ���ڷ�
str = "hellohello", str2 = "lo" �Էµ� ��� ��ȯ�Ǵ� �ּҴ� str+3�̰�, �̾
str = NULL�� str2 = "lo"�� �ԷµǸ� ������ str+4���� �˻��Ͽ� str+8�� ��ȯ�Ѵ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

char *enhanced_strstr(char *str, char *str2)
{
}

// ============================================

int main(int argc, char const *argv[])
{
	char str1[104];
	char str2[104];
	gets(str1);
	gets(str2);
	char *p = enhanced_strstr(str1, str2);
	if (p == NULL)
	{
		printf("yatppi!");
	}
	while (p)
	{
		printf("%s\n", p);
		p = enhanced_strstr(NULL, str2);
	}
	return 0;
}
�Է� ����
ù° �ٿ� �˻� ��� ���ڿ�(str)�� �Է��Ѵ�.
��° �ٿ� ã���� �ϴ� �κ� ���ڿ�(str2)�� �Է��Ѵ�.
��� ����
�˻� ��� ���ڿ�(str)���� �κ� ���ڿ�(str2)�� ��Ÿ���� ��ġ�� ����Ѵ�.
�κ� ���ڿ��� �ϳ��� ������ "yatppi!"�� ����Ѵ�.
�Է� ���� ����
hellohello
lo
��� ���� ����
lohello
lo
Hint
������ static Ű���带 ����ϸ� ���α׷��� ����� �� ���� �ش� ������ ��ȿ�ϴ�.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

char* enhanced_strstr(char* str, char* str2)
{
	static char* s1 = NULL;
	if (str != NULL) s1 = str;
	else s1++;
	char* s2 = str2;
	int len = 0;
	while (*s2++ != NULL) len++;
	s2 = str2;
	while (*s1 != NULL) {
		if (*s1 != *s2) {
			s2 = str2;
		}
		if (*s1 == *s2) {
			s2++;
		}
		if (*s2 == NULL) return s1 - len + 1;
		s1++;
	}
	return NULL;	
}

// ============================================

int main(int argc, char const* argv[])
{
	char str1[104];
	char str2[104];
	gets(str1);
	gets(str2);
	char* p = enhanced_strstr(str1, str2);
	if (p == NULL)
	{
		printf("yatppi!");
	}
	while (p)
	{
		printf("%s\n", p);
		p = enhanced_strstr(NULL, str2);
	}
	return 0;
}
#endif

#if 0
/*9���� ����
[ �ܾ� ���� ī��Ʈ ]

�־��� ���ڿ����� �ܾ��� ������ ���� word_count �Լ��� �ۼ��Ͻÿ�.
�Լ��� ���ڿ��� ���ڷ� �޾�, �������� ���е� �ܾ��� �� ������ ����Ѵ�.
�̶�, ���ڿ��� �����̳� �߰��� ������ ���ӵ� ��찡 ������ �� �ִ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����.
�� ���� ���� �� �������� ó����.


#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

int word_count(char *str)
{
}

// ============================================
int main(int argc, char const *argv[])
{
	char str[104] = {0};
	gets(str);
	printf("%d", word_count(str));
	return 0;
}
�Է� ����
�ִ� ���� 103�� ���ڿ��� �Է��Ѵ�.
��� ����
���ڿ� ���� �ܾ� ������ ����Ѵ�.
�Է� ���� ����
  incheon    national  university
��� ���� ����
3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

int word_count(char* str)
{
	int cnt = 0;
	while (*str != NULL) {
		if (*str == ' ') {
			while (*str == ' ' && *str != NULL) str++;
		}
		else {
			cnt++;
			while (*str != ' ' && *str != NULL) str++;
		}
	}
	return cnt;
}

// ============================================
int main(int argc, char const* argv[])
{
	char str[104] = { 0 };
	gets(str);
	printf("%d", word_count(str));
	return 0;
}
#endif

#if 0
/*10���� ����
[ 3byte �б� ���׷��̵�! ]

���� n�� n���� unsigned int ������ �Է¹޾� �迭�� �����Ѵ�.
�� �迭���� �պ��� 3����Ʈ�� �����͸� �о ����Ͻÿ�.
n�� 1���� 100 ������ ���̸�, ����� �� 1~2����Ʈ�� ���� ���, �ڿ� ����Ʈ�� 0���� ����Ѵ�.

�Է� ����
ù° �ٿ� ���� n�� �Է��Ѵ�.
��° �ٿ� n���� unsigned int ���� �Է��Ѵ�.
��� ����
unsigned int �迭�� �պ��� 3����Ʈ�� ���� �����͸� �������� �����Ͽ� ����Ѵ�.
1~2����Ʈ�� ���� ���, �ڿ� ����Ʈ�� 0���� ����Ѵ�.
�Է� ���� ����
3
33554433 196608 1024
��� ���� ����
1 2 3 4*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned char data[500] = { 0 };
	int n, idx;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%u", &data[i * 4]);
	}
	idx = (n * 4) / 3;
	if ((n * 4) % 3) idx++;
	for (int i = 0; i < idx; i++) {
		unsigned char d[4] = { 0 };
		d[2] = data[(i * 3) + 2];
		d[1] = data[(i * 3) + 1];
		d[0] = data[i * 3];
		unsigned int* a = (unsigned int*)d;
		printf("%u ", *a);
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
/*��ȣ*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ============== �ڵ� �ۼ� ���� ==============
#include <stdio.h>

void printstring(char* data[]) {
	for (int i = 0; i < 10; i++) {
		printf("%s\n", data[i]);
	}
}
// ============================================
int main(int argc, char const* argv[]) {
	char* data[10];
	for (int i = 0; i < 10; i++) {
		data[i] = malloc(sizeof(char) * 100);
		scanf("%s", data[i]);
}

	printstring(data);
		
	return 0;
}
#endif

#if 0
/*sprint*/
/*[���� ������ �����ϱ�]
arr �迭���� 1�� "%c", arr �迭���� 2�� "%d", arr �迭���� 3�� "%hu", arr �迭���� 4�� "%hhu"�� �ǹ��Ѵ�.
�Է� ���� ����
1 2 3 4
100 200 65537 400
��� ���� ����
d2001144*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============
void generate_format_string(char* str, int a, int b, int c, int d)
{
	*str = NULL;
	if (a == 1) {
		sprintf(str, "%s%s", str, "%c");
	}
	else if (a == 2) {
		sprintf(str, "%s%s", str, "%d");
	}
	else if (a == 3) {
		sprintf(str, "%s%s", str, "%hu");
	}
	else if (a == 4) {
		sprintf(str, "%s%s", str, "%hhu");
	}

	if (b == 1) {
		sprintf(str, "%s%s", str, "%c");
	}
	else if (b == 2) {
		sprintf(str, "%s%s", str, "%d");
	}
	else if (b == 3) {
		sprintf(str, "%s%s", str, "%hu");
	}
	else if (b == 4) {
		sprintf(str, "%s%s", str, "%hhu");
	}

	if (c == 1) {
		sprintf(str, "%s%s", str, "%c");
	}
	else if (c == 2) {
		sprintf(str, "%s%s", str, "%d");
	}
	else if (c == 3) {
		sprintf(str, "%s%s", str, "%hu");
	}
	else if (c == 4) {
		sprintf(str, "%s%s", str, "%hhu");
	}

	if (d == 1) {
		sprintf(str, "%s%s", str, "%c");
	}
	else if (d == 2) {
		sprintf(str, "%s%s", str, "%d");
	}
	else if (d == 3) {
		sprintf(str, "%s%s", str, "%hu");
	}
	else if (d == 4) {
		sprintf(str, "%s%s", str, "%hhu");
	}
}

// ============================================

int main(int argc, char const* argv[])
{
	int arr[4];
	int data[4];
	scanf("%d %d %d %d", arr, arr + 1, arr + 2, arr + 3);
	scanf("%d %d %d %d", data, data + 1, data + 2, data + 3);

	char str[20];
	generate_format_string(str, arr[0], arr[1], arr[2], arr[3]);
	printf(str, data[0], data[1], data[2], data[3]);

	return 0;
}
#endif

#if 0
/*strstr_start_pos*/
/*
[ strchr_start_pos ]

���ڿ� �ȿ��� ã���� �ϴ� ���ڿ��� �˻� ���� ��ġ ���ĺ��� ó������ ��Ÿ���� �ε����� ����Ѵ�.
���ڰ� ���ڿ��� �������� �ʴ� ���, -1�� ����Ѵ�.
�Է� ���� ����
hellohellohell
5 lo
��� ���� ����
8*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

int strchr_start_pos(char* str, char* c, int pos)
{
	char* c2 = c;
	int idx = pos, len = 0;
	while (*c2++ != NULL) len++;
	str += pos;
	while (*str != NULL) {
		if (*str != *c2) c2 = c;
		if (*str == *c2) c2++;
		if (*c2 == NULL) return idx - len + 1;
		idx++;
		str++;
	}
	return -1;
}

// ============================================

int main(int argc, char const* argv[])
{
	char str[101];
	char c[10];
	int n;
	gets(str);
	scanf("%d %s", &n, c);
	printf("%d", strchr_start_pos(str, c, n));
	return 0;
}
#endif

#if 0
/*���� ��ġ��*/
/*�Է� ���� ����
incheon    national  university
��� ���� ����
3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== �ڵ� �ۼ� ���� ==============

int word_count(char* str, char** pa)
{
	char* s1 = str;
	int j = 0, cnt = 0;
	while (*str != NULL) {
		if (*str == ' ') {
			while (*str == ' ' && *str != NULL) {
				*str = NULL;
				str++;
			}
		}
		else {
			cnt++;
			pa[j++] = str;
			while (*str != ' ' && *str != NULL) str++;
		}
	}
	return cnt;
}

// ============================================
int main(int argc, char const* argv[])
{
	char str[104] = { 0 }, * p[10];
	int n;
	gets(str);
	n = word_count(str, p);
	for (int i = 0; i < n; i++) {
		printf("%s ", p[i]);
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

