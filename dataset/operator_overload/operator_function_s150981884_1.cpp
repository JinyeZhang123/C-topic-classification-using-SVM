Node operator+(const Node &rhs)
    {
        Node a = *this;
        a.val = max(a.val, rhs.val);
        return a;
    }