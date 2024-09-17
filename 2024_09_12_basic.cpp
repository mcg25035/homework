#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    const int n = 5;

    std::vector<int> numbers;
    for (int i = 101; i <= 200; ++i) {
        numbers.push_back(i);
    }

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(numbers.begin(), numbers.end(), g);

    int arr[n][n];
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = numbers[idx++];
        }
    }
    
    std::cout << "產生的 5x5 陣列：" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
