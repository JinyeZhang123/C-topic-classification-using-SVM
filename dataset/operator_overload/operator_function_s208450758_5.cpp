bool operator<(Vec const& a, Vec const& b) {
        int ao = a.ort() , bo = b.ort();
        if(ao != bo) return ao < bo;
        //if(ao == 0) return false;
        return 0 < cross(a, b);
      }