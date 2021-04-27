/* 다음 소스 코드를 완성하여 0 0 -128이 출력되게 만드세요.

정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다. */

#include <stdio.h> 

int main()
{
    /* 정답 */short num1;
    /*      */ int num2;
    /* 부분 */char num3;
 
    num1 = 65536;
    num2 = 4294967296;
    num3 = 128;
 
    printf("%u %u %d\n", num1, num2, num3);
 
    return 0;
}