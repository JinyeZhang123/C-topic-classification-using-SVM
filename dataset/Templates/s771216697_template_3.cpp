template <typename T>
    auto operator () (T && x) -> std::string
    {
        std::ostringstream ss;
        ss << std::forward <T> (x);
        return ss.str ();
    }