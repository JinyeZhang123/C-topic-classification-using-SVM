bool operator==(const Cube& a, const Cube& b) {
  Cube c = b;
  // http://www.prefield.com/algorithm/misc/dice.html
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (a.equal_faces(c))
        return true;
      c.rotate_z();
    }