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
    setlocale(LC_ALL, "rus");
    try {
        // Пример использования
        std::vector<int> numbers = { 5, 2, 9, 1, 7 };
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