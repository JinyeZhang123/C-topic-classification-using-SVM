int operator[](int i) {
        if(!tsort_done) tsort();
        return order[i];
    }