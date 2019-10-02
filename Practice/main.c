# include <stdio.h>

int main() {

	int i=1;
	while (i <= 10) {
		if (i % 2 == 0) {
			printf("%d / Â¦¼ö", i);
		}
		else if (i % 2 == 1) {
			printf("%d / È¦¼ö", i);
		}
		printf("\n");
		i++;
	}

	return 0;
}