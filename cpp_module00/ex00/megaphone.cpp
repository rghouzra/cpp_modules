#include <iostream>
#include <cstring>

void
PrintInUpper(const char *s) {
	if(s) {
		for (size_t i = 0; s[i]; i++)
			std::cout << (char)toupper(s[i]);
	}
}

int main(int ac, char **argv)
{
	for (int i = 1; i < ac; i++) {
		PrintInUpper(argv[i]);
	}
}
