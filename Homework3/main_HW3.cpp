//Description in Homework3.rtf

#include"dynvet.h"
using namespace std;

int main () {
        dynvet test(3);
        cin>>test;
        test.pop_back();
        cout<<test;
        test.push_back();
        cout<<test;
        cout<<"\nElementi allocati: "<<test.get_count();
        cout<<"\nLunghezza array: "<<test.get_size();
        cout<<"\n\n";
        return 0;
}
