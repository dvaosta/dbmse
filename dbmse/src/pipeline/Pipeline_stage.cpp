#include "..\../include\pipeline\Pipeline_stage.h"


template<typename IN, typename OUT>
Pipeline_stage<IN, OUT>::Pipeline_stage() {
}

template<typename IN, typename OUT>
void Pipeline_stage<IN, OUT>::in(IN input) {
	raw = input;
}

template<typename IN, typename OUT>
OUT Pipeline_stage<IN, OUT>::out() {
	return processed;
}

template<typename IN, typename OUT>
Pipeline_stage<IN, OUT>::~Pipeline_stage() {
}