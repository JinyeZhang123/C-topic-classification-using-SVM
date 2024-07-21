template <class BifirectionalIterator> bool next_partial_permutation(BifirectionalIterator first,BifirectionalIterator last,int k){
	reverse(first+k,last);
	return next_permutation(first,last);
}