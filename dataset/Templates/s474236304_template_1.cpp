template<class F>
class fixture:  F {
public :
	explicit constexpr fixture(F&& f)noexcept
		:F(std::forward<F>(f)){}