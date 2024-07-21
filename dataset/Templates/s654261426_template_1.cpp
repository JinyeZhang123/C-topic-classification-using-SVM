template<typename T>
auto print(std::vector<T> array) 
 -> void{
	auto iterator = array.begin();
	std::cout<<*iterator;
	iterator++;
	for(;iterator!=array.end();++iterator){
		std::cout<<" "<< *iterator;
	}