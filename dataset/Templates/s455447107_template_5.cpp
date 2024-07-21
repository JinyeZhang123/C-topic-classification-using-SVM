template <typename T>
struct Min {
public:
    // 単位元
    T unit;
    
    Min(void) {
        // 単位元
        unit = INF;
    }