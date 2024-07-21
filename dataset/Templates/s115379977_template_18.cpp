template<typename S, typename T> class numeric_limits<pair<S, T>> {
	public:
		static constexpr pair<S, T> max() noexcept { return { numeric_limits<S>::max(), numeric_limits<T>::max() }