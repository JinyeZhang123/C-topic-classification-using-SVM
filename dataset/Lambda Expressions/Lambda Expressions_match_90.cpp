[&](){
                for( int i=1; i<5; ++i ) {
                    if ( cs[i-1] + 1 != cs[i] )
                        return false;
                }