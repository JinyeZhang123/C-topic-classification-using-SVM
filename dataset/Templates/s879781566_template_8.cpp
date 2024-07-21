template<typename T>
        void output_integer(T var) {
            if (var == 0) {
                putchar_unlocked('0');
                return;
            }