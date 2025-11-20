#include <iostream>
#include <vector>
#include <chrono>

bool Unique(const std::vector<int>& A) {
    int n = A.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j])
                return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> A = {2, 4, 4, 8, 10};

    auto start = std::chrono::steady_clock::now();
    bool result = Unique(A);
    auto end = std::chrono::steady_clock::now();

    std::cout << "Time taken = "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds" << std::endl;

    std::cout << "Array is " << (result ? "unique." : "not unique.") << std::endl;
    return 0;
}
