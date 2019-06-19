// C++11

#include <cstdio>

int main() {
	const char zero_to_hundred[] = "000\n001\n002\n003\n004\n005\n006\n007\n008\n009\n"
		"010\n011\n012\n013\n014\n015\n016\n017\n018\n019\n"
		"020\n021\n022\n023\n024\n025\n026\n027\n028\n029\n"
		"030\n031\n032\n033\n034\n035\n036\n037\n038\n039\n"
		"040\n041\n042\n043\n044\n045\n046\n047\n048\n049\n"
		"050\n051\n052\n053\n054\n055\n056\n057\n058\n059\n"
		"060\n061\n062\n063\n064\n065\n066\n067\n068\n069\n"
		"070\n071\n072\n073\n074\n075\n076\n077\n078\n079\n"
		"080\n081\n082\n083\n084\n085\n086\n087\n088\n089\n"
		"090\n091\n092\n093\n094\n095\n096\n097\n098\n099\n"
		"100\n";
	for (int c: zero_to_hundred) {
		std::fputc(c, stdout);
	}
	std::fflush(stdout);
	return 0;
}