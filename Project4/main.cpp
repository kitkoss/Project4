#include <iostream>

int main() {
    int num, sum = 0;
    do {
        std::cout << "Napishite chislo: ";
        std::cin >> num;
        sum += num;
    } while (num != 0);

    std::cout << "Suma chisel: " << sum << std::endl;

    return 0;
}