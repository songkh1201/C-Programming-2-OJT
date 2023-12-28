/*巩力 A: 1103_00*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* p, int* q) {

    // ====== 内靛 累己 康开 ======
    int tmp = *p;
    *p = *q;
    *q = tmp;
    // ============================
}

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}
#endif

/*巩力 B: 1103_01*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void arraysum(unsigned int* arr, int size, int* sum) {
    // ========= 内靛 累己 康开 =========
    for (int i = 0; i < size; i++) *sum += arr[i];
    // ============================
}

int main() {
    int n;
    scanf("%u", &n);

    unsigned int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%u", &arr[i]);
    }

    int sum = 0;
    arraysum(arr, n, &sum);

    printf("%d", sum);

    return 0;
}

#endif

/*巩力 C: 1103_02*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(unsigned int* i, unsigned int* j, int* k) {

    // ========= 内靛 累己 康开 =========
    int tmp = *i;
    *i = *j;
    *j = tmp;
    int len = 0;
    for (; k[len] >= 0; len++);
    for (int p = 0; p < len / 2; p++) {
        int tmp2 = k[p];
        k[p] = k[len - p - 1];
        k[len - p - 1] = tmp2;
    }
    // ============================
}

int main() {
    int k[100] = { 0, };
    unsigned int i = 0, j = 0;
    int n = 0, idx = 0;


    scanf("%d %d", &i, &j);
    while (1) {
        scanf("%d", &n);
        k[idx] = n;
        if (n < 0) {
            break;
        }
        idx++;
    }

    reverse(&i, &j, k);

    printf("%d %d ", i, j);
    idx = 0;
    while (1) {
        printf("%d ", k[idx]);
        if (k[idx] < 0) {
            break;
        }
        idx++;
    }

    return 0;
}
#endif

/*巩力 D: 1103_03*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char n[4];
    scanf("%u", &n[0]);
    for (int i = 0; i < 4; i++) printf("%hhu ", n[i]);
    return 0;
}
#endif

/*巩力 E: 1103_04*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compression(char* sequence, char* result) {

    // ====== 内靛 累己 康开 ======
    int idx = 0;
    for (int i = 0; sequence[i] != NULL; i++) {
        int cnt = 0;
        result[idx] = sequence[i];
        for (int j = i; sequence[j] == sequence[i]; j++) cnt++;
        sprintf(result, "%s%d", result, cnt);
        i += cnt - 1;
        if (cnt < 10) idx += 2;
        else if (cnt < 100)idx += 3;
        else idx += 4;
    }
    // ===========================
}

int main() {
    char sequence[101];
    char result[201] = "";

    scanf("%100s", sequence);
    compression(sequence, result);

    printf("%s\n", result);

    return 0;
}
#endif

/*巩力 F: 1103_05*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void get_integers(int n, unsigned int* p)
{
    // ====== 内靛 累己 康开 =======
    for (int i = 0; i < n; i++) scanf("%u", &p[i]);
    // ============================
}

int main(int argc, char const* argv[])
{
    int n;
    unsigned int arr[100];
    scanf("%d", &n);
    get_integers(n, arr);
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        printf("%u ", arr[n]);
    }
    return 0;
}
#endif

/*巩力 G: 1103_06*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char n[4];
    scanf("%hhu %hu %hhu", &n[0], &n[1], &n[3]);
    printf("%u", *(unsigned int*)n);
    return 0;
}
#endif

/*巩力 H: 1103_07*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    unsigned char n[13];
    for (int i = 0; i < 12; i += 3) scanf("%u", &n[i]);
    for (int i = 0; i < 12; i += 4) printf("%u ", *(unsigned int*)&n[i]);
    return 0;
}
#endif

/*巩力 I: 1103_08*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    unsigned char n[12];
    for (int i = 0; i < 12; i += 4) scanf("%u", &n[i]);
    for (int i = 0; i < 12; i += 3) printf("%u ", *(unsigned int*)&n[i] & 0x00FFFFFF);
    return 0;
}
#endif

/*巩力 J: 1103_09*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    unsigned char data[12], a_n[12], res[12];
    for (int i = 0; i < 12; i++) scanf("%hhu", &data[i]);
    for (int i = 0; i < 12; i++) scanf("%hhu", &a_n[i]);
    for (int i = 0; i < 12; i++) res[i] = data[a_n[i]];
    for (int i = 0; i < 12; i += 4) printf("%u ", *(unsigned int*)&res[i]);
    return 0;
}
#endif

/*巩力 K: 1110_00*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========
size_t strlen(const char* str) {
    int len = 0;
    while (*str++ != NULL) len++;
    return len;
}
// ===============================

int main() {

    char buffer[100];
    gets(buffer);
    printf("%zu", strlen(buffer));

    return 0;
}
#endif

/*巩力 L: 1110_01*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========
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

/*巩力 M: 1110_02*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========
char* conv_strcpy(char* dest, const char* src, char find, char replace) {
    char* s = dest;
    while (*src != NULL) {
        if (*src == find) *s = replace;
        else *s = *src;
        src++;
        s++;
    }
    *s = NULL;
    return dest;
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

/*巩力 N: 1110_03*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========

char* stricat(char* dest, const char* src) {
    int len1 = 0, len2 = 0;
    char* s1 = dest, * s2 = src;
    while (*s1++ != NULL)len1++;
    while (*s2++ != NULL)len2++;
    for (int i = len1 + len2 - 1; i >= len2; i--) *(dest + i) = *(dest + i - len2);
    for (int i = 0; i < len2; i++) *(dest + i) = *(src + i);
    *(dest + len1 + len2) = NULL;
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

/*巩力 O: 1110_04*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n;
    unsigned char data[300] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%u", &data[i * 3]);
    for (int i = 0; i < n * 3; i += 4) printf("%u ", *(unsigned int*)&data[i]);
    return 0;
}
#endif

/*巩力 P: 1110_05*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========
char* strstr(const char* str, const char* substr) {
    char* s1 = str, * s2 = substr;
    while (*s1 != NULL) {
        if (*s1 == *s2) {
            int idx = 0;
            while (*(s1 + idx) == *s2 && *s2 != NULL) {
                s2++;
                idx++;
            }
            if (*s2 == NULL) {
                return s1;
            }
            s2 = substr;
        }
        s1++;
    }
    return NULL;
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

/*巩力 Q: 1110_06*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========
void reverseStringAtSpace(char* destination, char* source) {
    char* s1 = destination, * s2 = source;
    int len = 0, idx = 0;
    while (*s2++ != NULL) len++;
    s2 = source;
    for (int i = 0; i < len; i++) *(s1 + i) = *(s2 + len - i - 1);
    while (*s1!= NULL) {
        len = 0;
        for (; *(s1 + len) != ' ' && *(s1 + len) != NULL; len++);
        for (int i = 0; i < len / 2; i++) {
            char tmp = *(s1 + i);
            *(s1 + i) = *(s1 + len - i - 1);
            *(s1 + len - i - 1) = tmp;
        }
        s1 += len + 1;
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

/*巩力 R: 1110_07*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char s[101] = { 0 }, * p;
    int len;
    gets(s);
    p = s;
    while (*p != NULL) {
        for (len = 0; *(p + len) != ' ' && *(p + len) != NULL; len++);
        for (int i = 0; i < len / 2; i++) {
            char tmp = *(p + i);
            *(p + i) = *(p + len - i - 1);
            *(p + len - i - 1) = tmp;
        }
        p += len + 1;
    }
    puts(s);
    return 0;
}
#endif

/*巩力 S: 1110_08*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 内靛 累己 康开 ========
void uint2str(char* destination, unsigned int n) {
    int len = 0, flag = 1;
    while (n > 0 || flag) {
        *(destination + len) = n % 10 + '0';
        n /= 10;
        flag = 0;
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char tmp = *(destination + i);
        *(destination + i) = *(destination + len - i - 1);
        *(destination + len - i - 1) = tmp;
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

/*巩力 T: 1110_09*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char s[100][51];
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) gets(s[i]);
    for (int i = n - 1; i >= 0; i--) puts(s[i]);
    return 0;
}
#endif

/*巩力 U: 1117_00*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ============== 内靛 累己 康开 ==============
void printstring(char* data[10]) {
    for (int i = 0; i < 10; i++) puts(data[i]);
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

/*巩力 V: 1117_01*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#define _MSIZE(ptr) malloc_usable_size(ptr)
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// ============== 内靛 累己 康开 ==============

void allocate_memory(int** p, int n) {
    *p = (int*)malloc(n * sizeof(int));
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

/*巩力 W: 1117_02*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 内靛 累己 康开 ==============
void generate_format_string(char* str, int a, int b, int c, int d)
{
    int idx = 0, n[4] = { a,b,c,d };
    for (int i = 0; i < 4; i++) {
        if (n[i] == 1) {
            *(str + idx) = '%';
            idx++;
            *(str + idx) = 'c';
            idx++;
        }
        else if (n[i] == 2) {
            *(str + idx) = '%';
            idx++;
            *(str + idx) = 'd';
            idx++;
        }
        else if (n[i] == 3) {
            *(str + idx) = '%';
            idx++;
            *(str + idx) = 'h';
            idx++;
            *(str + idx) = 'u';
            idx++;
        }
        else if (n[i] == 4) {
            *(str + idx) = '%';
            idx++;
            *(str + idx) = 'h';
            idx++;
            *(str + idx) = 'h';
            idx++;
            *(str + idx) = 'u';
            idx++;
        }
    }
    *(str + idx) = NULL;
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

/*巩力 X: 1117_03*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 内靛 累己 康开 ==============

int strchr_start_pos(char* str, char c, int pos)
{
    int idx = pos;
    str += pos;
    while (*str != NULL) {
        if (*str == c) return idx;
        idx++;
        str++;
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

/*巩力 Y: 1117_04*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
    char** s;
    int n;
    scanf("%d", &n);
    s = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        *(s + i) = (char*)malloc(101 * sizeof(char));
        scanf("%s", *(s + i));
    }
    for (int i = n - 1; i >= 0; i--) printf("%s\n", *(s + i));
    return 0;
}
#endif

/*巩力 Z: 1117_05*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 内靛 累己 康开 ==============

unsigned int str2uint(char* str)
{
    unsigned int n = 0;
    int len = 0;
    char* s = str;
    while (*s++ != NULL) len++;
    for (int i = 0; i < len; i++) {
        n += *str - '0';
        if (i != len - 1) {
            n *= 10;
        }
        str++;
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

/*巩力 AA: 1117_06*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 内靛 累己 康开 ==============

char* uint2str_with_jinbeob(char* str, unsigned int n, int x)
{
    int len = 0, flag = 1;
    while (n > 0 || flag) {
        *(str + len) = n % x + '0';
        n /= x;
        len++;
        flag = 0;
    }
    for (int i = 0; i < len / 2; i++) {
        char tmp = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i - 1) = tmp;
    }
    return str;
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

/*巩力 AB: 1117_07*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 内靛 累己 康开 ==============

char* enhanced_strstr(char* str, char* str2)
{
    static char* s = NULL;
    char* s2 = str2;
    int idx = 0;
    if (str != NULL) s = str;
    else s++;
    while (*s != NULL) {
        if (*s == *str2) {
            int len = 0;
            while (*(s + len) == *str2 && *(s + len) != NULL) {
                str2++;
                len++;
            }
            if (*str2 == NULL) {
                return s;
            }
        }
        str2 = s2;
        s++;
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

/*巩力 AC: 1117_08*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ============== 内靛 累己 康开 ==============

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

/*巩力 AD: 1117_09*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n;
    unsigned char arr[400] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%u", &arr[i * 4]);
    for (int i = 0; i < n * 4; i += 3) printf("%u ", *(unsigned int*)&arr[i] & 0x00FFFFFF);
    return 0;
}
#endif

/*巩力 AE: 1124_00*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bitCount(unsigned int* data, int n)
{
    // ================== 内靛 累己 康开 ==================
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

/*巩力 AF: 1124_01*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_3_byte(unsigned char* dp)
{
    // ================== 内靛 累己 康开 ==================
    for (int i = 0; i < 3; i++) {
        unsigned char tmp = dp[i];
        dp[i] = dp[i + 9];
        dp[i + 9] = tmp;
        tmp = dp[3 + i];
        dp[3 + i] = dp[6 + i];
        dp[6 + i] = tmp;
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

/*巩力 AG: 1124_02*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 内靛 累己 康开 ==================
void shiftRL(unsigned int* data, int x) {
    for (int i = 0; i < 20; i++) {
        if (i % 2) data[i] <<= x;
        else data[i] >>= x;
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

/*巩力 AH: 1124_03*/
#if 0
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

