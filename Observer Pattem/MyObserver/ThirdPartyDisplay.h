#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

//����չ�Ĳ����
class CThirdPartyDisplay : public CObserver, public CDisplayElement
{
public:
	CThirdPartyDisplay(CSubject* pWeatherData);
	~CThirdPartyDisplay(void);
public:
	virtual void Update(double dTemperature,double dTumidity,double dPressure);
	virtual void Display();
private:
	CSubject* m_pWeatherData;

	double m_dTemperature;
	double m_dHumidity;
	double m_dPressure;
};

