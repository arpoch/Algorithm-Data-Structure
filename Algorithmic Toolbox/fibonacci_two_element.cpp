#include <iostream>
#include <vector>
using std::cin;
using std::cout;

int main()
{
    uint32_t n{0}, element[2] = {0, 1};
    cin >> n;
    for (uint32_t i = 2; i <= n; i++)
    {
        element[i % 2] = element[0] + element[1];
    }
    if (!(n % 2))
    {
        cout << element[0] << '\n';
    }
    else
    {
        cout << element[1] << '\n';
    }
}