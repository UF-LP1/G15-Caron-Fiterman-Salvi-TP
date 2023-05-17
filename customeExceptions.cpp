#include "customExceptions.h"

const char* NoFondos::what() const throw() {
        return "No tenes saldo";
}
