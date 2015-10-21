#include "..\..\include\utils\Algebraic_tree_node.h"


template<typename T>
Algebraic_tree_node<T>::Algebraic_tree_node() {
}

template<typename T>
void Algebraic_tree_node<T>::set_parent(Algebraic_tree_node &parent) {
	this::parent = parent;
}

template<typename T>
Algebraic_tree_node<T>::~Algebraic_tree_node() {
}
