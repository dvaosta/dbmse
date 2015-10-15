#include "..\..\include\utils\Tree_node.h"


template<typename T>
Tree_node<T>::Tree_node() {
}

template<typename T>
void Tree_node<T>::pre_order(void (*visit)(Tree_node<T>)) {
	for(Tree_node<T> child : children)
		visit(child);
	visit(this);
}

template<typename T>
void Tree_node<T>::post_order(void(*visit)(Tree_node<T>)) {
	visit(this);
	for(Tree_node<T> child : children)
		visit(child);
}

template<typename T>
Tree_node<T>::~Tree_node() {
}
