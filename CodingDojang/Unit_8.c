/* 다음 소스 코드를 완성하여 1.800000 2.900000 3.700000과 4 8이 출력되게 만드세요.

정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다. */

#include <stdio.h>
 
int main()
{   
    /* 정답 */
    float num1 = 1.8f;
    double num2 = 2.9;
    /* 부분 */
    long double num3 = 3.7l;
 
    printf("%f %f %Lf\n", num1, num2, num3);
    printf("%d %d\n", sizeof(num1), sizeof(num2));
 
    return 0;
}