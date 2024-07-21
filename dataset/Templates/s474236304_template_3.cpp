template<class F>
constexpr decltype(auto)
make(F&&f)noexcept {
	return fixture<F>{std::forward<F>(f)}