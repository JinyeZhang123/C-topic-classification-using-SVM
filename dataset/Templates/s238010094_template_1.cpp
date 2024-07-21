template <class data_t>
class dice{
public:
	vector<data_t> field;
	dice(vector<data_t> v);
	void roll(char ch);
	data_t top(){return field[0];}