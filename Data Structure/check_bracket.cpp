#include <iostream>
#include <string.h>
#include <stack>

struct Bracket
{

    Bracket(char type, u_int32_t position) : type(type), position(position)
    {
    }
    bool Match_char(char c)
    {
        if (type == '{' && c == '}')
            return true;
        else if (type == '[' && c == ']')
            return true;
        else if (type == '(' && c == ')')
            return true;
        else
            return false;
    }
    char type;
    u_int32_t position;
};

int main()
{
    bool flag = true;
    std::stack<Bracket> open_bracs;
    std::stack<Bracket> close_bracs;
    std::string text;
    getline(std::cin, text);
    for (u_int32_t position = 0; position < text.length(); position++)
    {
        char next = text[position];
        if (next == '[' || next == '(' || next == '{')
        {
            Bracket element(next, position + 1);
            open_bracs.push(element);
        }
        if (next == ']' || next == ')' || next == '}')
        {
            Bracket element_close(next, position + 1);
            close_bracs.push(element_close);
            if (open_bracs.empty())
                break;
            Bracket element_open = open_bracs.top();
            if (!(element_open.Match_char(element_close.type)))
            {
                flag = false;
                break;
            }
            close_bracs.pop();
            open_bracs.pop();
        }
    }
    if (flag && open_bracs.size() == close_bracs.size())
    {
        std::cout << "Success\n";
    }
    else if (!close_bracs.empty())
    {
        Bracket elements_close(close_bracs.top());
        std::cout << elements_close.position << '\n';
    }
    else
    {
        Bracket elements_open(open_bracs.top());
        std::cout << elements_open.position << '\n';
    }

    return 0;
}