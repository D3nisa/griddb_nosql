#include <stdio.h>
#include <conio.h>
int main() {
	int n, a[10], nr, i,b[10];
	scanf("%d", &n);
		if (n < 0) {
			n = -n;
			nr = 1;
		}
		else nr = 0;
	i = 0;
	while (n) {
		a[i] = n % 2;
		n /= 2;
		i++;
	}
	while (i < 7)
	{
		a[i] = 0;
		i++;
	}
	a[7] = nr;
	for (i = 7; i >= 0; i--) {
		printf("%d", a[i]);
		if (a[i] == 0)
			b[i] = 1;
		else b[i] = 0;
	}
	printf("\n");
	for (i = 7; i >= 0; i--) {
		printf("%d",b[i]);
	}
	printf("\n");
	nr = 1;
	for (i = 0; i < 8; i++) {
		n =n+ b[i] * nr;
		nr *= 2;
	
	}
	printf("%d\n", n);
	system("pause");
	return 0;

}