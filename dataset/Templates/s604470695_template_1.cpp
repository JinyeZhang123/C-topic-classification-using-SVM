template<typename T>
class queue {
public:
    explicit
    queue(int size) : size_(size), head_(0), tail_(0), data_(std::make_unique<T[]>(size)) {}