//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#include "CTime.h"

CTime::CTime()
{
  m_Hour = 0;
  m_Min = 0;
}

CTime::CTime(TipoEntero pHour, TipoEntero pMin)
{
  setTime(pHour, pMin);
}

CTime::~CTime()
{}

void CTime::setTime(TipoEntero pHour, TipoEntero pMin)
{
  if(pHour>=0 && pHour <24)
    m_Hour = pHour;
  else
    m_Hour = 0;

  if( pMin>=0 && pMin<60)
    m_Min = pMin;
  else
    m_Min = 0;
}

void CTime::printTime(ostream &os)
{
  os << setw(2) << setfill('0') << m_Hour << ":" << setw(2) << setfill('0') << m_Min;
}