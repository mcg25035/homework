#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    int n;
    std::cout << "請輸入陣列大小 n : ";
    std::cin >> n;
    
    if (n > 10) {
        std::cout << "警告：輸入的數字大於 10，可能數字無法滿足隨機並且填滿整個陣列並且不重複。" << std::endl;
    }



    std::vector<int> numbers;
    for (int i = 101; i <= 200; ++i) {
        numbers.push_back(i);
    }

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(numbers.begin(), numbers.end(), g);

    std::vector<std::vector<int>> arr(n, std::vector<int>(n));
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = numbers[idx++];
        }
    }

    std::cout << "產生的 " << n << "x" << n << " 陣列：" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
