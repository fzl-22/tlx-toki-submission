#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int N;
    cin >> N;

    int A[N];
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }

    for (int i = 0; i < N; i++) {
        cout << sum - A[i] << endl;
    }
}