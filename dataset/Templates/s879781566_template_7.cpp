template<typename IT> void in(IT begin, IT end) {
            for (auto it = begin; it != end; ++it) *this >> *it;
        }