#include <cstdio>
#include <cstdlib>

int main(int argc, const char *const *argv) {
	int n;
	if (argc > 1) {
		n = std::atoi(argv[1]);		
	}
	else {
		n = 0;
	}
	if (n <= 100) {
		std::fprintf(stdout, "%3d\n", n);
		++n;
		char *cmd = new char[256];
		std::sprintf(cmd, "%s %d", argv[0], n);
		std::system(cmd);
		delete[] cmd;
	}
	return 0;
}

// The idea of this work was given by Krzysztof Kamil Jacewicz.
// https://qr.ae/TWha4c