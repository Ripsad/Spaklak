#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Person
{
    string surname;
    string name;
    int mark1;
    int mark2;
    int mark3;
    double average;
};

int main(){
    int n;
    Person *persones = new Person[n];
    vector<vector<double>> averageIndex;
    for (int i = 0; i < n; i++){
        cin >> persones[i].surname >> persones[i].name >> persones[i].mark1 >> persones[i].mark2 >> persones[i].mark3;
        persones[i].average = (persones[i].mark1 + persones[i].mark2 + persones[i].mark3) / 3;
        averageIndex.push_back({persones[i].average, (double)i});
    }
    vector<int> sortedAverageIndex;
    for (int i = 0; i < n; i++){
        double control = averageIndex[i][0];
        for(int j = i + 1; j < n; j++){
            
        }

    }
}
