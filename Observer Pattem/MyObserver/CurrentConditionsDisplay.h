#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"

//����CWeatherData������ʾ��ǰ�۲�ֵ
class CCurrentConditionsDisplay : public CObserver, public CDisplayElement
{
public:
	CCurrentConditionsDisplay(CSubject* pWeatherData);
	virtual ~CCurrentConditionsDisplay(void);
public:
	void Update(double dTemperature,double dTumidity,double dPressure);
	void Display();
private:
	CSubject* m_pWeatherData;

	double m_dTemperature;
	double m_dHumidity;
	double m_dPressure;
};

