// Lab2.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <Windows.h>

#pragma warning (disable: 4996);

double szereg(double x, int N) {
	double licznik, mianownik, wynik, wart_wyl, spr;

	licznik		= 1.0;
	mianownik	= 1.0;
	wynik		= licznik / mianownik;

	wart_wyl	= wynik;
	spr			= x;


	if (x < 0)
		x = -x;

	for (int j = 1; j < N; j++)
	{
		licznik *= x;
		mianownik *= j;
		wynik = licznik / mianownik;
		wart_wyl += wynik;
	}

	if (spr > 0)
		return wart_wyl;
	else
		return (1 / wart_wyl);
}


double funkcjaWbudowana(double x) {
	return (1 - exp(-x)) / x;
}

double funkcjaSzeregTaylora(double x) {
	return (1 - szereg(-x, 100)) / x;
}

int main()
{
	double x, error, wd, ww;

	for (x = -30; x <= 9; x += 0.1)
	{
		wd = funkcjaWbudowana(x);
		ww = funkcjaSzeregTaylora(x);

		error = fabs((ww - wd) / wd);

		printf("%.1lf\t", x);
		printf("%lf\t\t", wd);
		printf("%lf\t\t", ww);
		printf("%g\t\n", error);
	}


	system("PAUSE");
    return 0;
}

