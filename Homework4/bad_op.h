//Description in Homework4.rtf
#ifndef _bad_op_h
#define _bad_op_h
#include <string>
using std::string;

namespace mionamespace {

class operazione {
private:
	string msg;
	public:
	operazione(string m="errore"): msg(m) {}
	string what() const {return msg;}
};

} //end_namespace

#endif //_bad_op_h
