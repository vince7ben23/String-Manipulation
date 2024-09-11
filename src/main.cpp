#include <iostream>
#include <string>
#include <vector>
#include "common/common.hpp"

using namespace std;

/*
input:
--------------------------------------------------
3
329strjvc
Opadfk48
Ifjoqwoqejr
insert copy 1 find 2 1 2 2 2
print 2
reset add copy 1 find 3 1 3 copy 2 find 2 2 2 3
print 3
insert a 3 2
printall
over
--------------------------------------------------

hint:
--------------------------------------------------
insert copy 1 find 2 1 2 2 2
recursive call
insert(copy(1, find(2, 1), 2), 2, 2)
--------------------------------------------------
*/

vector<string> strings;

int main() {
	
	int num;
	cin >> num;

	for (int i = 0; i < num; ++i) {
		string input;
		cin >> input;
		strings.push_back(input);
	}
	

	/*
	for (vector<string>::const_iterator i = strings.begin(); i != strings.end(); ++i) {
		cout << *i << endl;
	}*/

	/*
	string str = copy(1, 2, 5, strings);
	cout << str << endl;
	*/

	/*
	int res = find(string("abc"), 1, strings);
	cout << res << endl;
	*/

	int res2 = rfind(string("def"), 1, strings);
	cout << res2 << endl;


	/*
	string str1 = "abc";
	string str2 = "def";
	cout << add(str1, str2) << endl;

	string str3 = "123";
	string str4 = "456";
	cout << add(str3, str4) << endl;

	string str5 = "-100000";
	string str6 = "-100000";
	cout << add(str5, str6) << endl;
	*/

	cout << "main func end!!" << endl;

	return 0;
}