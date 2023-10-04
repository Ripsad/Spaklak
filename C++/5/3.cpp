#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdio>
using namespace std;

struct Person{
    string name;
    string surname;
    string classroom;
    string birthday;
    void output(string name, string surname, string classroom, string birthday){
        printf("%s %s %s %s", classroom, surname, name, birthday);
    } 

};

int main(){
    int n;
    cin >> n;
    Person *persones = new Person[n];
    for (int i = 0; i < n; i++){
        cin >> persones[i].surname >> persones[i].name >> persones[i].classroom >> persones[i].birthday;
    }
    auto Sorting = [](const Person& a, const Person& b){
        return a.classroom < b.classroom || (a.classroom == b.classroom && a.surname < b.surname);
    };
    sort(persones, persones + n, Sorting);
    for (int i = 0; i < n; i++){
        cout << persones[i].classroom << " " << persones[i].surname << " " << persones[i].name << " " << persones[i].birthday << endl; 

    }
    return 0;
}

