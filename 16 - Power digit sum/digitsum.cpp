#include <iostream>
#include <bitset>
#include <vector>
#include <stdio.h>

using namespace std;

void sleft(vector<bitset<4>> v) {
	v[1] <<= 1;
	v[1] = v[1].to_ulong() + 1;
}

void shift(vector<bitset<4>> v) {
}

int digits(int x) {
	//printf("%d\n", x);
	bitset<16> y(x);
	vector<bitset<4>> scratch;
	bitset<4> s(0);
	scratch.push_back(s);
	for (vector<bitset<4>>::iterator it = scratch.end(); it >= scratch.begin(); it--)
		*it = s;
	//y[x] = 1;

	int i = 0;
	while (i <= 15) {
		int d = (int)(scratch[0].to_ulong());
		auto p = scratch.begin();
		for (vector<bitset<4>>::iterator it = scratch.end(); it >= scratch.begin(); it--) {
			cout << *it << " ";
			int t = (int)((*it).to_ulong());
			cout << t << " ";
			if (t > d) {
				d = t;
				p = it;
			}
		}
		cout << "	|	" << y;


		if (d >= 5) {
			printf(" %d add 3 and shift\n", d);

			if (*p == *scratch.end()) {
				bitset<4> u(0);
				//cout << "test: " << scratch[2] << " " << scratch[1] << " " << scratch[0] << endl;
				scratch.push_back(u);
				p = scratch.end()-1;
				//cout << "test: " << scratch[2] << " " << scratch[1] << " " << scratch[0] << endl;
				*scratch.end() = u;
			}

			bitset<4> a(d+3);
			*p = a;
			//cout << *p << endl;
			cout << "add 3: " << scratch[2] << " " << scratch[1] << " " << scratch[0] << endl;
			for (vector<bitset<4>>::iterator it = scratch.end(); it >= scratch.begin(); it--) {
				////cout << "shifting: " << *it << endl;
				*it <<= 1;
				(*it)[0] = (*(it-1))[3];
			}
			scratch[0][0] = y[15];
			cout << "shift: " << scratch[2] << " " << scratch[1] << " " << scratch[0] << endl;
			//cout << scratch[1] << " " << scratch[0] << endl;
			//cout << scratch[1] << " " << scratch[0] << endl << endl;
			y <<= 1;
			i++;
			//scratch[0][0] = y[15];
			continue;
		} else {
			printf(" shift\n");
			for (vector<bitset<4>>::iterator it = scratch.end(); it >= scratch.begin(); it--) {
				//cout << "shifting: " << *it << endl;
				*it <<= 1;
				(*it)[0] = (*(it-1))[3];
			}
			scratch[0][0] = y[15];
			y <<= 1;
			i++;
		}

		//sleft(scratch);
	}
	for (vector<bitset<4>>::iterator it = scratch.end(); it >= scratch.begin(); it--) {
		cout << *it << " ";
	}
	cout << endl;

	int in = 1;
	int sum = 0;
	for (vector<bitset<4>>::iterator it = scratch.begin(); it <= scratch.end(); ++it) {
		sum += (int)(*it).to_ulong()*in;
		in *= 10;
	}

	//cout << endl;
	return sum;
}

int main() {
	/*
	for (int i = 1000; i >= 1; i--) {
		if (i != digits(i)) {
			printf("\033[0;31m");
			printf("FAILED: %d (%d)\n", i, digits(i));
		} else {
			printf("\033[0;32m");
			printf("PASSED: %d\n", i);
		}
	}*/
	cout << 176 << endl;
	cout << digits(176) << endl;

	return 0;
}

