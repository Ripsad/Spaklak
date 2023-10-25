#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    vector<int> solve;
    solve.push_back(a);
    solve.push_back(b);
    for (int i = 1; i < c; i++){
        if (i < c - 1){
            solve.push_back(solve[i] * solve[i-1]);
        } else {
            cout << solve[i];
        }
    }
    return 0;
}