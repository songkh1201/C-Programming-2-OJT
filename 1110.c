#if 0
/*문제 설명
[ strlen 함수 ]

size_t strlen(const char* str) 함수는 문자열의 길이를 반환하는 C 표준 라이브러리 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.

#include <stdio.h>

// ======== 코드 작성 영역 ========
size_t strlen(const char* str) {



}
// ===============================

int main() {

	char buffer[100];
	gets(buffer);
	printf("%zu", strlen(buffer));

	return 0;
}



입력 설명
문자열을 입력한다.
출력 설명
문자열의 길이를 출력한다.
입력 예시 복사
"I am a student at Incheon National University."
출력 예시 복사
49*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*문제 설명
[ strcnt 함수 ]


size_t strcnt(const char* str, char c) 함수는 입력한 문자열에서 특정 문자의 개수를 세어 반환하는 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ======== 코드 작성 영역 ========
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

입력 설명
첫째 줄에 문자열을 입력한다.
둘째 줄에 찾을 문자 한 개를 입력한다.
출력 설명
문자열에서 찾는 문자의 개수를 세어 출력한다.
대소문자를 구분한다.
입력 예시 복사
"I am a student at Incheon National University."
i
출력 예시 복사
3*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*문제 설명
[ conv_strcpy ]

char* conv_strcpy(char* dest, const char* src, char find, char replace) 함수는 문자열과 문자 두개를 입력받아
문자열(src)에서 특정 문자(find)를 모두 찾아 다른 문자(replace)로 바꾸어 새로운 문자열(dest)에 저장하는 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.

#include <stdio.h>

// ======== 코드 작성 영역 ========
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

입력 설명
첫째 줄에 문자열을 입력한다.
둘째 줄에 찾을 문자(find)와 바꿀 문자(replace)를 입력한다.
출력 설명
문자열에서 문자를 찾아 바꾼 문자열을 출력한다.
대소문자를 구분한다.
입력 예시 복사
I am a student at Incheon National University.
a A
출력 예시 복사
I Am A student At Incheon NAtionAl University.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*문제 설명
[ stricat 함수 ]

char* stricat(char* dest, const char* src) 함수는 문자열 두개를 입력받아
문자열(dest)의 앞에 문자열(src)을 붙여 넣는 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ======== 코드 작성 영역 ========

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

입력 설명
첫째 줄에 문자열(dest)을 입력한다.
출력 설명
문자열에서 문자를 찾아 바꾼 문자열을 출력한다.
대소문자를 구분한다.
입력 예시 복사
I have a pen.
I have an apple.
출력 예시 복사
I have an apple.I have a pen.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========

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
/*[ 3 byte 저장하기 업그레이드! ]

3바이트 n개 값을 합쳐 unsigned int 배열 data에 빈틈없이 저장하고,
그 결과를 공백으로 구분하여 출력하는 프로그램을 작성하시오.
단, data의 마지막 덩어리에 남는 바이트는 0으로 채운다.
입력 설명
첫째 줄에 100 이하의 양의 정수 n을 입력한다.
둘째 줄에 n개의 0 ~ 2^24 - 1 사이의 정수를 공백으로 구분하여 입력한다.
출력 설명
입력한 3바이트 정수들을 모아붙여
unsigned int 배열에 저장한 결과를 공백으로 구분하여 출력한다.
입력 예시 복사
7
7 256 1 4 3 2 1
출력 예시 복사
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
/*문제 설명
[ strstr 함수 ]

char* strstr(const char* str, const char* substr) 함수는
하나의 문자열(str) 내에서 다른 문자열(substr)이 처음으로 나타나는 위치의 포인터를 반환하는 C 표준 라이브러리 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ======== 코드 작성 영역 ========
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


입력 설명
첫째 줄에 검사항 문자열 str을 입력한다.
둘째 줄에 찾을 문자열 substr을 입력한다.
출력 설명
str 안에서 substr이 나타나는 위치를 찾아 그 위치를 가리키는 포인터를 반환한다.
찾고자 하는 문자열이 없으면 NULL 포인터를 반환한다.
입력 예시 복사
I am a student at Incheon National University.
at
출력 예시 복사
15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*문제 설명
[ 단어 단위 뒤집기 ]

문자열 source를 단어 단위로 뒤집어 문자열 destination에 저장하는 함수
void reverseStringAtSpace(char *destination, char *source)를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ======== 코드 작성 영역 ========



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

입력 설명
알파벳과 공백으로 구성된 문자열을 입력한다.
출력 설명
단어 단위로 뒤집은 문자열을 출력한다.
입력 예시 복사
Do you like my car
출력 예시 복사
car my like you Do*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*문제 설명
[ 단어 내부 뒤집기 ]

문자열을 입력받고, 각 단어의 내부만을 뒤집어 출력하는 프로그램을 작성하시오.
입력 설명
알파벳과 공백으로 이루어진 문자열을 입력한다.
문자열은 최대 100자이다.
출력 설명
문자열의 각 단어의 내부를 뒤집어 출력한다.
입력 예시 복사
I wanna race for you
출력 예시 복사
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
/*문제 설명
[ 숫자를 문자열로 ]

unsigned int n과 char *destination을 인자로 받아,
destination에 n을 10진수로 작성하는 함수
void uint2str(char* destination, unsigned int n)을 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ======== 코드 작성 영역 ========



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



입력 설명
unsigned int 범위의 10진 정수를 입력한다.
출력 설명
입력한 수가 출력된다.
입력 예시 복사
1234556
출력 예시 복사
1234556*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*문제 설명
[ 문자열이 100개~! ]

문자열 n개를 입력받고,
입력받은 반대 순서로 문자열을 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 1 이상 100 이하의 정수 n을 입력한다.
둘째 줄 부터 n줄에 걸쳐 알파벳과 공백으로 구성된 문자열 n개를 입력한다.
단, 각 문자열의 길이는 최대 50자이다.
출력 설명
입력한 반대 순서로 문자열들을 출력한다.
입력 예시 복사
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
출력 예시 복사
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
/*중간고사 9번*/
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
/*혜림*/
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
	for (int i = len_dest + len_src; i >= len_src; i--) { // src길이만큼 땡기기
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
/*혜림*/
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
/*혜림*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void uint2str(char* destination, unsigned int n) {
	// ======== 코드 작성 영역 ========

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
/*근호*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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
/*규현*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ======== 코드 작성 영역 ========
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

