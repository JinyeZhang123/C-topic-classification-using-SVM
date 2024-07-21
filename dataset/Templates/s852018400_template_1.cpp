template <typename T>class BIT{
private:
	T* bit;int n;
public:
	BIT(int _n){bit=_prepared_bit_table;fill(bit,bit+BIT_SIZE,0);n=_n;}