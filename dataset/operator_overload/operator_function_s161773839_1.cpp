inline operator _Tp(){
				_Tp s=0u;char c=gc();
				for(;c<48;c=gc());
				for(;c>47;c=gc())
					s=(_Tp)(s*10u+c-48u);
				return s;
			}