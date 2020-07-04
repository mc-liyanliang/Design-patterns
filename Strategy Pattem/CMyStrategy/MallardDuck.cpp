#include "stdafx.h"
#include "MallardDuck.h"
#include "Quack.h"
#include <afxwin.h>
#include "FlyWithWings.h"


CMallardDuck::CMallardDuck(void)
{
	m_pQuackBehavior = new CQuack;    //���ɽ�
	m_pFlyBehavior = new CFlyWithWings;//���
}


CMallardDuck::~CMallardDuck(void)
{
}

void CMallardDuck::Display()
{
	AfxMessageBox(_T("����һֱ��ͷѼ!"), MB_OK);

}

