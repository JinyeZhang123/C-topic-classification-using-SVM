namespace roadagain
{

struct union_find_node
{
    unsigned parent;
    unsigned lank;

    union_find_node() = default;
    union_find_node(unsigned num)
    {
        this->parent = num;
        this->lank = 1;
    }