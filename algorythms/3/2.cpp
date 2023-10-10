#include <iostream>
#include <vector>
#include <cctype>
#include <limits>
using namespace std;
int main() {
    char a, c;
    std::cout << "Введите первое число: ";
    std::vector<int> first;
    std::vector<int> second;

    // Считываем первое число символ за символом до пробела или новой строки
    while (std::cin.get(a) && a != ' ' && a != '\n') {
        if (isdigit(a)) { // Проверка, что символ - цифра
            int add = a - '0';
            first.push_back(add);
        }
    }

    std::cout << "Введите знак: ";
    std::cin >> c;

    std::cout << "Введите второе число: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Считываем второе число символ за символом до пробела или новой строки
    while (std::cin.get(a) && a != ' ' && a != '\n') {
        if (isdigit(a)) { // Проверка, что символ - цифра
            int add = a - '0';
            second.push_back(add);
        }
    }

    if (c == '-'){
        vector<int> solve;
        
        
    }

    // Вывод считанных чисел
    std::cout << "Первое число: ";
    for (int i : first) {
        std::cout << i;
    }
    std::cout << std::endl;

    std::cout << "Второе число: ";
    for (int i : second) {
        std::cout << i;
    }
    std::cout << std::endl;

    return 0;
}
