bool operator<(const d &a, const d &b){
  if(a.prob == b.prob)
  {
    if(a.time == b.time)
    {
      return a.team > b.team;
    }