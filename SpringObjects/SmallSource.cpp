#include <iostream>
#include <vector>
#include <algorithm>  // for std::sort
#include <functional>

using namespace std;

int main() {
    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6 };

    auto it = std::remove_if(numbers.begin(), numbers.end(),
        [](int num) { return num %3 ==0; });
    numbers.erase(it, numbers.end());

    // Output the sorted vector
    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
