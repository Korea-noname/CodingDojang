/*ǥ�� �Է����� �� ������ ���� �ϳ��� �Էµ˴ϴ�.�Էµ� ������ �� �ڸ����� �������� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).���� ��� 43561�̶�� 1 6 5 3 4�� ����ϸ� �˴ϴ�.�� �ڸ����� �������� ��켼��.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);
	
	printf("%d ", num % 10);
	num = num / 10;
	printf("%d ", num % 10);
	num = num / 10;
	printf("%d ", num % 10);
	num = num / 10;
	printf("%d ", num % 10);
	num = num / 10;
	printf("%d ", num % 10);
	num = num / 10;

	return 0;
}