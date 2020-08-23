#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <caracs.hpp>

using namespace std;

// randomic hash function
/*
 * @params {
 *   int len:            hash final length
 *   bool symbolsBool:   if the hash have symbols
 *   bool debug:         debug mode on or off
 * }
 */
char** randomHash(int len, bool symbolsBool, bool debug) {
	char* hash_[len];

	// random number config
	srand(time(NULL));

	// some debug logs
	if (debug) {
		cout << "debug: "   << debug       << "\n";
		cout << "symbols: " << symbolsBool << "\n";
		cout << "hash: ";
	}

	for (int i = 0; i < len; i++) {
		// set a random number
		int randomNumber = rand() % 26;

		if (!symbolsBool) {
			// chech if is even, if true set a number, else set a letter
			if (randomNumber % 2 != 0) {
				hash_[i] = numbers[randomNumber];
			} else {
				hash_[i] = caracs[randomNumber];
			}
		} else {
			// using symbols
			if (randomNumber % 2 != 0) {
				// set a new random number
				int r = rand() % randomNumber;

				// check new randomic number to set a symbol or a number
				hash_[i] = r % 2 != 0 ? numbers[randomNumber] : symbols[randomNumber];
			} else {
				hash_[i] = caracs[randomNumber];
			}
		}

		if (debug) {
			cout << hash_[i];
		}
	}

	// hash pointer print
	if (debug) {
		cout << "\n";
		cout << "p_hash: " << &hash_ << "\n";
	}

	return hash_;
}

