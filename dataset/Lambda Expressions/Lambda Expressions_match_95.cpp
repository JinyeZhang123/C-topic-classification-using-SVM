[]( int index ){
		tCell* cell = head->next;
		for ( int i = 0; i < index; ++i ){
			cell = cell->next;
		}