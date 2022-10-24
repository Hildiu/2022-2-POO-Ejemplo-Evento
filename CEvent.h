//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#ifndef EVENTO_CEVENT_H
#define EVENTO_CEVENT_H

#include "Tipos.h"
#include "CTime.h"
#include "CDate.h"

class CEvent {
private:
    TipoString m_name;
    CTime m_Time;
    CDate m_Day;
public:
    CEvent();
    CEvent( TipoEntero pHour, TipoEntero pMin, TipoEntero pMonth, TipoEntero pDay,
            TipoEntero pYear, TipoString pName);
    virtual ~CEvent();
    void setEventData(TipoEntero pHour, TipoEntero pMin, TipoEntero pMonth, TipoEntero pDay,
                     TipoEntero pYear, TipoString pName);
    void printEventData(ostream &os);
};


#endif //EVENTO_CEVENT_H
