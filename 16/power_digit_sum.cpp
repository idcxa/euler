#include <iostream>
#include <cmath>
#include <sstream>
#include <cstdlib>

using namespace std;

void digits(long long int x) {
    cout << "x = " << x << endl;
    if (x >= 10) {
        digits(x / 10);
    }
    int digit = x % 10;

    cout << x % 10 << '\n';

}

int main() {
    long long int i;
    i = pow(2,15);
    //cout << i;
    //digits(212121);
    const char digits[303] = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
    //107150860718626732094842504906000181056140481170553360744375038837035105112436122493198378815695858127594672917553146825187145285692314043598457757469857480393456777482423098542107460506237114187795418215304647498358194126739876755916554394607706291457119647768654216766042983165262438683720566806937615862
    int sum = 0;
    for (int i = 0; i <= 301; i++) {
        sum = sum + digits[i] - 48;
        cout << digits[i] << endl << sum << endl;
    }
    cout << "sum = " << sum << endl;
    printf(digits);

}
