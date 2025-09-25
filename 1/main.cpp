#include <iostream>
#include "box_capacity.h"


int main() {
    int length, width, height;
    std::cout << "Введите размеры комнаты: ";
    std::cin >> length >> width >> height;
    std::cout << "Ответ: " << Timaty::BoxCapacity(length, width, height) << std::endl;
    return 0;
}