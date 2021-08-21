#ifndef TASK_27_1_MEDIUMBRANCH_H
#define TASK_27_1_MEDIUMBRANCH_H

#include <iostream>
#include <cassert>

class BigBranch;

class MediumBranch {

private:
    std::string elfName {"unknown"};
    BigBranch* bigBranch {nullptr};
    int id;

public:
    MediumBranch(const std::string elfName, class BigBranch* bigBranch, int id);

    /**
     * @method Getter for elf name.
     * @return std::string elfName
     */
    std::string getElfName() const;

    /**
     * @method Prints the info about the branch.
     */
    void printInfo();
};

#endif