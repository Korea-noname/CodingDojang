/*ǥ�� �Է����� ���ڰ� �Էµ˴ϴ�. �Էµ� ���ڰ� a�̸� "a�Դϴ�."�� ����ϰ�, a�� �ƴϸ� "a�� �ƴմϴ�."�� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word;
	scanf("%c", &word);

	if (97 == word) //'a'�� �����̱� ��
		printf("a�Դϴ�.");
	else
		printf("a�� �ƴմϴ�.");

	return 0;
}