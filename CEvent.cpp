//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#include "CEvent.h"


CEvent::CEvent()
{}

CEvent::CEvent( TipoEntero pHour, TipoEntero pMin, TipoEntero pMonth, TipoEntero pDay,
        TipoEntero pYear, TipoString pName):m_Time(pHour,pMin), m_Day(pMonth, pDay, pYear)
{
  m_name = pName;
}

CEvent::~CEvent()
{}

void CEvent::setEventData(TipoEntero pHour, TipoEntero pMin, TipoEntero pMonth, TipoEntero pDay,
                 TipoEntero pYear, TipoString pName)
{
  m_Time.setTime(pHour,pMin);
  m_Day.setDate(pMonth, pDay, pYear);
  m_name = pName;
}

void CEvent::printEventData(ostream &os)
{
  os << m_name << " es ";
  m_Day.printDate(os);
  os << "a las ";
  m_Time.printTime(os);
  os << "\n";
}