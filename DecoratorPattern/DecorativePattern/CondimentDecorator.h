#pragma once
#include "beverage.h"

//װ������
//���ϳ�����
class CCondimentDecorator : public CBeverage
{
public:
	CCondimentDecorator(void);
	virtual ~CCondimentDecorator(void);
public:
	virtual CString GetDescription() = 0;
};

