#include "encrypt.h" 




class Caesar: public Encrypt {

public:

    Caesar();

    std::string encode();

    std::string decode();

};
