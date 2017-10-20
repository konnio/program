#include <stdio.h> 

int mnoz(int a, int b) /* funkcja mnozaca */
{
printf("Wynik mnozenia: %d\n", a * b);
return 0;
}

int dodaj(int a, int b) /*funkcja dodajaca 2 liczby */
{
printf("Wynik dodawania: %d\n", a + b);
return 0;
}

int odejmij (int a, int b) /* funkcja odejmująca b od a liczby */
{
printf("Wynik odejmowania: %d\n", a - b);
return 0;
}

int podziel (int a, int b) /* funkcja dzielaca a przez b */
{
printf("Wynik dzielenia: %d\n", a / b);
return 0;
}

int main(void)
{
	int a = 2, b = 5;  /* deklaracja typu zmiennej i inicjalizacja wartosci */	
	char wybor; /* okreslenie wartosci stalej wybor jako "*" */	
	
	scanf("%c", &wybor); /* czytaj z konsoli i zapisz pod wybor */
	
	/* if (wyrazenie) {blok jezeli wyrazenie prawdziwe}
	   else {blok jezeli wyrazenie galszywe}; */

	if (wybor == '*')
	{ /* sprawdzana czy wybor jest * to nie jest '=' tylko '==' */
		mnoz(a, b);
	}else if (wybor == '+') {    /* wywoluje funkcje w zaleznosci od przyjetego z konsoli znaku */
		dodaj(a, b);
	}else if (wybor == '-') {
		odejmij(a, b);
	}else if (wybor == '/') {
		podziel(a, b);
	}else
	printf("Wybrano niewlasciwy znak");
	return 0;

}
