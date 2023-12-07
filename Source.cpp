#include <iostream>
#include <vector>
#include <stdexcept>

// Функция для нахождения максимума в векторе
int findMax(const std::vector<int>& numbers) {
    // Проверка на пустой вектор
    if (numbers.empty()) {
        throw std::invalid_argument("Вектор пуст");
    }

    // Нахождение максимума
    int max = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

int main() {
    try {
        // Ввод количества чисел
        std::cout << "Введите количество чисел: ";
        size_t count;
        std::cin >> count;

        // Ввод самих чисел
        std::vector<int> numbers;
        numbers.reserve(count); // Резервируем память заранее
        std::cout << "Введите числа через пробел: ";
        for (size_t i = 0; i < count; ++i) {
            int num;
            std::cin >> num;
            numbers.push_back(num);
        }

        // Вызов функции для нахождения максимума
        int maximum = findMax(numbers);

        // Вывод результата
        std::cout << "Максимум: " << maximum << std::endl;
    }
    catch (const std::invalid_argument& e) {
        // Обработка исключения при пустом векторе
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}