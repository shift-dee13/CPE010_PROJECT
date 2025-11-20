#include <iostream>
#include <chrono>

int rpower(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * rpower(x, n - 1);
}

int brpower(int x, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 1) {
        int y = brpower(x, (n - 1) / 2);
        return x * y * y;
    } else {
        int y = brpower(x, n / 2);
        return y * y;
    }
}

int main() {
    int x = 2;
    int n = 1000;

    auto start1 = std::chrono::steady_clock::now();
    int result1 = rpower(x, n);
    auto end1 = std::chrono::steady_clock::now();

    std::cout << "rpower result = " << result1 << std::endl;
    std::cout << "Time taken by rpower = "
              << std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count()
              << " microseconds" << std::endl;

    auto start2 = std::chrono::steady_clock::now();
    int result2 = brpower(x, n);
    auto end2 = std::chrono::steady_clock::now();

    std::cout << "brpower result = " << result2 << std::endl;
    std::cout << "Time taken by brpower = "
              << std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count()
              << " microseconds" << std::endl;

    return 0;
}
