/*ǥ�� �Է����� ���� ����(�Ǽ�)�� �Էµ˴ϴ�.���� �ҽ� �ڵ带 �ϼ��Ͽ� ���� ���̰� ��µǰ� ���弼��.��, �������� M_PI�� ����ϼ���.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    float diameter;
    float radius;
    float area;

    scanf("%f", &diameter);

    diameter /= 2;
    area = M_PI * (diameter * diameter);

        printf("%f\n", area);

    return 0;
}