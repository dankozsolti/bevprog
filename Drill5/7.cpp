#include "std_lib_facilities.h"

int main()
try {
  int x;
  cout << "Type 5: "
  cin >> s;
  if (s == 5) 
  cout << "Success!\n"; 
  else 
  cout << "Fail!\n";
	keep_window_open();
	return 0;
}

catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}

catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
