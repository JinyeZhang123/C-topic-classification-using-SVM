template <class T>
class Stack{
  //メンバ関数
public:
  struct Node{
    Node* prev; //前のノードへのポインタ
    Node* next; //後のノードへのポインタ
    T value; //このノードに格納されているデータ
  }