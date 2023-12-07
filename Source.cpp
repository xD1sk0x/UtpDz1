#include <iostream>
#include <vector>
#include <stdexcept>

// ������� ��� ���������� ��������� � �������
int findMax(const std::vector<int>& numbers) {
    // �������� �� ������ ������
    if (numbers.empty()) {
        throw std::invalid_argument("������ ����");
    }

    // ���������� ���������
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
        // ������ �������������
        std::vector<int> numbers = { 5, 2, 9, 1, 7 };
        int maximum = findMax(numbers);

        // ����� ����������
        std::cout << "��������: " << maximum << std::endl;
    }
    catch (const std::invalid_argument& e) {
        // ��������� ���������� ��� ������ �������
        std::cerr << "������: " << e.what() << std::endl;
    }

    return 0;
}