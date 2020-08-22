#include <iostream>
#include <randomHash.hpp>

using namespace std;

int main() {
	const  int leng     = 26;
	char** myHash[leng] = { randomHash(leng, false, true) };

	for (int i = 0; i < leng; i++) {
		cout << myHash[i];
	}

	cout << "\n";

	system("pause");
	return 0;
}

