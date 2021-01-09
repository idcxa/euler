#include <climits>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double sum;
    string line;

    std::ifstream die;
    die.open("numbers");
    string::size_type sz;   // alias of size_t

    if (die.is_open())  {
        while (getline (die, line) ) {
            //line.erase (line.end()-45, line.end());
            sum = sum + stod(line,&sz);
            cout << setprecision(30);
            cout << sum/pow(10,1) << endl;
        }
        die.close();
    } else
        std::cerr << "Unable to open file. Check your permissions & whether the file exists, dummy" << endl;
    return 0;

    return 0;
}
