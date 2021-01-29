#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float sum = 1000;
    for (int a=1;a<=sum;a++) {
        for (int b=1;b<=sum;b++) {
            float c = sqrt(pow(a, 2)+pow(b, 2));
            if (floor(c)==c) {
                //					cout << a << "^2 + " << b << "^2 = " << c << "^2" << "\n";
                if (a+b+c==sum) {
                    cout << a << " + " << b << " + " << c << " = " << sum << "\n";
                    cout << a << " * " << b << " * " << c << " * " << a*b*c << "\n";
                }
            }
        }
    }
    return 0;
}