/*巩力 AI: 1124_04*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// ================== 内靛 累己 康开 ==================
void insert_str(char* str, char* str2, int n) {
    char* s1 = str, * s2 = str2;
    int len1 = 0, len2 = 0;
    while (*s1++ != NULL) len1++;
    while (*s2++ != NULL) len2++;
    s1 = str;
    s2 = str2;
    for (int i = len1 + len2; i >= len2 + n; i--) {
        *(s1 + i) = *(s1 + i - len2);
    }
    for (int i = n; i < n + len2; i++) {
        *(s1 + i) = *(s2 + i - n);
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

/*巩力 AJ: 1124_05*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 内靛 累己 康开 ==================
int str2cmp(char(*str)[101]) {
    char* s1 = str[0], * s2 = str[1];
    while (*s1 != NULL && *s2 != NULL) {
        if (*s1 > *s2) return 1;
        else if (*s1 < *s2) return -1;
        s1++;
        s2++;
    }
    if (*s1 == NULL && *s2 != NULL) return -1;
    else if (*s1 != NULL && *s2 == NULL) return 1;
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

/*巩力 AK: 1124_06*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 内靛 累己 康开 ==================
void int_to_base16str(char* str, unsigned int n) {
    char arr[16] = "0123456789ABCDEF";
    int len = 0, flag = 1;
    while (n > 0 || flag) {
        *(str + len) = arr[n % 16];
        n /= 16;
        flag = 0;
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char tmp = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i - 1) = tmp;
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

/*巩力 AL: 1124_07*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 内靛 累己 康开 ==================
void uint2str(char* data) {
    unsigned int n = *(unsigned int*)data;
    int len = 0;
    data[0] = '0';
    while (n > 0) {
        *(data + len) = n % 10 + '0';
        n /= 10;
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char tmp = *(data + i);
        *(data + i) = *(data + len - i - 1);
        *(data + len - i - 1) = tmp;
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

/*巩力 AM: 1124_08*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 内靛 累己 康开 ==================
void wordcat(char* str, char(*str2)[21], int n) {
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; str2[i][j] != NULL; j++) {
            *(str + idx) = str2[i][j];
            idx++;
        }
    }
    *(str + idx) = NULL;
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

/*巩力 AN: 1124_09*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ================== 内靛 累己 康开 ==================
int find_alpha_max(char(*str)[101], int n) {
    int max = 0, idx = 0, max2 = 0;
    for (int i = 0; i < n; i++) {
        int arr[26] = { 0 };
        max = 0;
        for (int j = 0; str[i][j] != NULL; j++) {
            arr[str[i][j] - 'a']++;
        }
        for (int j = 0; j < 26; j++) {
            if (arr[j] > max) max = arr[j];
        }
        if (max > max2) {
            max2 = max;
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

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/*窃荐 ** */
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ================== 内靛 累己 康开 ==================
void change(char** s) {
    s[0][0] = 'a';

    int p;
}
// ===================================================

