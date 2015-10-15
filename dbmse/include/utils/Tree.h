#pragma once

#include "Tree_node.h"

template<typename T>
class Tree {
protected:
	Tree_node<T> root;
public:
	Tree();
	~Tree();
};

