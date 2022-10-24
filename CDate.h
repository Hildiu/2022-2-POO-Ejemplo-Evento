//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#ifndef EVENTO_CDATE_H
#define EVENTO_CDATE_H


#include "Tipos.h"
using namespace std;

class CDate {
private:
    TipoEntero m_Month;
    TipoEntero m_Day;
    TipoEntero m_Year;
public:
    CDate();
    CDate(TipoEntero pMonth, TipoEntero pDay, TipoEntero pYear);
    virtual ~CDate();
    void setDate(TipoEntero pMonth, TipoEntero pDay, TipoEntero pYear);
    void printDate(ostream &os);
};


#endif //EVENTO_CDATE_H
