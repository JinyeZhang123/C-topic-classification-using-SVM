template<class OutputIterator>
auto merge(
	  OutputIterator first
	, OutputIterator mid
	, OutputIterator last) ->ull{
 
//	if (first == last)return 0;

//	std::cout << *beg << " - " << *(en - 1) << "\n";



	std::vector< std::decay_t<decltype(*first)> >
		left{ first, mid }