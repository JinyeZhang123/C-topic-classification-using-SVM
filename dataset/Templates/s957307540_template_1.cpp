template<class T>
class BT{
  private:
    struct Node{
      T key;
      Node *par, *lef, *rig;
    }