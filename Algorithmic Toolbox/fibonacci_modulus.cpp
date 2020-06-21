#include <iostream>
using std::cin;
using std::cout;

u_int64_t period(u_int64_t m)
{
    u_int64_t a{0}, b{1}, i{2};
    do
    {
        if (i % 2 == 0)
        {
            a += b;
            a = a % m;
        }
        else
        {
            b += a;
            b = b % m;
        }
        i++;
    } while ((a != (m - 1) || b != 1));
    return i;
}
int main()
{
    u_int64_t m{0}, n{0}, remainder{0}, elements[2] = {0, 1};
    cin >> n >> m;
    //cout << period(n);
    remainder = n % period(m);
    for (u_int64_t i = 2; i <= remainder; i++)
    {
        elements[i % 2] = (elements[0] + elements[1]) % m;
        cout << elements[0] << '\t' << elements[1] << '\n';
    }
    if (remainder % 2 == 0)
    {
        cout << elements[0] << '\n';
    }
    else
    {
        cout << elements[1] << '\n';
    }
    return 0;
}