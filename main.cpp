#include "CEvent.h"

int main()
{
  CEvent *pEvent = new CEvent();
  pEvent->setEventData(6,0,12,25,2019,"Navidad");
  pEvent->printEventData(cout);

  CEvent *pEvent2 = new CEvent();
  pEvent2->setEventData(1,15,13,9,2019,"Open Day");
  pEvent2->printEventData(cout);

  delete pEvent; pEvent = nullptr;
  delete pEvent2; pEvent2= nullptr;

//--------------------------------------------------------------
//--- ahora usaremos los constructores para inicializar los datos
cout <<"\n";
 CEvent *pEvent3 = new CEvent(6,0,12,25,2019,"Navidad");
 pEvent3->printEventData(cout);

 CEvent *pEvent4 = new CEvent(1,15,13,9,2019,"Open Day");
 pEvent4->printEventData(cout);

 delete pEvent3; pEvent3 = nullptr;
 delete pEvent4; pEvent4 = nullptr;

  return 0;
}
