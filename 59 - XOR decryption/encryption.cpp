#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <string>
#include <sstream>
#include <array>
#include <charconv>

using namespace std;

#define KEY "uwu"

class Message {
    public:

        vector<int> encrypted;
        vector<int> decrypted;

        void encrypt(const char *key) {

            //cout << "encrypt()" << endl;
            encrypted = decrypted;

            int si = 0;

            while (key[si] != '\0') {
                for (int i = 0; i <= encrypted.size() - 1; i++) {
                    //cout << encrypted[i] ^ key[si];
                    //cout << key[si];
                    encrypted[i] = encrypted[i] ^ key[si];
                }
                si++;
            }
        }
        void decrypt(const char *key) {
            //puts(key);

            //cout << "decrypt()" << endl;

            decrypted = encrypted;
            //vector<int> temp = encrypted;

            int si = 0;

            while (key[si] != '\0') {
                for (int i = 0; i <= decrypted.size() - 1; i++) {
                    //cout << encrypted[i] ^ key[si];
                    //cout << key[si];
                    decrypted[i] = decrypted[i] ^ key[si];
                }
                //cout << "si: " << si << ", key[si]: " << key[si] << " = " << key[si] - 0 << endl;
                si++;
                //cout << endl;
            }
        }
};

/*
   vector<const char *> encryption(vector<const char *> data) {

//cout << KEY;
int si = 0;
while (KEY[si] != '\0') si++;

for (int j = 0; j <= si - 1; j++) {
for (int i = 0; i <= data.size() - 1; i++) {
//cout << data[i] << " data" << endl;

unsigned int in;
stringstream ss;
ss << data[i];
ss >> in;

//cout << in << endl;
//printf("%dXOR%d = %d\n", in, KEY[j], in ^ KEY[j]);

std::string tmp = std::to_string(in ^ KEY[j]);

char* c = new char[tmp.size()+1];
strncpy(c,tmp.c_str(),tmp.size()+1);

data[i] = c;
//cout << data[i] << " data2" << endl;
}
}

//cout << KEY[0] + 0;
return data;

}
*/

int main() {

    ifstream file("p059_cipher.txt");
    const char *m = "uwu fuck you";

    vector<int> data;
    string tmp;

    while(getline(file, tmp, ','))
        data.push_back(stoi(tmp));

    int freq[100];
    for (int i = 0; i <= 99; i++)
        freq[i] = 0;

    for (int i = 0; i <= data.size() - 1; i++)
        freq[data[i]]++;

    for (int i = 0; i <= 99; i++) {
        if (freq[i] != 0) {
            //cout << i << ", " << freq[i] << endl;

        }
    }


    for (int i = 0; i <= data.size() - 1; i++) {
        //cout << data[i] << ",";
    }
    cout << endl;

    //data = encryption(data);

    Message message;
    //data.erase (data.begin()+20,data.end());

    message.encrypted = data;
    cout << endl;
    char ckey[3];

    for (int i = 97; i <= 122; i++) {
        for (int j = 97; j <= 122; j++) {
            for (int k = 97; k <= 122; k++) {
                ckey[0] = i; ckey[1] = j; ckey[2] = k;
                const char * key = ckey;
                message.decrypt(key);
                //if (message.decrypted[4] >= 65 && message.decrypted[3] <= 122) {
                    for (std::vector<int>::iterator it = message.decrypted.begin() ; it != message.decrypted.end(); ++it) {
                        cout << (char)*it << "";
                    }
                    puts(key);
                //}
                //cout << endl << "###########################" << endl;
                for (std::vector<int>::iterator it = message.encrypted.begin() ; it != message.encrypted.end(); ++it) {
                    cout << *it << ",";
                    //cout << endl << "###########################" << endl;
                    //message.encrypt(key);
                }

            }
        }
    }
    cout << endl;
    //message.decrypt("uwu");

    cout << "###########################" << endl;

    for (std::vector<int>::iterator it = message.encrypted.begin() ; it != message.encrypted.end(); ++it)

        //cout << (char)*it << "";

    /*
       message.encrypt("uwu");

       for (int i = 0; i <= message.encrypted.size() - 1; i++)
    //cout << (char)message.encrypted[i] << ",";
    //cout << endl;

    /*
    message.decrypt("uwu");


    int si = 0;
    while (m[si] != '\0') si++;

    message.decrypted.clear();

    for (int i = 0; i <= si - 1; i++)
    message.decrypted.push_back(m[i]+0);

    message.encrypt("uwk");

    for (int i = 0; i <= message.decrypted.size() - 1; i++)
    cout << (char)message.decrypted[i] << ",";

    cout << endl;

    for (int i = 0; i <= message.encrypted.size() - 1; i++)
    cout << message.encrypted[i] << ",";

    message.decrypted.clear();

    cout << endl;
    message.decrypt("uwk");

    for (int i = 0; i <= message.decrypted.size() - 1; i++)
    cout << (char)message.decrypted[i] << ",";


    //message.decrypted =
    //cout << message.decrypted.size();
    /*
    for (int i = 0; i <= data.size() - 1; i++) {
    //cout << data[i] << ",";
    unsigned int in;
    stringstream ss;
    ss << data[i];
    ss >> in;
    //cout << (char)in;
    }
    */

    file.close();
}
