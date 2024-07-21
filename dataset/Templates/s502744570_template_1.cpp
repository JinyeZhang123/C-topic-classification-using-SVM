template <typename T>
class doubly_linked_list {
  struct node {
    node* prev_;
    node* next_;
    T x_;
  }