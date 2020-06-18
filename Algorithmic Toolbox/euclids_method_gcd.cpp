#include <iostream>
using std::cin;
using std::cout;
uint32_t euclids_method()
{
    uint32_t a{0}, b{0};
    cin >> a >> b;
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
    cout << euclids_method() << '\n';
    return 0;
}