#ifndef _bad_op_h
#define _bad_op_h
#include <string>
using std::string;

class operazione {
private:
	string msg;
	public:
	operazione(string m="errore"): msg(m) {}
	string what() const {return msg;}
};

#endif //_bad_op_h
