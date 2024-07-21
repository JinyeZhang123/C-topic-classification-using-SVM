class MyArray{
public:
	MyArray() : mSize( 0 ), head( NULL ), tail( NULL ){
		head = new tCell;
		tail = new tCell;
		head->next = tail;
		tail->prev = head;
	}                                        