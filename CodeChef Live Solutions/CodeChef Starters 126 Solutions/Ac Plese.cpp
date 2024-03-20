#include <iostream>

int II() {
    int x;
    std::cin >> x;
    return x;
}

int main() {
    if (II() > 30) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
