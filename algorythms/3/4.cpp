#include <iostream>
#include <vector>
#include <cctype>
#include <limits>
#include <algorithm>
using namespace std;
int main() {
    char a, c;
    std::cout << "Введите первое число: ";
    std::vector<int> first;
    std::vector<int> second;
    int flag = 0;
    while (std::cin.get(a) && a != ' ' && a != '\n') {
        if (a == '-'){
            flag++;
            continue;
        }
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
        if (a == '-'){
            flag++;
            continue;
        }
        if (isdigit(a)) {
            int add = a - '0';
            second.push_back(add);
        }
    }
    if ((first.size() == 1 && first[0] == 0) ||(second.size() == 1 && second[0] == 0)){
        cout << 0;
        return 0;
    }
    vector<vector<int>> solve;
    reverse(first.begin(), first.end());
    reverse(second.begin(), second.end());
    for (int i = 0; i < first.size(); i++){
        vector<int> input;
        int was = 0;
        for (int x = 0; x < i; x++){
                input.push_back(0);
            }
        for (int j = 0; j < second.size(); j++){
            int count = first[i] * second[j];
            input.push_back(count % 10 + was); // мысль про нули в конце
            was = count / 10;
        }
        if (was > 0){
            input.push_back(was);
        }
        solve.push_back(input);
    }
    int max = 0;
    for (int i = 0; i < solve.size(); i++){
        int now = solve[i].size();
        if (now >= max){
            max = now;
        }
    }
    for (int i = 0; i < solve.size(); i++){
        for (int x = solve[i].size(); x < max; x++){
            solve[i].push_back(0);
        }
    }
    vector<int> result;
    int was = 0;
    for (int i = 0; i < max; i++){
        int count = 0;
        for (int j = 0; j < solve.size(); j++){
            count += solve[j][i];
        }
        result.push_back(count % 10 + was);
        was = count / 10;
    }
    if (was > 0){
        result.push_back(was);
    }
    if (flag % 2 != 0){
        cout << '-';
    }
    reverse(result.begin(), result.end());
    for (int i = 0; i < result.size();i++){
        cout << result[i];
    }
    cout << endl;
    return 0;
}