/* https://projecteuler.net/problem=22

  Using https://projecteuler.net/project/resources/p022_names.txt, a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

  For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

  What is the total of all the name scores in the file?

*/


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int namescore(vector<string> v) {
    int sum = 0;
    int n = 0;
    for (u_int64_t i = 0; i <= v.size() - 1; i++) {
        n = 0;
        string str = v[i];
        for (string::iterator is = str.begin(); is != str.end(); ++is) {
            if (*is != 10) {
                n = n + *is - 64;
            }
        }
        sum = sum + n * (i+1);
    }
    return sum;
}

vector<string> sort(vector<string> v, int x) {

    for (int <++> = <++>; <++> <= <++>; <++>++) {
        <++>
    }
    vector<string> nv;
    vector<string> vr;
    /* nv is a vector for each letter of the alphabet
       vr is a temporary vector for return so that v is not overwritten */

    for (int l = 65; l <= 90; l++) {
        /* for each letter of the ALPHABET */
        for (std::vector<string>::iterator it = v.begin() ; it != v.end(); ++it) {
            /* for each postion in the vector v */
            string str;
            str = *it;
            if (str[x] == l) {
                /* if index of str is equal to l, push back str onto nv */
                nv.push_back(str);
            } else if (str[x] == (char)0) {
                /* if index of str is empty push back str directly onto vr
                   putting str[x] directly to the first index of the array */
                vr.push_back(str);
                v.erase(it);
                --it;
            }
        }

        if (nv.size() > 1) {
            /* there is no need to sort nv if it is empty or has a size of 1 */
            nv = sort(nv, x+1);
        }

        for (std::vector<string>::iterator it = nv.begin() ; it != nv.end(); ++it) {
            /* put all values of nv into vr */
            vr.push_back(*it);
        }
        nv.clear();
    }
    /* vr now has all of the values of nv for each letter in alphabetical order */
    return vr;
}

int main() {

    ifstream file("p022_names.txt");
    vector<string> data;

    string tmp;
    while(getline(file, tmp, ',')) {
        data.push_back(tmp);
    }

    file.close();

    data = sort(data, 0);

    printf("output = %d", namescore(data));

    data.clear();

    return 0;
}

