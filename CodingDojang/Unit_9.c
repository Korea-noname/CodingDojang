/* 다음 소스 코드를 완성하여 "Hello   world"가 각 줄에 두 번 출력되게 만드세요("Hello"와 "world" 사이는 탭으로 띄웁니다).

정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다.*/

#include <stdio.h>
 
int main()
{
    char c1;
    char c2;
    char c3;
 
    /* 정답 */
    c1 = '\t'; // 9 
    c2 = '\n'; // 13  ASCII코드 번호도 되는데, 정답으로는 인정이 안됌
    c3 = '\t';
    /* 부분 */

    printf("Hello%cworld%cHello%cworld\n", c1, c2, c3);
 
    return 0;
}