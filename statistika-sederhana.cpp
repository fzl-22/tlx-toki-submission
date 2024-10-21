#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const* argv[]) {
    int N;
    cin >> N;
    
    int minimum = 100000, maximum = -100000;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << maximum << " " << minimum << endl;
}