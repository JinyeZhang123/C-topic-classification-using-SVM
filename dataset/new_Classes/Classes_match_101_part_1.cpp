class Field{
private:
	int v[14][14]; //only 2-11 will be used.
public:
	Field(){
		int i, j;
		for(i=0;i<14;i++){
			for(j=0;j<14;j++){
				v[i][j] = 0;
			}                                          