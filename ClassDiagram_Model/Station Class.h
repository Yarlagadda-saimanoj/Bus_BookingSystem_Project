/**
 * Project Untitled
 */


#ifndef _STATION CLASS_H
#define _STATION CLASS_H

#include "Permission Class.h"


class Station Class: public Permission Class {
public: 
    int station_id;
    string station_name;
    string station_description;
    string station_type;
    
void addStation();
    
void editStation();
    
void deleteStation();
    
void searchStation();
};

#endif //_STATION CLASS_H