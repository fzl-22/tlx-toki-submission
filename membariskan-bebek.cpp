#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int N, r, c;
    cin >> N;

    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            r = i;
            c = N / r;
        }
    }

    cout << r << " " << c << endl;
}