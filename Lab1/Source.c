#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

float VDPol(char name[100])
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
		while (s[i] > 0)
		{
			if (s[i] == '.') zapyat++;
			if ((atof(s) == 0) || !(s[i] >= '0'  && s[i] <= '9') && s[i] != '.' || s[i] == '.' && zapyat > 1)
			{
				printf("Некорректное значение %s. Пожалуйста, повторите ввод значения %s.\n", name, name);
				break;
			}
			i++;
		}
		if (s[i] <= 0) done++;
	}
	return (atof(s));
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	float a, b, c;

	printf("Введите длину первого катета.\n");
	a = VDPol("длины первого катета");

	printf("Введите длину второго катета.\n");
	b = VDPol("длины второго катета");

	c = sqrtf(a * a + b * b);

	printf("Гипотенуза треугольника с катетами %f и %f равна %f.\nРабота программы завершена.", a, b, c);
	getchar();
	getchar();
	return 0;
}