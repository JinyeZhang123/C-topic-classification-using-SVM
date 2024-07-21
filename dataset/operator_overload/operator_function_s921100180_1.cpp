node operator+(const node &lhs, const node &rhs)
        {
            node res;
            res.val = max(lhs.val, rhs.val);
            return res;
        }