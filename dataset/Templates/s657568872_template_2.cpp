template<typename T>
class MySet
{
    Node<T>* root_;
    std::pair<Node<T>*, bool> insert(const T& value, Node<T>* node)
    {
        if(node->value == value){
            return std::make_pair(node, false);
        }