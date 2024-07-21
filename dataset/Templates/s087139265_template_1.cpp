template<typename T> void print_queue(T& q) {
                while(!q.empty()) {
                    std::cout << q.top() << " ";
                    q.pop();
                }