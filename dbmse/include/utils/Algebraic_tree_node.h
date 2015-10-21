#pragma once
#include "Binary_tree_node.h"

template<typename T>
class Algebraic_tree_node : public Binary_tree_node<T> {
private:
	Algebraic_tree_node parent;
public:
	Algebraic_tree_node();
	void set_parent(Algebraic_tree_node &);
	~Algebraic_tree_node();
};

