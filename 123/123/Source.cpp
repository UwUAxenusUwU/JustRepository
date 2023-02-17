#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const* argv[]) {
    setlocale(LC_ALL, "Rus");

    std::vector<std::string> names{ {"Первая", "Вторая", "Третья", "Четвертая", "Пятая"} };
    unsigned int number;
    std::cout << "Эй ты, говна кусок, число введи: ";
    std::cin >> number;
    std::string s_number = std::to_string(number);
    if (s_number.size() > names.size()) {
        std::cout << "Ты шо борзый? Максимальное кол-во чисел в числе: " << names.size() << '\n';
        return -1;
    }
    for (size_t i = 0; i < s_number.size(); i++) {
        std::cout << names[i] << " цифра числа: " << s_number[i] << '\n';
    }
    return 0;
}