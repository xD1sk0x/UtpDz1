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
    try {
        // ���� ���������� �����
        std::cout << "������� ���������� �����: ";
        size_t count;
        std::cin >> count;

        // ���� ����� �����
        std::vector<int> numbers;
        numbers.reserve(count); // ����������� ������ �������
        std::cout << "������� ����� ����� ������: ";
        for (size_t i = 0; i < count; ++i) {
            int num;
            std::cin >> num;
            numbers.push_back(num);
        }

        // ����� ������� ��� ���������� ���������
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