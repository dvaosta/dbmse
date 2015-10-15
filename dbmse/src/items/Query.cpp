#include "..\..\include\items\Query.h"


Query::Query() {

}

Query::Query(string s) {
	query = s;
}

string Query::getString() {
	return query;
}

bool Query::syntax_check() {
	return true;
}

Query Query::operator+(Query q) {
	Query *result_q = new Query(query + q.getString());
	return *result_q;
}

Query::~Query() {
}
