[](char c)->char {
        if (c >= 'a' && c <= 'z')
            c &= ~0x20;

        return c;
    }