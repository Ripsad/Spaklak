#include <iostream> // Подключаем библиотеку для работы с вводом и выводом
#include <vector>   // Подключаем библиотеку для работы с динамическим массивом (vector)
#include <algorithm>// Подключаем библиотеку для работы с алгоритмами, такими как sort
#include <string>   // Подключаем библиотеку для работы со строками
using namespace std;
// Определяем структуру "Friend"
struct Friend {
    string surname;    // Поле для фамилии
    string name;       // Поле для имени
    string class_name; // Поле для класса
    string birthdate;  // Поле для даты рождения

    // Конструктор структуры, который позволяет инициализировать поля значениями
    Friend(string s, string n, string c, string b)
        : surname(s), name(n), class_name(c), birthdate(b) {}
};

// Функция сравнения для двух объектов структуры "Friend"
bool compare(const Friend &a, const Friend &b) {
    if (a.class_name == b.class_name) {
        return a.surname < b.surname;
    }
    return a.class_name < b.class_name;
}

// Основная функция программы
int main() {
    int n; // Переменная для количества друзей
    cin >> n; // Считываем количество друзей

    vector<Friend> friends; // Создаем динамический массив для хранения друзей
    for (int i = 0; i < n; ++i) { // Цикл для считывания данных о друзьях
        string surname, name, class_name, birthdate; 
        cin >> surname >> name >> class_name >> birthdate; // Считываем данные о каждом друге
        friends.emplace_back(surname, name, class_name, birthdate); // Добавляем друга в массив
    }

    // Сортируем массив друзей с помощью стандартной функции sort и ранее определенной функции сравнения
    sort(friends.begin(), friends.end(), compare);

    // Выводим отсортированный список друзей
    for (auto fr : friends) {
        cout << fr.class_name << " " << fr.surname << " " << fr.name << " " << fr.birthdate << "\n";
    }

    return 0; // Завершаем программу
}
