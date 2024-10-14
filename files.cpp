#include <iostream>
#include <fstream>

int main() {
    // Создание объектов для работы с файлами
    std::ofstream outFile;
    std::ifstream inFile;

    // Открыие файла для записи
    outFile.open("example.txt");

    if (!outFile.is_open()) {
        std::cout << "Ошибка при открытии файла для записи." << std::endl;
        return 1;
    }

    // Запись в файл
    outFile << "Это пример текста, который мы записываем в файл.\n";
    outFile << "Добавление еще одной строки.\n";

    // Закрытие файла
    outFile.close();

    // Открытие файла для чтения
    inFile.open("example.txt");

    if (!inFile.is_open()) {
        std::cout << "Ошибка при открытии файла для чтения." << std::endl;
        return 1;
    }

    // Чтение содержимогго файла
    char ch;
    while (inFile.get(ch)) {
        std::cout << ch;
    }

    // Закрытие файла после чтения
    inFile.close();

    return 0;
}
