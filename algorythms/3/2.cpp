#include <iostream>
#include <vector>
#include <cctype>
#include <limits>
#include <algorithm>
using namespace std;
void summa(vector<int> firstData, vector<int> secondData, long int length);
void dif(vector<int> firstData, vector<int> secondData, long int length, int big);
int biggest(vector<int> first, vector<int> second);
int main() {
    char a, c;
    std::cout << "Введите первое число: ";
    std::vector<int> first;
    std::vector<int> second;
    while (std::cin.get(a) && a != ' ' && a != '\n') {
        if (isdigit(a)) { 
            int add = a - '0';
            first.push_back(add);
        }
    }

    std::cout << "Введите знак: ";
    std::cin >> c;

    std::cout << "Введите второе число: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (std::cin.get(a) && a != ' ' && a != '\n') {
        if (isdigit(a)) {
            int add = a - '0';
            second.push_back(add);
        }
    }
    int bigger = 0;
    bigger = biggest(first, second);
    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());
    long int maxLenght;
    if (first.size() > second.size()){
        maxLenght = first.size();
        for (int i = second.size(); i < maxLenght; i++){
            second.push_back(0);
        }
    } else if (second.size() > first.size()){
        maxLenght = second.size();
        for (int i = first.size(); i < maxLenght; i++){
            first.push_back(0);
        }
    } else {
        maxLenght = first.size();
    }
    if (c == '+'){
        summa(first, second, maxLenght);
    } else if (c == '-'){
        dif(first, second, maxLenght, bigger);
    }

    return 0;
}


void summa(vector<int> firstData, vector<int> secondData, long int length){
    vector<int> solve;
    int count = 0;
    int i = 0;
    for (;i < length; i++){
        int sumka = firstData[i] + secondData[i] + count;
        solve.push_back(sumka % 10);
        count = sumka / 10;
    }
    if (count != 0){
        solve.push_back(count);
    }
    reverse(solve.begin(), solve.end());
    for (int i = 0; i < solve.size(); i++){
            cout << solve[i];
        }
        cout << endl;
}

void dif(vector<int> firstData, vector<int> secondData, long int length, int big){
    vector<int> solve;
    int count = 0; int index = 0;
    if (big == 1){
        for (int i = 0; i < length; i++) {
        int durak = firstData[i] - secondData[i] - count;
        if (durak >= 0) {
            solve.push_back(durak);
            count = 0;
        } else {
            count = 1;
            solve.push_back(durak+10);
            index += 1;
        }
    }
    } else {
        for (int i = 0; i < length; i++) {
        int durak = secondData[i] - firstData[i] - count;
        if (durak >= 0) {
            solve.push_back(durak);
            count = 0;
        } else {
            count = 1;
            solve.push_back(durak+10);
            index += 1;
        }
    }
}
    reverse(solve.begin(), solve.end());
    int timesi = 0;
    int n = solve.size();
    for (int i = 0; i < n; i++){
        if (solve[i] == 0 && timesi == 0){
            continue;
        } else {
            if (i != n - 1){
                cout << solve[i];
                timesi += 1;
            } else {
                cout << solve[i];
                timesi += 1;
            }
        }
    }
    if (timesi == 0){
        cout << 0;
    }
    cout << endl;
}

int biggest(vector<int> first, vector<int> second){
    if (first.size() > second.size()){
        return 1;
    } else if (first.size() < second.size()){
        return 2;
    } else if (first.size() == second.size()){
        for (int i = 0; i < first.size(); i++){
            if (first[i] > second[i]){
                return 1;
            } else if (first[i] < second[i]){
                return 2;
            }
        }
    }
    return 1;
}