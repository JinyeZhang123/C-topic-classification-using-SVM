template <class T>
class dice { 
	public:
		dice() {
			id[TOP] = 0; id[FRONT] = 1; id[LEFT] = 2;
			id[RIGHT] = 3; id[BACK] = 4; id[BOTTOM] = 5;
		}