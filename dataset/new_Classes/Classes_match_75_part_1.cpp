class myArray{
public:
	myArray() : mSize( 0 ), head( NULL ), tail( NULL ){
		tail = new tCell;
		head = new tCell;
		head->prev = tail->next = NULL;
		head->next = tail;
		tail->prev = head;
		head->