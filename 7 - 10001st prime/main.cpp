#include <iostream>
using namespace std;
	int is_prime(int i){
		int x = 1;
		bool is_prime = true;
		do {
			x++;
			if (x==i) {
				is_prime = true;
				return is_prime;
			}
			if (i%x==0) {
				is_prime = false;
				return is_prime;
			}
		}
		while (is_prime==true);
		if (is_prime==true) {
			return is_prime;
		}
		return is_prime;
	}
	int nth_prime(int n){
		int i = 0;
		int x = 0;
		do {
			i++;
			if (is_prime(i)==1) {
				x++;
			}
		}
		while (x<n);
		return i;
	}
    int main(){
		cout << nth_prime(10001);
    return 0;
	}
