#include "..\../include\pipeline/Optimizer.h"


Optimizer::Optimizer() {
}

void Optimizer::process() {
	Query *q{new Query("modificata")};
	processed = raw + *q;
}

Optimizer::~Optimizer() {
}