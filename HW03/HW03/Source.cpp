#include <iostream>
#include "String.h"
using namespace std;
int main()
{
	MyString s, t;
	cin >> s >> t;
	cout << s << endl << t << endl;
	cout << s.length() << endl;
	cout << s.subString(2, 3) << endl;
	cout << s << " " << t << endl;
	cout << s.insert(1, "!") << endl;
	cout << s.erase(0, 2) << endl;
	cout << s.replace(0, 2, "abc") << endl;
	cout << s.find(3, "ll") << endl;
	system("pause");
	return 0;
}