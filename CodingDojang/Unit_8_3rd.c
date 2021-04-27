/* 다음 소스 코드를 완성하여 -inf가 출력되게 만드세요.

정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다. */

#include <stdio.h>
#include <float.h>
 
int main()
{
    float num1 = /* 정답 */-FLT_MAX/* 부분 */;
 
    num1 = num1 * 1000.0f;
 
    printf("%f\n", num1);
 
    return 0;
}