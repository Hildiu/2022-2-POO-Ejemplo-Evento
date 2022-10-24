//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#include "CDate.h"

CDate::CDate()
{
  m_Month = 1;
  m_Day   = 1;
  m_Year  = 1900;
}

CDate::CDate(TipoEntero pMonth, TipoEntero pDay, TipoEntero pYear)
{
  if (pMonth>=1 and pMonth <=12)
    m_Month = pMonth;
  else
    m_Month = 1;

  if(pDay >=1 and pDay <=12)
    m_Day = pDay;
  else
    m_Day = 1;

  if(pYear >=1900 and pYear<=2030)
    m_Year = pYear;
  else
    m_Year = 1900;
}

CDate::~CDate()
{}

void CDate::setDate(TipoEntero pMonth, TipoEntero pDay, TipoEntero pYear)
{
  if (pMonth>=1 and pMonth <=12)
    m_Month = pMonth;
  else
    m_Month = 1;

  if(pDay >=1 and pDay <=12)
    m_Day = pDay;
  else
    m_Day = 1;

  if(pYear >=1900 and pYear<=2030)
    m_Year = pYear;
  else
    m_Year = 1900;

}

void CDate::printDate(ostream &os)
{
  os << setw(2) << setfill('0') << m_Month << "/" << setw(2) << setfill('0') << m_Day << "/" << m_Year;

}