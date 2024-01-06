#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printFrequency(string s) {
    int freq[256] = {0};
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    for (int i = 0; i < s.length(); i++) {
        freq[(int)(s[i])]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << (char)i << " = " << freq[i] << ",  ";
        }
    }
}

int main() {

    string str;
    cout << "Enter a string:";
    getline(cin, str);
    printFrequency(str);
    return 0;

}
