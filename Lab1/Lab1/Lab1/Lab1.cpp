// Lab1.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

/* Funkcja wyznaczająca liczby bitów matysy oraz expsylon maszynowy dla typu double */
void calcDouble() {
	int i = 0; // licznik bitów matysy
	double a, b; // 

	a = 1.0;

	do {
		a = a / 2.0;
		b = 1.0 + a;
		i++;
	} while (b > 1.0);

	std::cout << "dla typu double: " << 2.0f * a << " Bit mantysy " << i - 1 << std::endl;
}

/* Funkcja wyznaczająca liczby bitów matysy oraz expsylon maszynowy dla typu float */
void calcFloat() {
	int i = 0; // licznik bitów matysy
	float x, y; // 

	x = 1.0;

	do {
		x = x / 2.0;
		y = 1.0 + x;
		i++;
	} while (y > 1.0);

	std::cout << "dla typu float: " << 2.0f * x << " Bit mantysy " << i - 1 << std::endl;
}

int main()
{
	// inicjowanie fukncji double
	calcDouble();
	// inicjowanie funkcji float
	calcFloat();

	system("PAUSE");
    return 0;
}


