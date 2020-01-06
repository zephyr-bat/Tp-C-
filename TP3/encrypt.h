#include <string>
#include <iostream>
#include <fstream>


class Encrypt {

public:

    Encrypt();

    std::string get\_plain() const;

    std::string get\_cipher() const;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    std::string encode();

    std::string decode();

protected:

    std::string m\_plain;

    std::string m\_cipher;

};