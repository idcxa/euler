#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int digits(int x) {

	// init 2^x
	bitset<1001> y(0);
	y[x] = 1;

	// create a vector of nibbles (bitset<4>) for BCD representation
	vector<bitset<4>> reg;
	bitset<4> s(0);
	reg.push_back(s);

	// loop once for each bit
	for (int i = 0; i <= x; i++) {
		// for each nibble
		for (vector<bitset<4>>::iterator it = reg.end(); it >= reg.begin(); it--) {
			int d = (*it).to_ulong();
			// if nibble is greater than or equal to 5, add 3
			if (d >= 5) {
				if (*it == *reg.end()) {
					reg.push_back(s);

					// move iterator back
					it = reg.end()-1;
				}
				// add 3
				bitset<4> a(d+3);
				*it = a;
			}
		}

		// bitshift all bitsets
		for (vector<bitset<4>>::iterator it = reg.end(); it >= reg.begin(); it--) {
			*it <<= 1;
			(*it)[0] = (*(it-1))[3];
		}
		reg[0][0] = y[x];
		y <<= 1;
	}

	// sum all the integer values of the nibbles and return
	int sum = 0;
	for (vector<bitset<4>>::iterator it = reg.end(); it >= reg.begin(); it--) {
		sum += (*it).to_ulong();
	}
	return sum;

}

int main() {
	cout << digits(1000) << endl;
	return 0;
}

