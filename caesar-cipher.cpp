#include <iostream>
#include <string>
using namespace std;

char shift_char(char c, int k) {
    return (char)(97 + ((c + k - 97) % 26));
}

char unshift_char(char c, int k) {
    return (char)(97 + ((c - k - 97 + 26) % 26));
}

int main(int argc, char const* argv[]) {
    // string str;
    // int k;

    // cin >> str >> k;

    // for (int i = 0; i < str.length(); i++) {
    //     cout << shift_char(str[i], k);
    // }
    string str;
    cin >> str;

    for (int i = 1; i <= 26; i++) {
        for (int j = 0; j < str.length(); j++) {
            cout << unshift_char(str[j], i);
        }
        cout << endl;
    }
}