bool operator==(const dice &d) {
        for(int i=0; i<6; i++) {
            if(face[i] != d.face[i]) return false;
        }