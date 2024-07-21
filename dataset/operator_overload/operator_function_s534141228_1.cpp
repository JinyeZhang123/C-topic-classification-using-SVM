bool operator!=(const Card& card) {
		return value != card.value || mark != card.mark;
	}