#include <iostream>
#include <vector>

using namespace std;

vector<int> iMoves(int x, int y) {
    // returns no. possible moves for i
    vector<int> v;
    for (int i = x; i <= 2; i++) {
        v.push_back(i - x);
    }
    return v;
}

vector<int> jMoves(int x, int y) {
    // returns no. possible moves for j
    vector<int> v;
    for (int i = y; i <= 2; i++) {
        v.push_back(i - y);
    }
    return v;
}

int lattice(int x, int y) {
    int i = 0;
    int j = 0;
    int sum = 0;
    while (i < x) {
        j = 0;
        while (j < y){
            cout << "x = " << i << " , y = " << j << endl;
            // move right is i++
            // move down is j++

            vector<int> iM = iMoves(i, j);
            vector<int> jM = jMoves(i, j);

            for (vector<int>::iterator it = iM.begin(); it != iM.end(); it++) {
                for (vector<int>::iterator jt = jM.begin(); jt != jM.end(); jt++) {
                    //printf("i: %d, j: %d\n", *it, *jt);
                    if (*it + *jt + i + j == x + y) {


                        if (!(i == 0 && j == 0) && i == j) {
                            sum = sum + 2*(*it + *jt);
                            printf("BREAK\n");
                            printf("2*(%d + %d)\n", *it, *jt);
                        } else if ((i == x - 1 && j == 0) || (j == y - 1 && i == 0)){
                            sum = sum + (*it + *jt);
                            printf("BREAK\n");
                            printf("(%d + %d)\n", *it, *jt);
                        }
                    }
                }

            }
            j++;
        }
        i++;
    }
    cout << sum;
    return sum;

}

int main() {

    lattice(2, 2);

    return 0;
}
