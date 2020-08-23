#include <iostream>
#include <randomHash.hpp>

#define LENG 40
#define SYMB false
#define DEBU true

using namespace std;

int main() {
	// generated random hash array
	char** myHash = randomHash(LENG, SYMB, DEBU);

	// TODO: fix this fu#king print
	for (int i = 0; i < LENG; i++) {
		printf("%c", &myHash[i]);
	}

	cout << "\n";

	system("pause");
	return 0;
}

