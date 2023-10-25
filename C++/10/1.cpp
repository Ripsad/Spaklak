#include <iostream>
using namespace std;
int main(){
    double **p;
    double n;
    cin >> n;
    *p = &n;
    cout << *p;
}