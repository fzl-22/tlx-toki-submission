#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int val){
    if(val == 1) return false;
    else if(val == 2) return true;
    else{
        for(int i = 2; i <= sqrt(val); i++)
            if(val % i == 0) return false;
        return true;
    }
}

int main(int argc, char const* argv[]){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(isPrime(arr[i]) != true) arr[i] = false;
        else arr[i] = true;
    }
    for(int i = 0; i < N; i++){
        if(arr[i] == true) cout << "YA" << endl;
        else cout << "BUKAN" << endl;
    }
    return 0;
}