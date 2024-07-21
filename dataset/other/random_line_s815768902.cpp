        void print_rest(T&& head, Tail&&... tail) const { std::cout << sep << head, print_rest(std::forward<Tail>(tail)...); }
