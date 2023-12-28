#if 0
/*1���� ����
[ �迭���� ��Ʈ 1�� ���� ã�� ]

n���� unsigned int ���� ����� �迭�� �־�����.
�迭�� �����Ϳ� ���� n�� ���� ���ڷ� �޾�,
�迭�� ����� �������� ����ǥ������ 1�� ������ ��Ʈ�� �� ������ ���� �� ���� ��ȯ�ϴ�
int bitCount(unsigned int *data, int n) �Լ��� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.


#include <stdio.h>

int bitCount(unsigned int *data, int n)
// ================== �ڵ� �ۼ� ���� ==================


// ===================================================
}

int main(int argc, char const *argv[])
{
    int n;
    unsigned char data[100] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%hhu", data + i);
    }

    int cnt = bitCount((unsigned int *)data, n);

    printf("%d", cnt);

    return 0;
}
�Է� ����
[���α׷� �Է�]
ù° �ٿ� ���� n�� �Է��Ѵ�. (n <= 100)
��° �ٿ� n���� unsigned int ���� �������� ������ �Է��Ѵ�.
��� ����
[���α׷� ���]
�Է¹��� �������� ����ǥ������ 1�� ������ ��Ʈ�� �� ������ ����Ѵ�.
�Է� ���� ����
4
29 7 15 31
��� ���� ����
16*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bitCount(unsigned int* data, int n)
// ================== �ڵ� �ۼ� ���� ==================
{
    int cnt = 0;
    for (int i = 0; i <= n / 4; i++) {
        for (int j = 0; j < 32; j++) {
            if (data[i] >> j & 1) cnt++;
        }
    }
    return cnt;
    // ===================================================
}

int main(int argc, char const* argv[])
{
    int n;
    unsigned char data[100] = { 0 };

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%hhu", data + i);
    }

    int cnt = bitCount((unsigned int*)data, n);

    printf("%d", cnt);

    return 0;
}
#endif

#if 0
/*2���� ����
[ Ȧ�� �ε����� ����, ¦�� �ε����� ������ ]

2���� �࿡ unsigned int�� ������ 20���� ����� 2���� �迭�� �־�����.

2���� �迭�� �����͸� ���ڷ� �޾�, 2���� �迭�� �� �࿡ ����
¦�� �� �ε����� ���� ���� ���������� x�� ����Ʈ�ϰ�,
Ȧ�� �� �ε����� ���� ���� �������� x�� ����Ʈ�ϴ�
shiftRL �Լ��� �����Ͻÿ�.

���� �Լ����� shiftRL �Լ��� ȣ�� �κ��� �����Ͽ� �Լ��� �Ķ���͸� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.


#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================

int main(int argc, char const *argv[])
{
    unsigned int data[20] = {0};
    int x;

    for (size_t i = 0; i < 20; i++)
    {
        scanf("%d", data + i);
    }
    scanf("%d", &x);

    shiftRL((unsigned int(*)[2])data, x);

    for (size_t i = 0; i < 20; i++)
    {
        printf("%u ", data[i]);
    }

    return 0;
}
�Է� ����
[���α׷� �Է�]
ù° �ٿ� 20���� unsigned int�� ������ �������� ������ �Է��Ѵ�.
��° �ٿ� �� ������ ����Ʈ �� Ƚ�� x�� �Է��Ѵ�. x�� 0 �̻� 32 �̸��̴�.
��� ����
[���α׷� ���]
2���� �迭���� �� ���� Ȧ�� �� �ε����� ���� ���� �������� x��,
¦�� �� �ε����� ���� ���������� x�� ����Ʈ�� ����� ����Ѵ�.
�Է� ���� ����
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
4
��� ���� ����
0 32 0 64 0 96 0 128 0 160 0 192 0 224 0 256 1 288 1 320*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
void shiftRL(unsigned int* data, int x) {
    for (int i = 0; i < 20; i++) {
        if (i % 2) {
            data[i] <<= x;
        }
        else {
            data[i] >>= x;
        }
    }
}
// ===================================================

int main(int argc, char const* argv[])
{
    unsigned int data[20] = { 0 };
    int x;

    for (size_t i = 0; i < 20; i++)
    {
        scanf("%d", data + i);
    }
    scanf("%d", &x);

    shiftRL((unsigned int(*)[2])data, x);

    for (size_t i = 0; i < 20; i++)
    {
        printf("%u ", data[i]);
    }

    return 0;
}
#endif

#if 0
/*3���� ����
[ Rotation ]
unsigned int �� n�� int �� x�� �Է¹޾�,
n�� x�� ���������� Rotation �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

Rotation�� ���� n�� x��ŭ ���������� ����Ʈ ��Ű��,
�̵����� ��Ʈ�� ������ ���� �ٴٸ��� �ٽ� ���� ���������� ��ȯ�Ͽ� �̵��ϴ� �����̴�.
�Է� ����
ù° �ٿ� unsigned int �� n�� �Է��Ѵ�.
��° �ٿ� int �� x�� �Է��Ѵ�. (0 <= x <= 31)
��� ����
�Է¹��� ���� n�� ���������� x�� Rotation �� ����� 16���� ���·� ����Ѵ�.
�Է� ���� ����
1
30
��� ���� ����
4
Hint*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    unsigned int n;
    int x;
    scanf("%u %d", &n, &x);
    for (int i = 0; i < x; i++) {
        n = (n >> 1) | (n << 31);
    }
    printf("%u", n);
    return 0;
}
#endif

#if 0
/*4���� ����
[ ���ڿ� �����ϱ� ]

�־��� ���ڿ�(str)�� Ư�� ��ġ(pos)�� �ٸ� ���ڿ�(istr)�� �����ϴ�
insert_str �Լ��� �����Ͻÿ�.

insert_str �Լ��� ���� ���ڿ�(str)�� Ư�� ��ġ(pos)�� �ٸ� ���ڿ�(istr)�� �����Ѵ�.
��, ���� ���ڿ�(str)�� ������ ���ڿ�(istr)�� ���̴� 100�� �����̰�,
Ư�� ��ġ(pos)�� ���� ���ڿ�(str)�� ���̺��� �۰ų� ����.

���� �Լ����� insert_str �Լ��� ȣ�� �κ��� �����Ͽ� �Լ��� �Ķ���͸� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.



#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================
int main(int argc, char const *argv[])
{
    char str[201] = {0};
    char istr[101] = {0};
    int pos;

    scanf("%s", str);
    scanf("%s", istr);
    scanf("%d", &pos);

    insert_str(str, istr, pos);

    printf("%s", str);


    return 0;
}

�Է� ����
[���α׷� �Է�]
ù° �ٿ� ���� ���ڿ�(str)�� �Է��Ѵ�.
��° �ٿ� ������ ���ڿ�(istr)�� �Է��Ѵ�.
��° �ٿ� ������ ��ġ(pos)�� �Է��Ѵ�.
��� ����
[���α׷� ���]
���� ���ڿ�(str)�� Ư�� ��ġ(pos)�� �ٸ� ���ڿ�(istr)�� ������ ����� ����Ѵ�.
�Է� ���� ����
IncheonUniversity
National
7
��� ���� ����
IncheonNationalUniversity*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// ================== �ڵ� �ۼ� ���� ==================
void insert_str(char* str1, char* str2, int n) {
    char s[301] = { 0 };
    char* s1 = str1, * s2 = str2;
    int len1 = 0, len2 = 0;
    while (*s1++ != NULL) len1++;
    while (*s2++ != NULL) len2++;

    int idx = 0;
    for (idx = 0; idx < n; idx++) {
        s[idx] = str1[idx];
    }
    while (*str2 != NULL) {
        s[idx] = *str2++;
        idx++;
    }
    for (int i = n; str1[i] != NULL; i++) {
        s[idx] = str1[i];
        idx++;
    }
    for (int i = 0; i < len1 + len2; i++) {
        *(str1 + i) = s[i];
    }
}
// ===================================================
int main(int argc, char const* argv[])
{
    char str[201] = { 0 };
    char istr[101] = { 0 };
    int pos;

    scanf("%s", str);
    scanf("%s", istr);
    scanf("%d", &pos);

    insert_str(str, istr, pos);

    printf("%s", str);


    return 0;
}
#endif

#if 0
/*5���� ����
[ str2cmp ]

�ִ� ���� 100�� ���ڿ� �ΰ��� ����� 2���� �迭 str�� �־�����.
�迭���� 0�� �ε����� ����� ���ڿ��� str1, 1�� �ε����� ����� ���ڿ��� str2��� �� ��,

2���� �迭�� �����͸� ���ڷ� �޾�,
str1�� str2 ���ڿ��� ���������� ���Ͽ� ��� ���ڿ��� ���� �������� �Ǵ��ϴ�
str2cmp �Լ��� �����Ͻÿ�.

str2cmp �Լ��� �� ���ڿ��� �ƽ�Ű���� ���Ͽ�
str1�� �ռ��ٸ� -1, �����ϴٸ� 0, str2�� �ռ��ٸ� 1�� ��ȯ�ؾ� �Ѵ�.
str1�� str2 ���ڿ��� ���̰� �ٸ��ٸ�, ª�� ���ڿ��� �ռ��ٰ� �Ǵ��Ѵ�.

���� �Լ����� str2cmp �Լ��� ȣ�� �κ��� �����Ͽ� �Լ��� �Ķ���͸� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.


#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================


int main(int argc, char const *argv[])
{
    char str[2][101];

    for (int i = 0; i < 2; i++) {
        scanf("%100s", str[i]);
    }

    printf("%d\n", str2cmp(str));

    return 0;
}

�Է� ����
[���α׷� �Է�]
ù° �ٿ� ���� ù ��° ���ڿ�(str1)�� �Է��Ѵ�.
��° �ٿ� ���� �� ��° ���ڿ�(str2)�� �Է��Ѵ�.
��� ����
[���α׷� ���]
str1�� str2�� ���������� ���� ����� ����Ѵ�.
str1�� �ռ� ��� -1, ������ ��� 0, str2�� �ռ� ��� 1�� ����Ѵ�.
�Է� ���� ����
banana
bananb
��� ���� ����
-1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
int str2cmp(char(*str)[101]) {
    char* s1 = str[0], * s2 = str[1];
    int i;
    for (int i = 0; i < s1[i] != NULL && s2[i] != NULL; i++) {
        if (s1[i] > s2[i]) return 1;
        else if (s1[i] < s2[i]) return -1;
    }
    if (s1[i] == NULL) return -1;
    else if (s2[i] == NULL) return 1;
    return 0;
}
// ===================================================


int main(int argc, char const* argv[])
{
    char str[2][101];

    for (int i = 0; i < 2; i++) {
        scanf("%100s", str[i]);
    }

    printf("%d\n", str2cmp(str));

    return 0;
}

#endif

#if 0
/*6���� ����
[ 16���� ��ȯ�� ]

unsigned int ������ ���� n�� �Է¹޾� 16���� ������ ���ڿ��� ��ȯ�Ͽ� str�� �����ϴ�
void int_to_base16str(char *str, unsigned int n) �Լ��� �����Ͻÿ�.

16������ ���� 0-9�� �빮�� ���ĺ� A-Z�� ����Ѵ�.
0-9���� ���ڴ� �״�� ���Ǹ� ���ĺ� A�� 10, B�� 11, ... , F�� 15�� ǥ���Ѵ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.


#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================

int main(int argc, char const *argv[])
{
    unsigned int n;
    char str[10] = {0};

    scanf("%u", &n);
    int_to_base16str(str, n);
    printf("%s\n", str);

    return 0;
}
�Է� ����
[���α׷� �Է�]
unsigned int ������ ���� n�� �Է��Ѵ�.
��� ����
[���α׷� ���]
�Է¹��� ������ 16���� ������ ���ڿ��� ��ȯ�Ͽ� ����Ѵ�.
�Է� ���� ����
1715004
��� ���� ����
1A2B3C*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
void int_to_base16str(char* str, unsigned int n) {
    char s[10] = { 0 };
    int idx = 0, flag = 1;
    while (n > 0 || flag) {
        s[idx] = n % 16;
        n /= 16;
        if (s[idx] >= 10) {
            s[idx] += 'A' - 10;
        }
        else s[idx] += '0';
        idx++;
        flag = 0;
    }
    for (int i = 0; i < idx; i++) {
        *(str + i) = s[idx - i - 1];
    }
}
// ===================================================

int main(int argc, char const* argv[])
{
    unsigned int n;
    char str[10] = { 0 };

    scanf("%u", &n);
    int_to_base16str(str, n);
    printf("%s\n", str);

    return 0;
}
#endif

#if 0
/*7���� ����
[ uint2str ]

unsigned int ������ ������ �Է¹޾� 10���� ������ ���ڿ��� ��ȯ�ϴ�
void uint2str(char *data) �Լ��� �����Ͻÿ�.

data�� ����Ű�� ���� unsigned int ũ���� ���� ����Ǿ� �ִ�.
�ش� ���� ���ڿ��� ��ȯ�Ͽ� data�� ����Ű�� ���� �����Ͽ��� �Ѵ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.


#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================

int main(int argc, char const *argv[])
{
    char str[16] = {0};

    scanf("%u", (unsigned int *)str);

    uint2str(str);

    printf("%s", str);

    return 0;
}
�Է� ����
[���α׷� �Է�]
unsigned int ������ ���� n�� �Է��Ѵ�.
��� ����
[���α׷� ���]
���� n�� ���ڿ��� ��ȯ�Ͽ� ����Ѵ�.
�Է� ���� ����
1234567
��� ���� ����
1234567*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
void uint2str(char* data) {
    unsigned int* p = (unsigned int*)data, num;
    int flag = 1, idx = 0;
    char tmp;
    num = *p;
    while (num > 0 || flag) {
        data[idx] = num % 10 + '0';
        num /= 10;
        idx++;
        flag = 0;
    }

    for (int i = 0; i < idx / 2; i++) {
        tmp = data[i];
        data[i] = data[idx - i - 1];
        data[idx - i - 1] = tmp;
    }
}
// ===================================================

int main(int argc, char const* argv[])
{
    char str[16] = { 0 };

    scanf("%u", (unsigned int*)str);

    uint2str(str);

    printf("%s", str);

    return 0;
}
#endif

#if 0
/*8���� ����
[ word5cat ]

�ִ� ���� 20���� �ܾ� 3���� ����� 2���� �迭 word�� �־�����.
word�� ����� �ܾ ���ʷ� 1���� �迭 wordsequence�� �����ϴ�
wordcat �Լ��� �����Ͻÿ�.

���� �Լ����� wordcat �Լ��� ȣ�� �κ��� �����Ͽ� �Լ��� �Ķ���͸� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.

#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================

int main()
{
    char word[3][21];
    char wordsequence[63];
    int idx = 3;

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", word[i]);
    }

    wordcat(wordsequence, word, idx);

    printf("%s\n", wordsequence);

    return 0;
}
�Է� ����
[���α׷� �Է�]
3���� �ܾ �������� ������ �Է��Ѵ�. �ܾ��� �ִ� ���̴� 20���̴�.
��� ����
[���α׷� ���]
�̾���� ���ڿ��� ����Ѵ�.
�Է� ���� ����
incheon national university
��� ���� ����
incheonnationaluniversity*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
void wordcat(char* str1, char(*str2)[21], int n) {
    int idx = 0, j = 0;
    for (int i = 0; i < n; i++) {
        j = 0;
        while (str2[i][j] != NULL) {
            str1[idx] = str2[i][j];
            j++;
            idx++;
        }
    }
    str1[idx] = NULL;
}
// ===================================================

int main()
{
    char word[3][21];
    char wordsequence[63];
    int idx = 3;

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", word[i]);
    }

    wordcat(wordsequence, word, idx);

    printf("%s\n", wordsequence);

    return 0;
}
#endif

#if 0
/*9���� ����
[ findalphamax ]

�ִ� ���� 100���� ���ڿ� 3���� ����� 2���� �迭 str�� �־�����.
str�� �� ���ڿ��� ����, ���� �ҹ��� ���ĺ� ���ڰ� ���� ���� ���� ���ڿ��� �ε����� ��ȯ�ϴ�
findalphamax �Լ��� �����Ͻÿ�.
�ε����� ������ 0-2�̸�, ���� ���ĺ��� ���� ���� ���� ���ڿ��� �׻� �ϳ��� �����Ѵ�.

���� �Լ����� findalphamax �Լ��� ȣ�� �κ��� �����Ͽ� �Լ��� �Ķ���͸� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.

#include <stdio.h>
#include <stdlib.h>

// ================== �ڵ� �ۼ� ���� ==================



// ===================================================

int main(int argc, char const *argv[])
{
    char str[3][101] = {0};
    gets(str[0]);
    gets(str[1]);
    gets(str[2]);

    int n = find_alpha_max(str, 3);

    printf("%s", str[n]);

    return 0;
}
�Է� ����
[���α׷� �Է�]
�ִ� ���̰� 100���� ���ڿ� 3���� �ٹٲ����� ������ �Է��Ѵ�.
��� ����
[���α׷� ���]
���ڿ����� ���� �ҹ��� ���ĺ� ������ ���� ���� ���� ���ڿ��� ����Ѵ�.
�Է� ���� ����
incheon
banananana
apple
��� ���� ����
banananana*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ================== �ڵ� �ۼ� ���� ==================
int find_alpha_max(char(*str)[101], int m) {
    int max = 0, idx = 0, allmax = 0;
    for (int i = 0; i < m; i++) {
        int arr[26] = { 0 };
        max = 0;
        for (int j = 0; str[i][j] != NULL; j++) {
            arr[str[i][j] - 'a']++;
        }
        for (int j = 0; j < 26; j++) {
            if (arr[j] > max) max = arr[j];
        }
        if (max > allmax) {
            allmax = max;
            idx = i;
        }
    }
    return idx;
}
// ===================================================

int main(int argc, char const* argv[])
{
    char str[3][101] = { 0 };
    gets(str[0]);
    gets(str[1]);
    gets(str[2]);

    int n = find_alpha_max(str, 3);

    printf("%s", str[n]);

    return 0;
}
#endif

#if 0
/*10���� ����
[ 3byte reverse - fix range ]
�� 3���� ����� unsigned int�迭�� unsigned char*�� �޾�
�Ʒ� �̹����� ���� ������ ��ġ�� �ٲٴ�
void reverse_3_byte(unsigned char *dp) �Լ��� �����Ͻÿ�.

< ���ǻ��� >
�߰� ������� ��� ���� �� �ڵ� �ۼ� ���� �� ���� ����.
���� �ۼ��� �Լ� �̿��� �Լ��� ����� �� ����. (printf ��)
�� ���� ���� �� �������� ó����.
���õ� ������ ���û����� ����� ������ ��.



#include <stdio.h>

void reverse_3_byte(unsigned char *dp)
{
// ================== �ڵ� �ۼ� ���� ==================



// ===================================================
}


int main(int argc, char const *argv[])
{
    unsigned int data[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        scanf("%u", data + i);
    }

    reverse_3_byte((unsigned char *)data);

    for (int i = 0; i < 3; i++)
    {
        printf("%u ", data[i]);
    }

    return 0;
}

�Է� ����
[���α׷� �Է�]
3���� unsigned int ���� �Է��Ѵ�.

��� ����
[���α׷� ���]
��ȯ�� �Ϸ�� ������ unsigned int������ ����Ѵ�.
�Է� ���� ����
1 256 512
��� ���� ����
2 0 257
Hint*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_3_byte(unsigned char* dp)
{
    // ================== �ڵ� �ۼ� ���� ==================
    for (int i = 0; i < 3; i++) {
        unsigned char s;
        s = dp[i];
        dp[i] = dp[9 + i];
        dp[9 + i] = s;
    }
    for (int i = 0; i < 3; i++) {
        unsigned char s;
        s = dp[3 + i];
        dp[3 + i] = dp[6 + i];
        dp[6 + i] = s;
    }
    // ===================================================
}


int main(int argc, char const* argv[])
{
    unsigned int data[3] = { 0 };

    for (int i = 0; i < 3; i++)
    {
        scanf("%u", data + i);
    }

    reverse_3_byte((unsigned char*)data);

    for (int i = 0; i < 3; i++)
    {
        printf("%u ", data[i]);
    }

    return 0;
}

#endif

#if 0
/*����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
void wordcat(char* wordsequence, char(*word)[21], int idx) {
    char* ptr = wordsequence;
    char* ptr1 = word[0];
    char* ptr2 = word[1];
    char* ptr3 = word[2];
    while (*ptr1 != NULL) {
        *wordsequence = *ptr1;
        ptr1++;
        wordsequence++;
    }
    while (*ptr2 != NULL) {
        *wordsequence = *ptr2;
        ptr2++;
        wordsequence++;
    }
    while (*ptr3 != NULL) {
        *wordsequence = *ptr3;
        ptr3++;
        wordsequence++;
    }
    *wordsequence = NULL;
    wordsequence = ptr;
}
// ===================================================

int main()
{
    char word[3][21];
    char wordsequence[63];
    int idx = 3;

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", word[i]);
    }

    wordcat(wordsequence, word, idx);

    printf("%s\n", wordsequence);

    return 0;
}
#endif

#if 0
// ��
//strcmp�� Ȱ���� ������ ����
#include <stdio.h>

// ================== �ڵ� �ۼ� ���� ==================
int str2cmp(char* str1, char* str2) {
    char* ptr1 = str1;
    char* ptr2 = str2;
    while (*ptr1 != NULL && *ptr2 != NULL) {
        if (*ptr1 == *ptr2) {

        }
        else if (*ptr1 > *ptr2) {
            return 1;
        }
        else return -1;
        ptr1++;
        ptr2++;

    }
    return 0;
}
void dictionary(char** str, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (str2cmp(str[i], str[k]) > 0) {
                char* temp = str[i];
                str[i] = str[k];
                str[k] = temp;
            }
        }
    }
}

// ===================================================


int main(int argc, char const* argv[])
{
    char* str[10];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        str[i] = malloc(sizeof(char) * 101);
        scanf("%s", str[i]);
    }

    dictionary(&str, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
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

