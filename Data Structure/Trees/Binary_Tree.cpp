#include <iostream>
#include <vector>

class NODE
{
public:
    char Key;
    NODE()
    {
        Key = '\0';
    }
};
void preoder(std::vector<NODE> *, int);
void ineoder(std::vector<NODE> *, int);
void postoder(std::vector<NODE> *, int);

int main()
{
    char key = '\0';
    int n{0}, parent_index{0}, root_index{0};
    std::cout << "Total nodes\n";
    std::cin >> n;
    std::vector<NODE> nodes(n);
    for (int child_index = 0; child_index < n; child_index++)
    {
        std::cout << "Enter Parent index & Key [root_index = 0] \n";
        std::cin >> parent_index >> key;
        if (parent_index == 0)
        {
            root_index = child_index;
            nodes[child_index].Key = key;
        }
        else
        {
            nodes[child_index].Key = key;
        }
    }
    std::cout << "Traversal\n";
    std::cout << "\tPre-Order Traversal\n\t";
    preoder(&nodes, 0);
    std::cout << "\tIn-Order Traversal\n\t";
    preoder(&nodes, 0);
    return 0;
}

void preoder(std::vector<NODE> *nodes, int root_index)
{
    if (root_index < nodes->size())
    {
        std::cout << (nodes->at(root_index).Key) << '-';
        preoder(nodes, 2 * root_index + 1);
        preoder(nodes, 2 * root_index + 2);
    }
    std::cout << '\n';
}