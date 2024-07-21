template<typename T>
struct Node
{
    T value;
    Node* left;
    Node* right;
    Node()
    {
        left = right = NULL;
    }