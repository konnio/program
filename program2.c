#include <stdio.h> /* biblioteka standardowa input-output */

/* y= f(x) */
/* f() => 0 */

int main() /*funkcja główna programu */
/* int -> typ zwracanej wartości (int - wartosc calkowita)*/

{	
	puts("Pierwszy program"); /*puts - funkcja z biblioteki standardowej */
				/* wyswietlajaca ciag znakow */
				/* puts automatycznie przechodzi do nowej linii */
	putchar('g');
	putchar('\n'); /*znak konca linii*/
	putchar('\t'); /*tabulator */
	putchar('\r'); /*powrot karetki */
	putchar('\\'); /*wypisuje \ */
	
	return 0;
}
