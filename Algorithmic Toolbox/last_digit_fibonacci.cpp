#include <iostream>
#include <vector>
using std::cin;
using std::cout;

int main()
{
    uint32_t n{0}, element[2] = {0, 1}, last_digit{0};
    cin >> n;
    for (uint32_t i = 2; i <= n; i++)
    {
        element[i % 2] = ((element[0] + element[1]) % 10);
    }
    if (!(n % 2))
    {
        cout << element[0] % 10 << '\n';
    }
    else
    {
        cout << element[1] % 10 << '\n';
    }
}