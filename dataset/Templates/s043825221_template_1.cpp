template<class T>
class Dice{
  private:
    T a, b, c, d, e, f, z;
    T table[6][6];
  public:
    void make(T A, T B, T C, T D, T E, T F){
      a = A;
      b = B;
      c = C;
      d = D;
      e = E;
      f = F;
      table[0][0] = z;
      table[0][1] = c;
      table[0][2] = e;
      table[0][3] = b;
      table[0][4] = d;
      table[0][5] = z;

      table[1][0] = d;
      table[1][1] = z;
      table[1][2] = a;
      table[1][3] = f;
      table[1][4] = z;
      table[1][5] = c;

      table[2][0] = b;
      table[2][1] = f;
      table[2][2] = z;
      table[2][3] = z;
      table[2][4] = a;
      table[2][5] = e;

      table[3][0] = e;
      table[3][1] = a;
      table[3][2] = z;
      table[3][3] = z;
      table[3][4] = f;
      table[3][5] = b;

      table[4][0] = c;
      table[4][1] = z;
      table[4][2] = f;
      table[4][3] = a;
      table[4][4] = z;
      table[4][5] = d;

      table[5][0] = z;
      table[5][1] = d;
      table[5][2] = b;
      table[5][3] = e;
      table[5][4] = c;
      table[5][5] = z;
    }