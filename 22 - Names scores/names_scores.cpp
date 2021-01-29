#include <iostream>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int namescore(string str, int x) {

    for(string::iterator it = str.begin(); it != str.end(); ++it) {
        //cout << *it << "," << *it - 64 << endl;
        cout << *it;
    }
    cout << x << endl;
    return x;
}

vector<string> sort(vector<string> v, int x) {

    bool done;
    string str1,str2,temp;

    while (true) {
        done = true;
        for (int i = 0; i <= v.size()-1; i++) {
            str1 = v[i+1];
            str2 = v[i];
            temp = str2;

            if (str1[x] < str2[x]) {
                done = false;
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
        if (done) {
            break;
        }
    }

    string str;
    vector<string> nv;

    if (str[x] == (char)0) {
       printf("c is empty\n");
       return v;
    }

    for (int i = 0; i <= v.size()-1; i++) {
        for (int l = 0; l <= 23; l++) {
            str = v[i];
            if (str[x] == l) {
                nv.push_back(str);
                v = sort(nv, x+1);
            }
        }
    }

    return v;
}

int main() {

    ifstream file("names_test");

    vector<string> data;

    string tmp;

    while(getline(file, tmp, ',')) {
        //cout << tmp << endl;
        data.push_back(tmp);
    }

    file.close();

    data = sort(data, 0);

    for (int i = 0; i <= data.size(); i++) {
        cout << data[i] << endl;
    }
    //cout << namescore(data[1], 1) << endl;
}

