#pragma once
#include "Tree_node.h"

template<typename T>
class Binary_tree_node : public Tree_node<T> {
public:
	Binary_tree_node();
	Binary_tree_node(T &, Binary_tree_node &, Binary_tree_node &);
	void swap_children();
	~Binary_tree_node();
};

