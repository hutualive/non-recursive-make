#include <iostream>
#include <stdexcept>

#include "hello.hpp" // word0()

using namespace std;


int main(int argc,
	 char * argv[])
{
  int rc = 0;
  try {

    cout << word0() << endl;

  }
  catch(exception & e) {

    cerr << "ERROR: " << e.what() << endl;
    rc = -1;
  }
  return rc;

} // main

