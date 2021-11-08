#include <iostream>
#include <stdint.h>
#include "structData.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *sdata = new Data();
    sdata->data = "EXX";

    std::cout << "DATA: " << sdata->data << " | "
        << sdata << std::endl;

    uintptr_t raw = serialize(sdata);
    std::cout << "SERIALIZE: " << raw << std::endl;
    std::cout << "DESERIALIZE: " << deserialize(raw)->data 
        << " | " << deserialize(raw) << std::endl;
}