class Solver {
private:
    static const int SIZE = 8;
    deque< deque<bool> > dd;
    void explode(int x, int y);
public:
    Solver() { dd.assign(SIZE, deque<bool>(SIZE,false)); }                  