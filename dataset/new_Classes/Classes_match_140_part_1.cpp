class union_find_tree
{
public:
    union_find_tree(unsigned size) : size(size), group(size)
    {
        this->forest = new union_find_node[size];
        for (unsigned i = 0; i < size; i++){
      