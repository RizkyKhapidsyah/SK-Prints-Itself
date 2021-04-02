#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main(int argc, char* argv[]) {

	FILE* file = fopen("Source.c", "r");
	char line[200];

	while (fgets(line, sizeof(line), file)) {

		printf("\n%s", line);

	}

	fclose(file);

	_getch();
	return 0;
}