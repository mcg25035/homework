#include <iostream>
#include <vector>

using namespace std;

void generatePermutations(int n, vector<int>& permutation) {
    if (n == 0) {
        for (int bit : permutation) {
            cout << bit;
        }
        cout << endl;
        return;
    }

    permutation.push_back(0);
    generatePermutations(n - 1, permutation);
    permutation.pop_back();

    permutation.push_back(1);
    generatePermutations(n - 1, permutation);
    permutation.pop_back();
}

int main() {
    int x;
    cout << "Enter the number of bits: ";
    cin >> x;

    vector<int> permutation;
    generatePermutations(x, permutation);

    return 0;
}