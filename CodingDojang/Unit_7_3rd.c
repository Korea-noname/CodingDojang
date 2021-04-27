/*다음 소스 코드를 완성하여 -128 0 -2147483648 0 -9223372036854775808가 출력되게 만드세요.

정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다.*/

#include <stdio.h>
/* 정답 */ 
#include <limits.h>
/* 부분 */

int main()
{
    char num1 = CHAR_MIN;
    unsigned short num2 = 0;
    int num3 = INT_MIN;
    unsigned long num4 = 0;
    long long num5 = LLONG_MIN;
 
    printf("%d %u %d %lu %lld\n", num1, num2, num3, num4, num5);
 
    return 0;
}