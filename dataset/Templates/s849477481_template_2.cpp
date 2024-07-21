template <class T, class... Tail>
        void print(T&& head, Tail&&... tail) const { std::cout << head, print_rest(std::forward<Tail>(tail)...); }