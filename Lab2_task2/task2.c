#include <stdio.h>
#include <locale.h>
int main()
{
	int N = 9;
	int K = 34;
	setlocale(LC_ALL, "RUS");
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K+540);
	printf("До полуночи осталось %d часов и %d минут\n", N + 5, 60 - K);
	printf("С 8.00 прошло %d секунд\n", K * 60 + 3600);
	printf("Текущий час = %d/24 суток  и текущая минута = %d/60 часа\n", N, K);




}