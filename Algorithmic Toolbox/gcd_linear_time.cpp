#include <iostream>
using std::cin;
using std::cout;
int main()
{
    uint64_t a{0}, b{0}, mod;
    cin >> a >> b;
    while (b != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    cout << a << '\n';
    return 0;
}