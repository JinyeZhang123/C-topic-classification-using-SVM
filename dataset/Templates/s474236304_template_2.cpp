template<class ... Arg>
	constexpr decltype(auto)
		operator()(Arg&&...arg)const {
		return F::operator()(*this, std::forward<Arg>(arg)...);
	}