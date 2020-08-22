#include <iostream>
#include <caracs.hpp>

using namespace std;

auto randomHash(int len, bool symbols, bool debug) {
	char* hash_[len];

	for (int i = 0; i < len; i++) {
		if (debug) {
			cout << caracs[i] << "\n";
		}

		hash_[i] = caracs[i];
	}

	if (debug) {
		cout << hash_ << "\n";
	}

	return hash_;
}

