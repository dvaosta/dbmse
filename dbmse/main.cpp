#include <iostream>
#include "include/pipeline/Optimizer.h"
#include "include/utils/Tree.h"
#include "main.h"

using namespace std;

int main() {
	char c;
	Query *q=new Query("prova query");
	Optimizer o{};
	o.in(*q);
	o.process();
	cout << o.out().getString();
	cin >> c;
}