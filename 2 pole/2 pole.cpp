#include <stdio.h>


int main() {
	int pole1[] = { 1, 2, 3, 4, 5 };
	int pole2[] = { 2, 1, 8, 9, 9 };

	for (int x = 0; x < 5; x++) {
		printf("%d: %d\n", x, pole1[x]);

		for (int x = 0; x < 5; x++) {
			printf("%d: %d\n", x, pole2[x);


			if (pole1 > pole2) {
				printf("Pole 1 je vetsi nez pole 2.\n");
			}

			else printf("Pole 2 je vetsi nez pole 1.\n");
		}
	}
}
