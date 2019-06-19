// C89

#include <stdio.h>

int main(int argc, const char *const *argv) {
	if (argc > 100) {
		return 0;
	}
	else {
		printf("%3d\n", argc);
		main(argc + 1, NULL);
	}
	return 0;
}