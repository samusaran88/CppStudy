#pragma once
#include "Orc.h"

class OrcShaman : public Orc
{
public:
	virtual void qSkill(void);
	virtual void wSkill(void);
	virtual void eSkill(void);
	virtual void rSkill(void);

	OrcShaman();
	~OrcShaman();
};
