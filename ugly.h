//
// Created by yan   xinzhou on 11/18/18.
//

#ifndef NEW_UGLY_H
#define NEW_UGLY_H

#include "girl.h"
#
class ugly: public girl {
public:
    ugly(const std::string &name, int age);

    void sex() override;

};

#endif //NEW_UGLY_H

