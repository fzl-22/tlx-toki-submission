#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int calculate_closeness(pair<int, int> student_a, pair<int, int> student_b, int D) {
    return pow(abs(student_b.first - student_a.first), D) + pow(abs(student_b.second - student_a.second), D);
}

int main(int argc, char const* argv[]) {
    int N, D, X, Y;
    vector< pair<int, int> > students;

    cin >> N >> D;

    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        students.push_back(pair<int, int>(X, Y));
    }

    int min_closeness = 2000000000;
    int max_closeness = 0;
    for (int i = 0; i < N; i++) {
        pair<int, int> student_a = students[i];
        for (int j = i + 1; j < N; j++) {
            pair<int, int> student_b = students[j];
            int closeness = calculate_closeness(student_a, student_b, D);
            min_closeness = min(min_closeness, closeness);
            max_closeness = max(max_closeness, closeness);
        }
    }

    cout << min_closeness << " " << max_closeness << endl;

    return 0;
}