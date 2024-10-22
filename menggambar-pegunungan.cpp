#include <iostream>
using namespace std;

void draw_mountains(int N) {
    if (N == 1) {
        cout << "*" << endl;
        return;
    }
    draw_mountains(N - 1);
    for (int i = 0; i < N; i++) {
        cout << "*";
    }
    cout << endl;
    draw_mountains(N - 1);
}

int main(int argc, char const* argv[]) {
    int N;
    cin >> N;

    draw_mountains(N);
}