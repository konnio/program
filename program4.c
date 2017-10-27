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
printf("Wynik dzielenia: %i i reszta: %i\n", a / b, a % b); /* znak % to reszta z dzielenia a przez b */
return a / b;
}

int licz(int a, int b, char wybor){
	if (wybor == '*')
	{ /* sprawdzana czy wybor jest * to nie jest '=' tylko '==' */
		mnoz(a, b);
	}else if (wybor == '+') {    /* wywoluje funkcje w zaleznosci od przyjetego z konsoli znaku */
		dodaj(a, b);
	}else if (wybor == '-') {
		odejmij(a, b);
	}else if (wybor == '/') {
		podziel(a, b);
	}else{
	// puts("Wybrano niewlasciwy znak \n");
	return 0;
	}
	return 1;
}


int main(void)
{
	int a, b;  /* deklaracja typu zmiennej  */	
	char wybor; /* okreslenie wartosci stalej wybor jako "*" */	
	int czy_dalej = 1; /* przypisanie wartosci 1 do licznika do petli while */
	
	while(czy_dalej == 1){
		printf("Podaj wartosc zmiennej a: "); scanf("%i", &a); 
		printf("Podaj wartosc zmiennej b: "); scanf("%i", &b); 
		printf("Podaj znak działania ktore chcesz wykonac: (+ - * /) "); scanf(" %c", &wybor); /* czytaj z konsoli i zapisz pod wybor */
										     /* wpisanie znaku spacji przed %c zlikwidowalo blad */
		licz(a, b, wybor);

		printf("Czy dalej chcesz liczyc? (1 - tak / 0 - nie) \n");
		scanf("%d", &czy_dalej);
	}
	return 0;

}
