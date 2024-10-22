#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
    string S, T;
    cin >> S >> T;

    while(S.find(T) != string::npos) {
        S.erase(S.find(T), T.length());
    }

    cout << S << endl;
}