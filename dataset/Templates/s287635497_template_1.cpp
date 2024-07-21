template<typename T>
    std::size_t operator()(T &l, T &r) const noexcept {
        return l < r;
    }