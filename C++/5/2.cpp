#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Person {
    string surname;
    string name;
    int mark1;
    int mark2;
    int mark3;
    double average;
};

int main() {
    int n;
    cin >> n;
    Person* persones = new Person[n];
    for (int i = 0; i < n; i++) {
        cin >> persones[i].surname >> persones[i].name >> persones[i].mark1 >> persones[i].mark2 >> persones[i].mark3;
        persones[i].average = (persones[i].mark1 + persones[i].mark2 + persones[i].mark3) / 3.0;
    }

    auto Sorting = [](const Person& a, const Person& b) {
        return a.average <= b.average;
    };
    
    sort(persones, persones + n, Sorting);

    // кручу верчу
    for (int left = 0, right = n - 1; left < right; left++, right--) {
        swap(persones[left], persones[right]);
    }

    for (int i = 0; i < n; i++) {
        cout << persones[i].surname << " " << persones[i].name << endl;
    }

    delete[] persones;
    return 0;
}
