#include <iostream>
#include "commands.hpp"

/**
 * @brief copy sub-string of no# string from string list
 *
 * @param[in] str_no no# string
 * @param[in] pos  the start position of sub-string
 * @param[in] len  the length of sub-string
 * @param[in] str_list string list
 * @return string
 */
string copy(int str_no, int pos, int len, const vector<string> &str_list)
{
	string str = str_list.at(str_no - 1);
	return str.substr(pos, len);
}

string add(string s1, string s2)
{
	for (std::string::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		if (*it < '0' || *it > '9')
			return s1 + s2;
	}
	for (std::string::iterator it = s2.begin(); it != s2.end(); ++it)
	{
		if (*it < '0' || *it > '9')
			return s1 + s2;
	}

	int num_1 = std::stoi(s1);
	int num_2 = std::stoi(s2);
	if (num_1 >= 0 && num_1 <= 99999 && num_2 >= 0 && num_2 <= 99999)
	{
		return to_string(num_1 + num_2);
	}
	else
	{
		return s1 + s2;
	}
}

int find(string target_str, int str_no, const vector<string> &str_list)
{
	string str = str_list.at(str_no - 1);
	int res = str.find_first_of(target_str);
	if (res != string::npos)
		return res;
	else
		return str.length();
}

int rfind(string target_str, int str_no, const vector<string> &str_list)
{
	string str = str_list.at(str_no - 1);
	int res = str.find_last_of(target_str);
	if (res != string::npos)
		return res;
	else
		return str.length();
}

void insert(string inserted_str, int str_no, int pos, vector<string> &str_list)
{
	str_list.at(str_no - 1).insert(pos, inserted_str);
}

/**
 * @brief set the value of #no string for string list
 *
 * @param[in] str the string you want to set
 * @param[in] str_no #no string of string list
 * @param[in, out] str_list the string list
 */
void reset(string str, int str_no, vector<string> &str_list)
{
	str_list.at(str_no - 1) = str;
}

void print(int str_no, const vector<string> &str_list)
{
	cout << str_list.at(str_no - 1) << endl;
}

void printall(const vector<string> &str_list)
{
	for (vector<string>::const_iterator i = str_list.begin(); i != str_list.end(); ++i)
	{
		cout << *i << endl;
	}
}
