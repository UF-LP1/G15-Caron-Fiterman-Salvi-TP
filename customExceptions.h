#ifndef CUSTOMEXCEPTIONS_H
#define CUSTOMEXCEPTIONS_H
#include <string>
#include <exception>
using namespace std;

class NoFondos :public exception {
    const char* what() const throw();
};

#endif // CUSTOMEXCEPTIONS_H
