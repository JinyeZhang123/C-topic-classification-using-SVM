template<unsigned int CAP>
struct BoolArray {
  typedef int memory_t;
  memory_t K;
  memory_t data[CAP];
  BoolArray() { clear_deep(); }