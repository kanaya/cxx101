/* C89 */

#include <stdio.h>

int main(int argc, const char *const *argv) {
	if (argc <= 101) {
		printf("%3d\n", argc - 1);
		main(argc + 1, NULL);
		/* You may not recursively call main function in C++. */
	}
	return 0;
}