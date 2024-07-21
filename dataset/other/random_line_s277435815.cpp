    static T1 op2(const T1& l,const T2& r) { return r != MonoidAct::id() ? r : l; }
