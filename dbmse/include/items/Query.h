#pragma once

#include <string>

using namespace std;

class Query {
private:
	string query;
	enum supported_statements{SELECT, FROM, WHERE};
public:
	Query();
	Query(string);
	string getString();
	bool syntax_check();
	Query operator+(Query);
	~Query();
};

