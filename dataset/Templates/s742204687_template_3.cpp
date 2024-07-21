template<typename T>
class fixed_point : T {
  public:
    explicit constexpr fixed_point (
        T&& t
      ) noexcept
      : T(forward<T>(t))
      {
      }