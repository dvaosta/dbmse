#pragma once
template<typename IN, typename OUT>
class Pipeline_stage {
protected:
	IN raw;
	OUT processed;
public:
	Pipeline_stage();
	virtual void in(IN);
	virtual void process() = 0;
	virtual OUT out();
	virtual ~Pipeline_stage();
};