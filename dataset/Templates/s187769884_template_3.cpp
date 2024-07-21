template<typename T>
class RangeUpdateQuery {
private:
	vector<T> data, lazy;
	vector<bool> valid, lazyFlag;
	int sz;
	void push(int k) {
		if (this->lazyFlag[k]) {
			this->valid[k] = true;
			this->data[k] = this->lazy[k];
			if (k * 2 + 2 < sz * 2 - 1) {
				this->lazy[k * 2 + 1] = this->lazy[k * 2 + 2] = this->lazy[k];
				this->lazyFlag[k * 2 + 1] = this->lazyFlag[k * 2 + 2] = true;
			}