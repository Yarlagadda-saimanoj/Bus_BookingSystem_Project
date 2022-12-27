/**
 * Project Untitled
 */


#ifndef _USER CLASS_H
#define _USER CLASS_H

#include "Role Class.h"
#include "Permission Class.h"


class User Class: public Role Class, public Permission Class {
public: 
    int user_id;
    int user_role_id;
    string user_name;
    string user_email;
    string user_dob;
    string user_address;
    
void addUser();
    
void editUser();
    
void deleteUser();
    
void searchUser();
};

#endif //_USER CLASS_H