template<typename F, typename IndexType, typename TargetType>
	pair<bool, IndexType> lower_bound(F const& func, IndexType left, IndexType right, TargetType const& t){
		while(left <= right){
			auto const mid = left + (right - left) / 2;
			auto const val = func(mid);
			if(val > t){
				right = mid - 1;
			}