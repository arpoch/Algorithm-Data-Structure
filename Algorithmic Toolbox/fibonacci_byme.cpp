#include <iostream>
#include <vector>

uint32_t fibonacci_fast(uint32_t n)
{
    std::vector<uint32_t> array(n + 1);
    array[0] = 0;
    array[1] = 1;
    for (uint32_t i = 2; i <= n; i++)
    {
        array[i] = (array[i - 1] + array[i - 2]);
    }
    return array.back();
}

int main()
{
    uint32_t n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
