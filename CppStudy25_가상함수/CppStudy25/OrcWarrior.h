#pragma once
#include "Orc.h"

class OrcWarrior : public Orc
{
public:
	virtual void qSkill(void);
	virtual void wSkill(void);
	virtual void eSkill(void);
	virtual void rSkill(void);

	OrcWarrior();
	~OrcWarrior();
};
