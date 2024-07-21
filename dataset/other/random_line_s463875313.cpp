    static_assert(is_convertible<decltype(can), function<bool(T)>>::value, "can must be bool(T)");
