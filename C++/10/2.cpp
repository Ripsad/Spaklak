#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    double *arr = new double[size];
    int count = 0;
    for (int i = 1; i < size + 1; i++){
        arr[i-1] = i;
        count += i;
    }
    cout << count;
    delete[] arr;
}