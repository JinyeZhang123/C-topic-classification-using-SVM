struct _Writer { ostream &cout; bool f{ false }; template <class T> _Writer operator ,(const T &rhs) { cout << (f ? " " : "") << rhs; f = true; return *this; } };
