#include <iostream>

int II() {
    int x;
    std::cin >> x;
    return x;
}

int max_score(int n) {
    if (n > 1) {
        return ((n / 2) * 13) + (n % 2) * 6;
    } else {
        return 6;
    }
}

int main() {
    int iterations = II();
    for (int i = 0; i < iterations; ++i) {
        int n = II();
        int ans = max_score(n);
        std::cout << ans << std::endl;
    }
    return 0;
}
