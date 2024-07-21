template<class T>
struct RollingHash{
	int Base=283;
	const int MASK30=(1ll<<30)-1;
	const int MASK31=(1ll<<31)-1;
	const int MOD=(1ll<<61)-1;
	vector<int>hash,power;
	int calcmod(int v){
		v=(v&MOD)+(v>>61);
		if(v>MOD)v-=MOD;
		return v;
	}