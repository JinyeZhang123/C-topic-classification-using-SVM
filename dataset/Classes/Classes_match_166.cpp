class Baseball {

	std::array<bool, 3> base;//base[0]:first, base[1]:second, base[2]:third
	int point,outcount,inning;

public:
	/*construtor*/
	Baseball(int ing) {
		for (int i = 0; i < (int)base.size(); ++i){
			base[i] = false;
		}