template<typename F, typename IndexType, typename TargetType>
	IndexType lower_bound(F const& func, IndexType left, IndexType right, TargetType const& t){
		while(true){
			auto const mid = left + (right - left) / 2;
			auto const val = func(mid);
			if(val > t){
				right = mid - 1;
			}