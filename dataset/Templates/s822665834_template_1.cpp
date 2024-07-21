template <class T>
class Node {
private:
  T data;
  Node<T> *prev;
  Node<T> *next;
public:
  Node() {
    data = -1;
    prev = NULL;
    next = NULL;
  }