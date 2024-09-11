#pragma once
#include <string>
#include <vector>

using namespace std;

string copy(int str_no, int pos, int len, vector<string> str_list);

string add(string s1, string s2);

int find(string target, int str_no, vector<string> str_list);

int rfind(string target, int str_no, vector<string> str_list);

void insert(string input, int str_no, int pos);

void reset(string str, int str_no);

void print(int str_no);

void printall();

void over();
