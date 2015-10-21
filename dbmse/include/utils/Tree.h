#pragma once

#include "Tree_node.h"

template <template <typename Type> class Node_type, typename T>
class Tree {
protected:
	Node_type<T> root;
public:
	Tree();
	~Tree();
};

