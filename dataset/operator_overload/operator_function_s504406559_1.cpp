inline operator _Tp(){
				_Tp s=0;char c=gc();
				for(;c<48;c=gc());
				for(;47<c;c=gc())
					s=s*10+c-48;
				return s;
			}