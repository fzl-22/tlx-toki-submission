#include <iostream>
using namespace std;

int func(int A, int B, int K, int x) {
    if (K == 0) return x;
    return abs(A * func(A, B, K - 1, x) + B);
}

int main(int argc, char const* argv[]) {
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    cout << func(A, B, K, x) << endl;
}