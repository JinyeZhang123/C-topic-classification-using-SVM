template<class T, int N=100000>
class Queue {
private:
    T ary[N];
    int head,tail;
public:
    Queue() : head(0),tail(0) {}