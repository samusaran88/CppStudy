#pragma once
#include "MotherClass.h"

//��� ���			�θ��� public ���		�θ��� protected ���	�θ��� private ���
//public ���		�ڽĿ��� public ����		�ڽĿ��� protected ����	���� �Ұ�
//protected ���		�ڽĿ��� protected ��	�ڽĿ��� protected ����	���� �Ұ�
//private ���		�ڽĿ��� private ��		�ڽĿ��� private ��		���� �Ұ�

class ChildClass : public MotherClass
{
public:
	ChildClass();
	~ChildClass();
};

