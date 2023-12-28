#if 0
/*1문제 설명
[ 배열에서 비트 1의 개수 찾기 ]

n개의 unsigned int 값이 저장된 배열이 주어진다.
배열의 포인터와 정수 n의 값을 인자로 받아,
배열에 저장된 정수들의 이진표현에서 1로 설정된 비트의 총 개수를 세어 그 값을 반환하는
int bitCount(unsigned int *data, int n) 함수를 구현하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.


#include <stdio.h>

int bitCount(unsigned int *data, int n)
// ================== 코드 작성 영역 ==================


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
입력 설명
[프로그램 입력]
첫째 줄에 정수 n을 입력한다. (n <= 100)
둘째 줄에 n개의 unsigned int 값을 공백으로 구분해 입력한다.
출력 설명
[프로그램 출력]
입력받은 정수들의 이진표현에서 1로 설정된 비트의 총 개수를 출력한다.
입력 예시 복사
4
29 7 15 31
출력 예시 복사
16*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bitCount(unsigned int* data, int n)
// ================== 코드 작성 영역 ==================
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
/*2문제 설명
[ 홀수 인덱스는 왼쪽, 짝수 인덱스는 오른쪽 ]

2개의 행에 unsigned int형 정수가 20개씩 저장된 2차원 배열이 주어진다.

2차원 배열의 포인터를 인자로 받아, 2차원 배열의 각 행에 대해
짝수 번 인덱스의 정수 값은 오른쪽으로 x번 시프트하고,
홀수 번 인덱스의 정수 값은 왼쪽으로 x번 시프트하는
shiftRL 함수를 구현하시오.

메인 함수에서 shiftRL 함수의 호출 부분을 참고하여 함수의 파라미터를 구성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.


#include <stdio.h>

// ================== 코드 작성 영역 ==================



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
입력 설명
[프로그램 입력]
첫째 줄에 20개의 unsigned int형 정수를 공백으로 구분해 입력한다.
둘째 줄에 각 정수를 시프트 할 횟수 x를 입력한다. x는 0 이상 32 미만이다.
출력 설명
[프로그램 출력]
2차원 배열에서 각 행의 홀수 번 인덱스의 정수 값은 왼쪽으로 x번,
짝수 번 인덱스의 값은 오른쪽으로 x번 시프트한 결과를 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
4
출력 예시 복사
0 32 0 64 0 96 0 128 0 160 0 192 0 224 0 256 1 288 1 320*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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
/*3문제 설명
[ Rotation ]
unsigned int 값 n과 int 값 x를 입력받아,
n을 x번 오른쪽으로 Rotation 한 결과를 출력하는 프로그램을 작성하시오.

Rotation은 정수 n을 x만큼 오른쪽으로 시프트 시키며,
이동중인 비트가 오른쪽 끝에 다다르면 다시 왼쪽 끝에서부터 순환하여 이동하는 연산이다.
입력 설명
첫째 줄에 unsigned int 값 n을 입력한다.
둘째 줄에 int 값 x를 입력한다. (0 <= x <= 31)
출력 설명
입력받은 정수 n을 오른쪽으로 x번 Rotation 한 결과를 16진수 형태로 출력한다.
입력 예시 복사
1
30
출력 예시 복사
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
/*4문제 설명
[ 문자열 삽입하기 ]

주어진 문자열(str)의 특정 위치(pos)에 다른 문자열(istr)을 삽입하는
insert_str 함수를 구현하시오.

insert_str 함수는 원본 문자열(str)의 특정 위치(pos)에 다른 문자열(istr)을 삽입한다.
단, 원본 문자열(str)과 삽입할 문자열(istr)의 길이는 100자 이하이고,
특정 위치(pos)는 원본 문자열(str)의 길이보다 작거나 같다.

메인 함수에서 insert_str 함수의 호출 부분을 참고하여 함수의 파라미터를 구성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.



#include <stdio.h>

// ================== 코드 작성 영역 ==================



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

입력 설명
[프로그램 입력]
첫째 줄에 원본 문자열(str)을 입력한다.
둘째 줄에 삽입할 문자열(istr)을 입력한다.
셋째 줄에 삽입할 위치(pos)를 입력한다.
출력 설명
[프로그램 출력]
원본 문자열(str)의 특정 위치(pos)에 다른 문자열(istr)을 삽입한 결과를 출력한다.
입력 예시 복사
IncheonUniversity
National
7
출력 예시 복사
IncheonNationalUniversity*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

// ================== 코드 작성 영역 ==================
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
/*5문제 설명
[ str2cmp ]

최대 길이 100의 문자열 두개가 저장된 2차원 배열 str이 주어진다.
배열에서 0번 인덱스에 저장된 문자열을 str1, 1번 인덱스에 저장된 문자열을 str2라고 할 때,

2차원 배열의 포인터를 인자로 받아,
str1과 str2 문자열을 사전순으로 비교하여 어느 문자열이 먼저 나오는지 판단하는
str2cmp 함수를 구현하시오.

str2cmp 함수는 두 문자열의 아스키값을 비교하여
str1이 앞선다면 -1, 동일하다면 0, str2가 앞선다면 1을 반환해야 한다.
str1과 str2 문자열의 길이가 다르다면, 짧은 문자열이 앞선다고 판단한다.

메인 함수에서 str2cmp 함수의 호출 부분을 참고하여 함수의 파라미터를 구성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.


#include <stdio.h>

// ================== 코드 작성 영역 ==================



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

입력 설명
[프로그램 입력]
첫째 줄에 비교할 첫 번째 문자열(str1)을 입력한다.
둘째 줄에 비교할 두 번째 문자열(str2)을 입력한다.
출력 설명
[프로그램 출력]
str1과 str2를 사전순으로 비교한 결과를 출력한다.
str1이 앞설 경우 -1, 동일할 경우 0, str2가 앞설 경우 1을 출력한다.
입력 예시 복사
banana
bananb
출력 예시 복사
-1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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
/*6문제 설명
[ 16진수 변환기 ]

unsigned int 범위의 정수 n을 입력받아 16진법 형식의 문자열로 변환하여 str에 저장하는
void int_to_base16str(char *str, unsigned int n) 함수를 구현하시오.

16진법은 숫자 0-9와 대문자 알파벳 A-Z를 사용한다.
0-9까지 숫자는 그대로 사용되며 알파벳 A는 10, B는 11, ... , F는 15를 표현한다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.


#include <stdio.h>

// ================== 코드 작성 영역 ==================



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
입력 설명
[프로그램 입력]
unsigned int 범위의 정수 n을 입력한다.
출력 설명
[프로그램 출력]
입력받은 정수를 16진법 형식의 문자열로 변환하여 출력한다.
입력 예시 복사
1715004
출력 예시 복사
1A2B3C*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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
/*7문제 설명
[ uint2str ]

unsigned int 범위의 정수를 입력받아 10진법 형식의 문자열로 변환하는
void uint2str(char *data) 함수를 구현하시오.

data가 가리키는 곳에 unsigned int 크기의 값이 저장되어 있다.
해당 수를 문자열로 변환하여 data가 가리키는 곳에 저장하여야 한다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.


#include <stdio.h>

// ================== 코드 작성 영역 ==================



// ===================================================

int main(int argc, char const *argv[])
{
    char str[16] = {0};

    scanf("%u", (unsigned int *)str);

    uint2str(str);

    printf("%s", str);

    return 0;
}
입력 설명
[프로그램 입력]
unsigned int 범위의 정수 n을 입력한다.
출력 설명
[프로그램 출력]
정수 n을 문자열로 변환하여 출력한다.
입력 예시 복사
1234567
출력 예시 복사
1234567*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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
/*8문제 설명
[ word5cat ]

최대 길이 20자의 단어 3개가 저장된 2차원 배열 word가 주어진다.
word에 저장된 단어를 차례로 1차원 배열 wordsequence에 저장하는
wordcat 함수를 구현하시오.

메인 함수에서 wordcat 함수의 호출 부분을 참고하여 함수의 파라미터를 구성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.

#include <stdio.h>

// ================== 코드 작성 영역 ==================



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
입력 설명
[프로그램 입력]
3개의 단어를 공백으로 구분해 입력한다. 단어의 최대 길이는 20자이다.
출력 설명
[프로그램 출력]
이어붙인 문자열을 출력한다.
입력 예시 복사
incheon national university
출력 예시 복사
incheonnationaluniversity*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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
/*9문제 설명
[ findalphamax ]

최대 길이 100자의 문자열 3개가 저장된 2차원 배열 str이 주어진다.
str의 각 문자열에 대해, 같은 소문자 알파벳 문자가 가장 많이 나온 문자열의 인덱스를 반환하는
findalphamax 함수를 구현하시오.
인덱스의 범위는 0-2이며, 같은 알파벳이 가장 많이 나온 문자열은 항상 하나만 존재한다.

메인 함수에서 findalphamax 함수의 호출 부분을 참고하여 함수의 파라미터를 구성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.

#include <stdio.h>
#include <stdlib.h>

// ================== 코드 작성 영역 ==================



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
입력 설명
[프로그램 입력]
최대 길이가 100자인 문자열 3개를 줄바꿈으로 구분해 입력한다.
출력 설명
[프로그램 출력]
문자열에서 같은 소문자 알파벳 개수가 가장 많이 나온 문자열을 출력한다.
입력 예시 복사
incheon
banananana
apple
출력 예시 복사
banananana*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ================== 코드 작성 영역 ==================
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
/*10문제 설명
[ 3byte reverse - fix range ]
수 3개가 저장된 unsigned int배열을 unsigned char*로 받아
아래 이미지와 같이 값들의 위치를 바꾸는
void reverse_3_byte(unsigned char *dp) 함수를 구현하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음. (printf 등)
위 사항 적발 시 부정행위 처리함.
제시된 문제의 지시사항을 충실히 이행할 것.



#include <stdio.h>

void reverse_3_byte(unsigned char *dp)
{
// ================== 코드 작성 영역 ==================



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

입력 설명
[프로그램 입력]
3개의 unsigned int 값을 입력한다.

출력 설명
[프로그램 출력]
변환이 완료된 값들을 unsigned int형으로 출력한다.
입력 예시 복사
1 256 512
출력 예시 복사
2 0 257
Hint*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_3_byte(unsigned char* dp)
{
    // ================== 코드 작성 영역 ==================
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
/*시진*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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
// 뀨
//strcmp를 활용한 사전순 정렬
#include <stdio.h>

// ================== 코드 작성 영역 ==================
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

