# include <stdio.h>

int main() {

	int i=1;
	while (i <= 10) {
		if (i % 2 == 0) {
			printf("%d / ¦��", i);
		}
		else if (i % 2 == 1) {
			printf("%d / Ȧ��", i);
		}
		printf("\n");
		i++;
	}

	return 0;
}