#include "common.hpp"

string copy(int str_no, int pos, int len, vector<string> str_list) {
	string str = str_list.at(str_no - 1);
	return str.substr(pos, len);
}

string add(string s1, string s2) {
	for (std::string::iterator it = s1.begin(); it != s1.end(); ++it) {
		if (*it < '0' || *it > '9') return s1 + s2;
	}
	for (std::string::iterator it = s2.begin(); it != s2.end(); ++it) {
		if (*it < '0' || *it > '9') return s1 + s2;
	}

	int num_1 = std::stoi(s1);
	int num_2 = std::stoi(s2);
	if (num_1 >= 0 && num_1 <= 99999 && num_2 >= 0 && num_2 <= 99999) {
		return to_string(num_1 + num_2);
	}
	else {
		return s1 + s2;
	}
}

int find(string target_str, int str_no, vector<string> str_list) {
	string str = str_list.at(str_no - 1);
	int res = str.find_first_of(target_str);
	if (res != string::npos) return res;
	else return str.length();
}

int rfind(string target_str, int str_no, vector<string> str_list) {
	string str = str_list.at(str_no - 1);
	int res = str.find_last_of(target_str);
	if (res != string::npos) return res;
	else return str.length();
}

void insert(string inserted_str, int str_no, int pos) {
}

void reset(string str, int str_no) {
}

void print(int str_no) {
}

void printall() {
}

void over() {
}
