#include <iostream>

using namespace std;

int palindrome(int x) {
    string str = to_string(x);
    int l = str.length();
    for (int i = 0; i <= l; i++) {
	if (str[i] != str[l - i - 1]) {
	    return false;
	}
    }
    return true;
}

int main() {
    int n = 0;
    for (int i = 100; i <= 999; i++) {
	for (int j = 100; j <= 999; j++) {
	    if (palindrome(i*j) && i*j > n) {
		n = i*j;
	    }
	}
    }
    printf("output: %d\n", n);
}

