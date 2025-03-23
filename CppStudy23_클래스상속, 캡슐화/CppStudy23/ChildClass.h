#pragma once
#include "MotherClass.h"

//상속 방식			부모의 public 멤버		부모의 protected 멤버	부모의 private 멤버
//public 상속		자식에서 public 유지		자식에서 protected 유지	접근 불가
//protected 상속		자식에서 protected 됨	자식에서 protected 유지	접근 불가
//private 상속		자식에서 private 됨		자식에서 private 됨		접근 불가

class ChildClass : public MotherClass
{
public:
	ChildClass();
	~ChildClass();
};

