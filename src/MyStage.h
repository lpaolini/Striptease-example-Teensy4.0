#ifndef MyStage_h
#define MyStage_h

#include "Stage.h"

class MyStage : public Stage {
    private:
        const static uint16_t STRIP_LEFT_COUNT = 171;
        const static uint16_t STRIP_LEFT_DENSITY = 144;
        const static uint8_t STRIP_LEFT_PIN = CH1_PIN;

        const static uint16_t STRIP_RIGHT_COUNT = 171;
        const static uint16_t STRIP_RIGHT_DENSITY = 144;
        const static uint8_t STRIP_RIGHT_PIN = CH2_PIN;

        const static uint8_t MAX_WATTS = 60;

    public:
        MyStage(AudioSensor *audioSensor, State *state);
};

#endif
