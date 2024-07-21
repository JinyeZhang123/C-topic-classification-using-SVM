template <class Tval>
class rmq {
private:
    class node {
    public:
        unsigned int children[2];
        unsigned int parent;
        unsigned int begin;
        unsigned int split;
        unsigned int end;
        Tval value;
    }