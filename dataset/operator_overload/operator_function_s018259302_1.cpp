bool operator==(const Card& other)
    {
        return suit == other.suit && num == other.num;
    }