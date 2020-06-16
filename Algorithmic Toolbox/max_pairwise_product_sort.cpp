#include <iostream>
#include <vector>
#include <algorithm>

uint64_t MaxPairwiseProduct(std::vector<uint64_t> &numbers)
{
    sort(numbers.begin(), numbers.end());
    return numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<uint64_t> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}