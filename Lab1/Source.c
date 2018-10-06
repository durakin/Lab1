//Лабораторная работа №1 Вариант 1
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

float VD(char name[100])
{
	int i, zapyat, done = 0;
	char s[100];

	while (done == 0)
	{
		zapyat = 0;

		for (i = 0; i < 99; i++)
		{
			s[i] = 0;
		}

		scanf("%s", s);

		i = 0;

		if (s[0] == '-') i++;

		while (s[i] > 0)
		{
			if (s[i] == '.') zapyat++;
			//if ((s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9' && s[i] != '.') || (s[i] == '.' && zapyat > 1))
			if ( !(s[i] >= '0'  && s[i] <= '9') && s[i] != '.' || (s[i] == '.' && zapyat > 1))
			{
				//system("cls");
				printf("Некорректное значение %s. Пожалуйста, повторите ввод значения %s.\n", name, name);
				break;
			}
			i++;

		}
		if (s[i] <= 0) done++;
	}
	return (atof(s));
}

float a, b, c;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	printf("Введите длину первого катета.\n");
	a = VD("длины первого катета");

	printf("Введите длину второго катета.\n");
	b = VD("длины второго катета");

	//system("cls");

	while (1)
	{
		if (a <= 0)
		{
			//system("cls");
			printf("Катеты должны иметь положительные длины. Повторите ввод длины первого катета.\n");
			a = VD("длины первого катета");
		}
		else
		{
			if (b <= 0)
			{
				//system("cls");
				printf("Катеты должны иметь положительные длины. Повторите ввод длины второго катета.\n");
				b = VD("длины второго катета");
			}
			else
			{
				break;
			}
		}
	}

	c = sqrtf(a * a + b * b);

	printf("Гипотенуза треугольника с катетами %f и %f равна %f.\nРабота завершена, нажмите на любую клавишу.", a, b, c);
	getch();
	return 0;
}