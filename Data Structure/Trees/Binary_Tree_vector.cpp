//Binary Tree using vector in Cpp, adding values from left to right

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
void inorder(std::vector<NODE> *, int);
void postorder(std::vector<NODE> *, int);

int main()
{
    char key = '\0';
    int n{0}, parent_index{0}, root_index{0};
    std::cout << "Total nodes\n";
    std::cin >> n;
    std::vector<NODE> nodes(n);
    for (int child_index = 0; child_index < n; child_index++)
    {
        std::cout << "Enter Key [root_index = 0], ! = Null\n";
        std::cin >> key;
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
    preoder(&nodes, 0); // Time-Complexity is O(n)
    std::cout << '\n';

    std::cout << "\tIn-Order Traversal\n\t";
    inorder(&nodes, 0); // Time-Complexity is O(n)
    std::cout << '\n';

    std::cout << "\tPost-Order Traversal\n\t";
    postorder(&nodes, 0); // TIme Complexity is O(n)
    std::cout << '\n';
    return 0;
}

void preoder(std::vector<NODE> *nodes, int root_index)
{
    if (root_index < nodes->size() && nodes->at(root_index).Key != '!')
    {
        std::cout << (nodes->at(root_index).Key) << '-';
        preoder(nodes, 2 * root_index + 1);
        preoder(nodes, 2 * root_index + 2);
    }
}

void inorder(std::vector<NODE> *nodes, int root_index)
{
    if (root_index < nodes->size() && nodes->at(root_index).Key != '!')
    {
        inorder(nodes, 2 * root_index + 1);
        std::cout << (nodes->at(root_index).Key) << '-';
        inorder(nodes, 2 * root_index + 2);
    }
}

void postorder(std::vector<NODE> *nodes, int root_index)
{
    if (root_index < nodes->size() && nodes->at(root_index).Key != '!')
    {
        inorder(nodes, 2 * root_index + 1);
        inorder(nodes, 2 * root_index + 2);
        std::cout << (nodes->at(root_index).Key) << '-';
    }
}