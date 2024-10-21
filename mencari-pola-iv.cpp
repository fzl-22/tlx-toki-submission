#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
    int N;
    cin >> N;

    int counter = 0;
    for (int i = 0; i < N; i++) {
        int j = counter;
        while (j <= i + counter) {
            cout << (j % 10);
            j++;
        }
        counter = j % 10;
        cout << endl;
    }
}