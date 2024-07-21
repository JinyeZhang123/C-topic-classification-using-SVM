template <class... Args>
        void operator()(Args&&... args) const { print(std::forward<Args>(args)...); }