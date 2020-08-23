#include <iostream>
#include <randomHash.hpp>

#define LENG 40

using namespace std;

int main(int argc, char* argv[]) {
	// generated random hash array
	char** myHash = randomHash(LENG, true, true);

	// TODO: fix this fu#king print
	for (int i = 0; i < LENG; i++) {
		printf("%c", &myHash[i]);
	}

	cout << "\n";

	system("pause");
	return 0;
}

