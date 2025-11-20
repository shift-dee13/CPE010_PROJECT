#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int search(const vector<int>& x, int target) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == target) return i;
    }
    return -1;
}

bool diff(const vector<int>& x, const vector<int>& y) {
    for (int i = 0; i < y.size(); i++) {
        if (search(x, y[i]) != -1) {
            return false;
        }
    }
    return true;
}

void test_diff(int size) {
    vector<int> x, y;
    for (int i = 0; i < size; i++) {
        x.push_back(i);
        y.push_back(i + size);
    }

    auto start = chrono::high_resolution_clock::now();
    bool result = diff(x, y);
    auto end = chrono::high_resolution_clock::now();

    cout << "Size: " << size << " | Result: " << (result ? "Different" : "Overlap")
         << " | Time: " << chrono::duration_cast<chrono::microseconds>(end - start).count()
         << " microseconds" << endl;
}

int main() {
    test_diff(10);
    test_diff(20);
    test_diff(30);
    return 0;
}

