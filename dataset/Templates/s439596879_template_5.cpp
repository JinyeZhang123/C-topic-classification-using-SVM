template<typename T>
class BinaryIndexedTree2D {
    int H;
    int W;
    std::vector<std::vector<T> > data2d;
public:
    BinaryIndexedTree2D(int H, int W) : H(H), W(W) {
        data2d.resize(H + 1, std::vector<T>(W + 1, 0));
    }