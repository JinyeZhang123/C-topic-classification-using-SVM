template<class T,int N=100000>
class Stack {
private:
    int ary[N];
    int top;
public:
    Stack() : top(0){}