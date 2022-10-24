//
// Created by MARIA HILDA BERMEJO RIOS on 10/24/22.
//

#ifndef EVENTO_CTIME_H
#define EVENTO_CTIME_H

#include "Tipos.h"

class CTime {
private:
    TipoEntero m_Hour;
    TipoEntero m_Min;
public:
    CTime();
    CTime(TipoEntero pHour, TipoEntero pMin);
    virtual ~CTime();
    void setTime(TipoEntero pHour, TipoEntero pMin);
    void printTime(ostream &os);

};


#endif //EVENTO_CTIME_H
