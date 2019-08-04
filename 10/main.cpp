#include <iostream>
using namespace std;
	int is_prime(long int num){
		bool is_prime = true;
		for (long int i=2;i<=num-1;i++) {
			if (num%i==0) {
				is_prime = false;
				cout << num << " " << is_prime << "\n";
				return is_prime;
			}
		}
		is_prime = true;
		cout << num << " " << is_prime << "\n";
		return is_prime;
	}

	int sum_below(int below){
		long long int sum = 0; 
		for (int i=2;i<=below;i++) {
			if (is_prime(i)==true) {
				sum = sum + i;
			}
		}
	return sum;
	}

    int main(){
		cout << sum_below(2000000) << "\n";
    return 0;
	}
