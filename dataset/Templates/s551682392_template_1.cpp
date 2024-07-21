template<typename T>
class BIT {
private:
	vector<T>arr;
	int siz;
public:
	BIT(int n) :siz(1) {
		while (siz < n)siz *= 2;
		arr.resize(siz + 1);
	}