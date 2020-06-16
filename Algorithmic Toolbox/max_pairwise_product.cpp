#include <iostream>
#include <vector>
#include <algorithm>

uint64_t MaxPairwiseProduct(const std::vector<uint64_t> &numbers)
{
    uint64_t max_product = 0;
    int n = numbers.size();

    for (uint32_t first = 0; first < n; ++first)
    {
        for (uint32_t second = first + 1; second < n; ++second)
        {
            max_product = std::max(max_product, numbers[first] * numbers[second]);
        }
    }

    return max_product;
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
