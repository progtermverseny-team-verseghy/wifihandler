//
// Created by twodcube on 2/5/19.
//

#ifndef SSIDPARSER_PARSER_H
#define SSIDPARSER_PARSER_H


#include <string>
#include "State.h"

class Parser {
public:
    static void parseState(std::string input, State * state);
};


#endif //SSIDPARSER_PARSER_H
