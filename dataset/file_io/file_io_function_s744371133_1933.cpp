int main(int argc, char** argv) {
#ifdef HIRO
  string quiz(argv[1]);
  string id(argv[2]);
  string filename("input/" + quiz + "/" + id + ".txt");
  ifstream fin(filename);
  if (fin.peek() == ifstream::traits_type::eof()) {
    cout << "No input.";
    return 0;
  }