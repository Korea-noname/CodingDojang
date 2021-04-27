/* 다음 소스 코드를 완성하여 -2.225074e-308 0x1285 9223372036854775807가 출력되게 만드세요.

정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다. */

#include <stdio.h>
 
int main()
{
    const /*정답*/long double con1 = -2.225074e-308L/*부분*/;
    const int con2 = 0x1285;
    const long long con3 = 9223372036854775807LL;
 
    printf("%Le 0x%x %lld\n", con1, con2, con3);
 
    return 0;
}