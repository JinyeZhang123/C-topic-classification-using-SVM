template <class T>
class dice {
public:
  dice(T *v) {
    id[TOP] = 0; id[FRONT] = 1; id[LEFT] = 2;
    id[RIGHT] = 3; id[BACK] = 4; id[BOTTOM] = 5;
    REP(i,6)
      var[i] = v[i];
  }