template<typename T>
class Heap
{
private:
  int parent(int i) {return i/2;}