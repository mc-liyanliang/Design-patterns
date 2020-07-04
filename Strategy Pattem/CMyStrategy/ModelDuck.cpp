#include "stdafx.h"
#include "ModelDuck.h"
#include "Quack.h"
#include "FlyNoWay.h"


CModelDuck::CModelDuck(void)
{
	m_pFlyBehavior = new CFlyNoWay;
	m_pQuackBehavior = new CQuack;
}


CModelDuck::~CModelDuck(void)
{
}

void CModelDuck::Display()
{
	AfxMessageBox(_T("����һֻģ��Ѽ!"), MB_OK);
}
