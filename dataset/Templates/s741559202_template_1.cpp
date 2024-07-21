template <class T>
class mlist {
	private:
		typedef struct elm_ {
			struct elm_* next;
			struct elm_* prev;
			T value;
		}