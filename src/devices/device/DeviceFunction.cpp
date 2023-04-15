#include "DeviceFunction.h"

DeviceFunction::DeviceFunction():name(Name::Default){}

void DeviceFunction::setName(Name name){
    this->name = name;
}

DeviceFunction::Name DeviceFunction::getName(){
    return name;
}