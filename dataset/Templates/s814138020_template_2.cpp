template< 
	template< typename T = int, typename A = std::allocator<T> >
		class Container >
void display(Container< > lists) {
	for(typename Container<>::itertor it = lists.begin();
		it != lists.end(); ++it) {
		if( it != lists.begin() ) std::cout << " ";
		std::cout << (*it);
	}