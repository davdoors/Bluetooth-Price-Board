#if !defined(DEVICE_H)
#define DEVICE_H

#include <Arduino.h>
#include "DeviceFunction.h"

class Device{
    
    public:
        enum class State {
            Default
        };
        
        
    
    protected:
        DeviceFunction function;
        State status;
    
    public:
        Device();
        
        virtual void executeFunction(DeviceFunction::Name);
        virtual void onState(State);
        
        void SetStatus(State);
        State getStatus();
        

};
#endif