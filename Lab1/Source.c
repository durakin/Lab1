//������������ ������ �1 ������� 1
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
			if (!(s[i] >= '0'  && s[i] <= '9') && s[i] != '.' || s[i] == '.' && zapyat > 1)
			{
				printf("������������ �������� %s. ����������, ��������� ���� �������� %s.\n", name, name);
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

	printf("������� ����� ������� ������.\n");
	a = VD("����� ������� ������");

	printf("������� ����� ������� ������.\n");
	b = VD("����� ������� ������");

	while (1)
	{
		if (a <= 0)
		{
			printf("������ ������ ����� ������������� �����. ��������� ���� ����� ������� ������.\n");
			a = VD("����� ������� ������");
		}
		else
		{
			if (b <= 0)
			{
				printf("������ ������ ����� ������������� �����. ��������� ���� ����� ������� ������.\n");
				b = VD("����� ������� ������");
			}
			else
			{
				break;
			}
		}
	}

	c = sqrtf(a * a + b * b);

	printf("���������� ������������ � �������� %f � %f ����� %f.\n������ ���������, ������� �� ����� �������.", a, b, c);
	getch();
	return 0;
}