#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "command/commands.hpp"

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

void parse_commands_and_args(const char *ch, queue<string> &commands_and_args);

bool process_commands(queue<string> &commands_and_args, vector<string> &strings);

string extract_args(queue<string> &commands_and_args, vector<string> &strings);

int main()
{

	vector<string> strings;
	queue<string> commands_and_args;

	int num;
	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		string input;
		cin >> input;
		strings.push_back(input);
	}

	cin.clear();   // reset to goodbit
	cin.ignore(1); // extract and discard '\n' characters

	char command[101];
	while (true)
	{
		cin.getline(command, 100, '\n');
		// cout << "command: " << command << endl;
		parse_commands_and_args(command, commands_and_args);
		bool res = process_commands(commands_and_args, strings);
		if (!res)
			break;
	}

	// cout << commands_and_args.size() << endl;
	// while(!commands_and_args.empty()) {
	// 		cout << commands_and_args.front() << endl;
	// 		commands_and_args.pop();
	// }

	// cout << "main func end!!" << endl;

	return 0;
}

void parse_commands_and_args(const char *ch, queue<string> &commands_and_args)
{

	string tmp;

	for (int i = 0; ch[i] != '\0'; ++i)
	{
		if (ch[i] != ' ')
		{
			tmp.push_back(ch[i]);
		}
		else
		{
			commands_and_args.push(tmp);
			tmp.clear();
		}
	}
	commands_and_args.push(tmp);
}

bool process_commands(queue<string> &commands_and_args, vector<string> &strings)
{
	string str = commands_and_args.front();
	commands_and_args.pop();

	if (str == "insert")
	{
		string inserted_str = extract_args(commands_and_args, strings);
		int str_no = stoi(extract_args(commands_and_args, strings));
		int pos = stoi(extract_args(commands_and_args, strings));

		insert(inserted_str, str_no, pos, strings);
	}
	else if (str == "reset")
	{
		string new_str = extract_args(commands_and_args, strings);
		int str_no = stoi(extract_args(commands_and_args, strings));
		reset(new_str, str_no, strings);
	}
	else if (str == "print")
	{
		int str_no = stoi(extract_args(commands_and_args, strings));
		print(str_no, strings);
	}
	else if (str == "printall")
	{
		printall(strings);
	}
	else
		return false;
	return true;
}

string extract_args(queue<string> &commands_and_args, vector<string> &strings)
{
	string str = commands_and_args.front();
	commands_and_args.pop();

	if (str == "copy")
	{
		int str_no = stoi(extract_args(commands_and_args, strings));
		int pos = stoi(extract_args(commands_and_args, strings));
		int len = stoi(extract_args(commands_and_args, strings));
		return copy(str_no, pos, len, strings);
	}
	else if (str == "add")
	{
		string str1 = extract_args(commands_and_args, strings);
		string str2 = extract_args(commands_and_args, strings);
		return add(str1, str2);
	}
	else if (str == "find")
	{
		string target = extract_args(commands_and_args, strings);
		int str_no = stoi(extract_args(commands_and_args, strings));
		return to_string(find(target, str_no, strings));
	}
	else if (str == "rfind")
	{
		string target = extract_args(commands_and_args, strings);
		int str_no = stoi(extract_args(commands_and_args, strings));
		return to_string(rfind(target, str_no, strings));
	}
	else
		return str;
}
