#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("Scrie 2 numere:\n");
	scanf("%d %d", &a, &b);
	printf("Suma magica dintre %d si %d este: %d\n", a, b, a + b + 5);

	return 0;
}
