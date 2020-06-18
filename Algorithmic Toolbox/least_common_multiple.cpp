#include <iostream>
using std::cin;
using std::cout;
uint64_t euclids_method(uint64_t a, uint64_t b)
{
    while (b != a)
    {
        if (a < b)
        {
            std::swap(a, b);
        }
        a -= b;
    }
    return a;
}
int main()
{
    uint64_t a{0}, b{0};
    cin >> a >> b;
    cout << (a / euclids_method(a, b)) * b << '\n';
    return 0;
}