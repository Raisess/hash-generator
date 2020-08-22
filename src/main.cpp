#include <iostream>
#include <randomHash.h>

using namespace std;

int main() {
	const int leng      = 10;
	char** myHash[leng] = { randomHash(leng, false) };

	cout << myHash << "\n";

	system("pause");
	return 0;
}

