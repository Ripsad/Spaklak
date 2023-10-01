#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    cin >> n;
    Person *persones = new Person[n];
    vector<vector<double>> averageIndex;
    for (int i = 0; i < n; i++){
        cin >> persones[i].surname >> persones[i].name >> persones[i].mark1 >> persones[i].mark2 >> persones[i].mark3;
        persones[i].average = (persones[i].mark1 + persones[i].mark2 + persones[i].mark3) / 3;
        averageIndex.push_back({persones[i].average, (double)i});
    }
    vector<int> sortedAverageIndex;
    for (int i = 0; i < averageIndex.size();){
        double controlAverage = averageIndex[0][0];
        int indexLikeA = averageIndex[0][1];
        for(int j = i; j < averageIndex.size(); j++){
            if (averageIndex[j][0] < controlAverage){
                controlAverage = averageIndex[j][0];
                indexLikeA = averageIndex[j][1];
            }
        }
        sortedAverageIndex.push_back(indexLikeA);
        averageIndex.erase(averageIndex.begin() + indexLikeA);
    }
    reverse(sortedAverageIndex.begin(), sortedAverageIndex.end());
    for (int i = 0; i < n; i++){
        cout << persones[sortedAverageIndex[i]].surname << ' ' << persones[sortedAverageIndex[i]].name << endl;
    }
    return 0;
}
