#if !defined(DEVICE_H)
#define DEVICE_H

#include "DeviceFunction.h"

class Device{
    
    public:
        enum class Status {
            Default
        };
        
        
    
    protected:
        DeviceFunction function;
        Status status;
    
    public:
        Device();
        
        void SetStatus(Status);
        Status getStatus();
        

};
#endif