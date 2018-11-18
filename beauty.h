//
// Created by yan   xinzhou on 11/18/18.
//

#ifndef NEW_BEAUTY_H
#define NEW_BEAUTY_H

#include "girl.h"

class beauty: public girl {
public:
    beauty(const std::string &name, int age);

    void sex() override;
};


#endif //NEW_BEAUTY_H
