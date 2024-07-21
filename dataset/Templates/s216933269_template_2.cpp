template<typename T, int max_h, int max_w>
class BIT {
private:
    T bit[max_h+1][max_w+1];
    int h, w;
public:
    BIT(int _h = max_h, int _w = max_w) {
        h = _h;
        w = _w;
        memset(bit, 0, sizeof(bit));
    }