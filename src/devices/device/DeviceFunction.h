#if !defined(DEVICE_FUNCTION_H)
#define DEVICE_FUNCTION_H

class DeviceFunction{
    public:
        enum class Name{
            Default,
            WritePayload,
            SetDateTime,
            WritePayloadAtTime,
            ChangeColor,
            TestDigit,
            SetLightIntensity,
        };
    
    private:
        Name name;
    
    public:
        DeviceFunction();
        
        void setName(Name);
        Name getName();
};

#endif