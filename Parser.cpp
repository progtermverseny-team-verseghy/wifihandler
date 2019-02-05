//
// Created by twodcube on 2/5/19.
//

#include "Parser.h"
#include "State.h"
#include <string.h>

void Parser::parseState(std::string input, State * state) {
    for (int i = 0; i < input.size(); i++) {
        if (i == 0 && input[i] != '$') return;
        if (i == 1 && input[i] != '$') return;
        if (i == 2 && input[i] != '$') return;

        if (i == 4 && input[i] == '1') state->generator1 = GeneratorStatus::FINISHED;
        if (i == 5 && input[i] == '1') state->generator2 = GeneratorStatus::FINISHED;
        if (i == 6 && input[i] == '1') state->generator3 = GeneratorStatus::FINISHED;
        if (i == 7 && input[i] == '1') state->generator4 = GeneratorStatus::FINISHED;
        if (i == 8 && input[i] == '1') state->generator5 = GeneratorStatus::FINISHED;
        if (i == 9 && input[i] == '1') state->generator6 = GeneratorStatus::FINISHED;

        if (i == 10) {
            state->percentage1 = std::stoi(input[i].c_str());
        }
        if (i == 11) {
            state->percentage2 = std::stoi(input[i].c_str());
        }
    }
}
