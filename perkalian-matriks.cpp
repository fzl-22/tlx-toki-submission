#include <iostream>
using namespace std;

int** init_matrix(int rows, int cols) {
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    return arr;
}

void delete_matrix(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

void show_matrix(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int** multiply_matrix(int** arr_a, int** arr_b, int rows_a, int cols_a, int rows_b, int cols_b) {
    int** result = new int*[rows_a];
    for (int i = 0; i < rows_a; i++) {
        result[i] = new int[cols_b];
    }

    for (int i = 0; i < rows_a; i++) {
        for (int j = 0; j < cols_b; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols_a; k++) {
                result[i][j] += arr_a[i][k] * arr_b[k][j];
            }
        }
    }

    return result;
}

int main(int argc, char const* argv[]) {
    int N, M, P;
    cin >> N >> M >> P;

    int** A = init_matrix(N, M);
    int** B = init_matrix(M, P);

    int** result = multiply_matrix(A, B, N, M, M, P);
    show_matrix(result, N, P);

    delete_matrix(A, N);
    delete_matrix(B, M);
}