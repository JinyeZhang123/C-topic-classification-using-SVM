template<typename T> void input_integer(T& var) {
            var = 0;
            T sign = 1;
            int cc = getchar_unlocked();
            for (; cc<'0' || '9'<cc; cc = getchar_unlocked())
                if (cc == '-') sign = -1;
            for (; '0' <= cc&&cc <= '9'; cc = getchar_unlocked())
                var = (var << 3) + (var << 1) + cc - '0';
            var = var*sign;
        }