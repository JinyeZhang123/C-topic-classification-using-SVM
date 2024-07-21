		std::for_each(vprice.begin(),vprice.end(), [&total,buf,&capacity](int x) { capacity != 1 ? (total += x, --capacity) : capacity = buf; } );
