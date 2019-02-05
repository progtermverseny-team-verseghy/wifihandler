//
// Created by twodcube on 2/5/19.
//

#ifndef SSIDPARSER_STATE_H
#define SSIDPARSER_STATE_H

enum DeviceType {
    SURVIVOR = 0,
    KILLER = 1,
    GENERATOR = 2,
    GATE = 3,
};

enum GeneratorStatus {
    FINISHED = 1,
    NOTFINISHED = 0,
};

enum MinigameStatus {
    SUCCEEDED = 1,
    NOTSUCCEDED = 0,
};

enum SurvivorHealth {
    ALIVE = 0,
    ONEHIT = 1, // UNUSED
    TWOHIT = 2, // UNUSED
    DEAD = 3,
};

struct State {
    DeviceType type;
    GeneratorStatus generator1;
    GeneratorStatus generator2;
    GeneratorStatus generator3;
    GeneratorStatus generator4;
    GeneratorStatus generator5;
    GeneratorStatus generator6;
    int percentage1;
    int percentage2;
    MinigameStatus minigameStatus;
    SurvivorHealth survivorHealth;
};

#endif //SSIDPARSER_STATE_H
