#include <stdio.h>
#include <locale.h>
int main()
{
	int N = 9;
	int K = 34;
	setlocale(LC_ALL, "RUS");
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K+540);
	printf("�� �������� �������� %d ����� � %d �����\n", N + 5, 60 - K);
	printf("� 8.00 ������ %d ������\n", K * 60 + 3600);
	printf("������� ��� = %d/24 �����  � ������� ������ = %d/60 ����\n", N, K);




}