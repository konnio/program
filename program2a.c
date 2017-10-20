#include <stdio.h>

int mnoz(int a, int b){ /* funkcja mnozaca */
	return a*b;
}

int main(void)
{
	int wynik;           /* deklaracja zmiennej typu rzeczywistego */

	wynik = mnoz(4,5);   /* zwraca wynik funkcji mnoz do wartosci wynik */

	printf("Wynik mnozenia: %i\n", wynik);  /*wyswietla z opisem wartosc wynik, zadeklarowane jest typ wyswietlanego wyniku */
						/* %i to typ integer "\n" to przeniesienie kursora do nastepnej linii */

	putchar('\n');

	return 0;
}
