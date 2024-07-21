template <class data_t>
class dice{
	int comp_dice_spin(dice<data_t> d2);
public:
	vector<data_t> field;
	dice(vector<data_t> v);
	void roll(char ch);
	data_t top(){return field[0];}