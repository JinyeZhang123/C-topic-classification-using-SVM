template <class It>
    SegmentTree(It first, It last) : SegmentTree(std::distance(first, last)){
        copy(first, last, std::begin(data) + size);
        build();
    }