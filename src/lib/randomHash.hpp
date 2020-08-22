#include <caracs.hpp>

auto randomHash(int len, bool symbols) {
	char* hash_[len];

	for (int i = 0; i < len; i++) {
		hash_[i] = caracs[i];
	}

	return hash_;
}

