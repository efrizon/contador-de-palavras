/* Contador de palavras
Este programa recebera uma serie de caracteres representando palavras em sua
entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

	int A , B , C , D , n;
	char b , c;

	b = '1';
	n = 1;

	while (c != '\n') {

		scanf("%c", &c);

   		if (b >= 'A' && b <= 'Z' || b >= 'a' && b <= 'z')	A = 0 , B = 1;
		else if (b == '.' || b == ',')						A = 1 , B = 1;
		else if (b >= '0' && b <= '9')						A = 1 , B = 0;
		else												A = 0 , B = 0;

		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')	C = 0 , D = 1;
		else if (c == '.' || c == ',')						C = 1 , D = 1;
		else if (c >= '0' && c <= '9')						C = 1 , D = 0;
		else												C = 0 , D = 0;

		if ((!A && !B && !C && D)||(!A && !B && C && !D)||(A && B && !C && D)) n++;
		
		b = c;
	}
	printf ("%d\n", n);
	return 0;
}
