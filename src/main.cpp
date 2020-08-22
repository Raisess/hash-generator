#include <iostream>
#include <randomHash.hpp>

#define LENG 12

using namespace std;

int main() {
	char** myHash = randomHash(LENG, true, true);

	for (int i = 0; i < LENG; i++) {
		printf("%c", &myHash[i]);
	}

	cout << "\n";

	system("pause");
	return 0;
}

