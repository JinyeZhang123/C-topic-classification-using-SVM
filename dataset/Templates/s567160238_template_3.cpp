template< typename G >
struct ArticulationPoints : LowLink< G >
{
  using LL = LowLink< G >;

  ArticulationPoints(const G &g) : LL(g) {}