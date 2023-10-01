#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Person{
    string name;
    string surname;
    int mark1;
    int mark2;
    int mark3;
};

int main(){
    int n;
    cin >> n;
    Person *persones = new Person[n];
    for (int i = 0; i < n; i++){
        cin >> persones[i].surname >> persones[i].name >> persones[i].mark1 >> persones[i].mark2 >> persones[i].mark3;
    }
    double one = 0,two = 0,three = 0;
    for (int i = 0; i < n; i++){
        one += persones[i].mark1;
        two += persones[i].mark2;
        three += persones[i].mark3;
    }
    cout << fixed << setprecision(1) << one / n << ' ' << two / n << ' ' << three / n;
}

