#pragma once
#include <string>
#include <vector>

using namespace std;

string copy(int str_no, int pos, int len, const vector<string> &str_list);

string add(string s1, string s2);

int find(string target, int str_no, const vector<string> &str_list);

int rfind(string target, int str_no, const vector<string> &str_list);

void insert(string inserted_str, int str_no, int pos, vector<string> &str_list);

void reset(string str, int str_no, vector<string> &str_list);

void print(int str_no, const vector<string> &str_list);

void printall(const vector<string> &str_list);
