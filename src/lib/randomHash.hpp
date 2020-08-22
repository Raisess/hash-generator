#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <caracs.hpp>

using namespace std;

char** randomHash(int len, bool symbolsBool, bool debug) {
	char* hash_[len];
	int   randomNumber;

	srand(time(NULL));

	if (debug) {
		cout << "debug: "   << debug       << "\n";
		cout << "symbols: " << symbolsBool << "\n";
		cout << "hash: ";
	}

	for (int i = 0; i < len; i++) {
		randomNumber = rand() % 26;

		if (!symbolsBool) {
			if (randomNumber % 2 != 0) {
				hash_[i] = numbers[randomNumber];
			} else {
				hash_[i] = caracs[randomNumber];
			}
		} else {
			if (randomNumber % 2 != 0) {
				int r = rand() % randomNumber;

				hash_[i] = r % 2 != 0 ? numbers[randomNumber] : symbols[randomNumber];
			} else {
				hash_[i] = caracs[randomNumber];
			}
		}

		if (debug) {
			cout << hash_[i];
		}
	}

	if (debug) {
		cout << "\n";
		cout << "p_hash: "  << hash_       << "\n";
	}

	return hash_;
}

