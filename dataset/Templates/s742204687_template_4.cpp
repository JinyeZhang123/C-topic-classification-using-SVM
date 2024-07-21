template<typename... Args>
    constexpr decltype(auto)
    operator()(
        Args&&... args
      ) const
      {
        return T::operator()(*this, forward<Args>(args)...);
      }