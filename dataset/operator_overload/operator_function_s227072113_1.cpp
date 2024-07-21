bool operator==(Dice &other)
  {
    if(T==other.T &&
       S==other.S &&
       E==other.E &&
       W==other.W &&
       N==other.N &&
       D==other.D)
    {
      return true;
    }