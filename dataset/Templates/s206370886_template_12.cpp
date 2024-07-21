template <typename T, typename U> operator std::vector<std::pair<T, U>>() const {
            std::vector<std::pair<T, U>> a(szi);
            for (std::size_t i = 0; i < szi; ++i) std::cin >> a[i].first >> a[i].second; return a;
        }