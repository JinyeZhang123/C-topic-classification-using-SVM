class ANumber{
private:
	int have[10];
	int place[10];
	int hit;
	int blow;
public:
	ANumber(){
		int i;
		for(i=0;i<=9;i++){
			have[i] = 0;
			place[i] = 0;
		}                                      