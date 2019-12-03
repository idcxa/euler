#include <iostream>
#include <stdio.h>
using namespace std;

	int is_prime(long int num){
		for (long int i=2;i<=num-1;i++) {
			if (num%i==0) {
				return 0;
			}
		}
		return 1;
	}

	int sum_below(int below){
		long long int sum = 0;
		for (int i=2;i<=below;i++) {
			if (is_prime(i)) {
				sum = sum + i;
				cout << sum << " " << (i / 20000) << "%" << "\n";
				//cout << i << "\n";
			}
		}
	return sum;
	}

    int main(){
	    	cout << is_prime(6) << "\n";
		cout << sum_below(2000000) << "\n";
    return 0;
	}
