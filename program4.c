#include <stdio.h> 

int mnoz(int a, int b) /* funkcja mnozaca */
{
printf("Wynik mnozenia: %d\n", a * b);
return a * b;
}

int dodaj(int a, int b) /*funkcja dodajaca 2 liczby */
{
printf("Wynik dodawania: %d\n", a + b);
return a + b;
}

int odejmij (int a, int b) /* funkcja odejmująca b od a liczby */
{
printf("Wynik odejmowania: %d\n", a - b);
return a - b;
}

int podziel (int a, int b) /* funkcja dzielaca a przez b */
{
printf("Wynik dzielenia: %d\n", a / b);
return a / b;
}

int main(void)
{
	int a, b;  /* deklaracja typu zmiennej  */	
	char wybor; /* okreslenie wartosci stalej wybor jako "*" */	
	
	//printf("Podaj znak działania ktore chcesz wykonac: "); scanf("%c", &wybor); /* czytaj z konsoli i zapisz pod wybor */
	printf("Podaj wartosc zmiennej a: "); scanf("%i", &a); 
	printf("Podaj wartosc zmiennej b: "); scanf("%i", &b); 
	printf("Podaj znak działania ktore chcesz wykonac: "); scanf(" %c", &wybor); /* czytaj z konsoli i zapisz pod wybor */
	
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
	// puts("Wybrano niewlasciwy znak \n");
	return 0;

}
