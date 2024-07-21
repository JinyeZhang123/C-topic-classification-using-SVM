template <class T>
class mydice : public dice<T> {
	public:
		mydice(T top, T front, T right, T left, T back, T bottom) {
			this->var[this->id[TOP]] = top;
			this->var[this->id[FRONT]] = front;
			this->var[this->id[RIGHT]] = right;
			this->var[this->id[LEFT]] = left;
			this->var[this->id[BACK]] = back;
			this->var[this->id[BOTTOM]] = bottom;
		}