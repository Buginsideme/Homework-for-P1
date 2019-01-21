#ifndef _noAuth_h
#define _noAuth_h

#include<iostream>
#include<cstring>
using namespace std;

namespace mns {

class noauth {
private:
      string msg;
      string info;
public:
      noauth(const string & m="NoAuth: errore", const string & s="") : msg(m), info(s){}
      string what() const {return msg;}
      string get_info() const {return info;}
};

} //end_namespace

#endif //_noAuth_h
