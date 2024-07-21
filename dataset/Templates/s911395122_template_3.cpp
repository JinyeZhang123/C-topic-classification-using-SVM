template <class T> T roma_to_arabic(string s) {
    auto number = [](char c) -> int {
        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        if (c == 'M')
            return 1000;
    }