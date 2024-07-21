        cin>>v,a+=v,b=min(b+(v?v%2:2),a),c= min(c+!(v%2),b),d=min(d+(v?v%2:2),c),e=min(e+v,d);cout<<e;}