int main(int argc, char const* argv[])
{
    char str[3][101] = { 0 };
    gets(str[0]);
    gets(str[1]);
    gets(str[2]);

    change(str);

    for (int i = 0; i < 3; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
#endif

/*10官捞飘 肺抛捞记*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    unsigned char arr[10];
    int x, n;
    for (int i = 0; i < 10; i++) scanf("%hhu", &arr[i]);
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        n = arr[9] & 1;
        for (int j = 9; j > 0; j--) {
            arr[j] = (arr[j] >> 1) | (arr[j - 1] << 7);
        }
        arr[0] >>= 1;
        arr[0] |= n << 7;
    }
    for (int i = 0; i < 10; i++) printf("%hhu ", arr[i]);
    return 0;
}
#endif

/*10官捞飘 葛技 肺抛捞记*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    unsigned char arr[10];
    int x, n1, n2;
    for (int i = 0; i < 10; i++) scanf("%hhu", &arr[i]);
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        n1 = arr[0] & (1 << 7);
        n2 = arr[9] & 1;
        for (int j = 0; j < 4; j++) {
            arr[j] = (arr[j] << 1) | (arr[j + 1] >> 7);
        }
        for (int j = 9; j > 5; j--) {
            arr[j] = (arr[j] >> 1) | (arr[j - 1] << 7);
        }
        arr[4] = (arr[4] << 1) | (n1 >> 7);
        arr[5] = (arr[5] >> 1) | (n2 << 7);
    }
    for (int i = 0; i < 10; i++) printf("%hhu ", arr[i]);
    return 0;
}
#endif

/*牢玫措绵力*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
union un {
    char a;
    short b;
    int c;
};
int main() {
    union un u;
    u.c = 1000000;
    printf("%hhu", u);
    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

/**/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    return 0;
}
#endif

