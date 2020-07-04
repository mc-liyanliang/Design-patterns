#include "stdafx.h"
#include "MiniDuckSimulator.h"
#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"


CMiniDuckSimulator::CMiniDuckSimulator(void)
{
}


CMiniDuckSimulator::~CMiniDuckSimulator(void)
{
}

void CMiniDuckSimulator::Test()
{
	CDuck* mallard = new CMallardDuck;  //��ͷѼ
	mallard->PerformQuack();
	mallard->PerformFly();

	//
	CDuck *pModel = new CModelDuck;  //ģ��Ѽ
	pModel->PerformFly();
	pModel->SetFlyBehavior(new CFlyRocketPowered);
	pModel->PerformFly();
}
