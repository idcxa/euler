#include <iostream>
using namespace std;
	int sum_squared(int n){
		int sum = 0;
		for(int i=1; i<=n; i++) {
			sum = sum + i;
		}
		sum = sum*sum;
        return sum;
    }
	int squared_sum(int n){
		int sum = 0;
		for(int i=1; i<=n; i++) {
			sum = sum + (i*i);
		}
        return sum;
    }

    int main(){
		cout << (sum_squared(100)-squared_sum(100));
    return 0;
	}
