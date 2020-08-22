#include <iostream>
#include <randomHash.hpp>

using namespace std;

int main() {
	int    leng     = 10;
	char** myHash   = randomHash(leng, false, true);

	for (int i = 0; i < leng; i++) {
		printf("%c", &myHash[i]);
	}

	cout << "\n";

	system("pause");
	return 0;
}

