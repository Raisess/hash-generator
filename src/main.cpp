#include <iostream>
#include <randomHash.hpp>

#define LENG 40
#define SYMB true
#define DEBU true

using namespace std;

int main() {
	// generated random hash array
	char** myHash = randomHash(LENG, SYMB, DEBU);

	cout << "\n";

	system("pause");
	return 0;
}

