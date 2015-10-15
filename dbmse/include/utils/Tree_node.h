#pragma once

#include <vector>

using namespace std;

template<typename T>
class Tree_node {
protected:
	T item=nullptr;
	vector<Tree_node<T>> children=nullptr;
public:
	Tree_node();
	void pre_order(void (*visit)(Tree_node<T>));
	void post_order(void(*visit)(Tree_node<T>));
	~Tree_node();
};