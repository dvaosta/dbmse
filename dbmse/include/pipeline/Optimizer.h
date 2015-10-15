#pragma once
#include "../../src/pipeline/Pipeline_stage.cpp"
#include "../items/Query.h"

class Optimizer : public Pipeline_stage<Query, Query> {
public:
	Optimizer();
	~Optimizer();

	// Ereditato tramite Pipeline_stage
	virtual void process() override;
};