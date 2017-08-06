#include <stdio.h>

int main() {
	int A , B , C , D , n;
	char c;

    A = B = n = 0;

	while (c != '\n') {
		scanf("%c", &c);

        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')   C = 0 , D = 1;
        else if (c == '.' || c == ',')                      C = 1 , D = 1;
        else if (c >= '0' && c <= '9')                      C = 1 , D = 0;
        else                                                C = 0 , D = 0;

	if (!A && !B && !C && D || !A && !B && C && !D || A && B && !C && D) n++;

		A = C , B = D;
	}
	printf ("%d\n", n);
	return 0;
}
