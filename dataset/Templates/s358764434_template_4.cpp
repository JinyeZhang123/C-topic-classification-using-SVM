template<typename T>
auto shellSort(std::vector<T> *A,int n)
 -> void{
 	cnt = 0;

 	int h = 0;
 	std::vector<int> G;
    for(int k = 1;;k++){
    	h = static_cast<int>((pow(3,k)-1)/2);
    	if(h > n)
    		break;
    	G.push_back(h);
    }