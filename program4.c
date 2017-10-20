#include <stdio.h> 

int mnoz(int a, int b) /* funkcja mnozaca */
{
printf("Wynik mnozenia: %d\n", a * b);
}

int dodaj(int a, int b) /*funkcja dodajaca 2 liczby */
{
printf("Wynik dodawania: %d\n", a + b);
}

int odejmij (int a, int b) /* funkcja odejmująca b od a liczby */
{
printf("Wynik odejmowania: %d\n", a - b);
}

int podziel (int a, int b) /* funkcja dzielaca a przez b */
{
printf("Wynik dzielenia: %d\n", a \ b);
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
		printf("Wynik mnozenia: %i\n", mnoz(a, b));

	}else{

		printf("wynik dodawania: %i\n", dodaj (a, b));
	};		/* ten srednik jest opcjonalny jezeli jest klamra */

	return 0;
}
