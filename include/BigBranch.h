#ifndef TASK_27_1_BIGBRANCH_H
#define TASK_27_1_BIGBRANCH_H

#include "MediumBranch.h"
#include <vector>
#include <random>

class BigBranch {

private:
    const int MIN_MEDIUM_BRANCHES = 2;
    const int MAX_MEDIUM_BRANCHES = 3;
    std::vector<MediumBranch*> mediumBranches;
    int mediumBranchesCount;
    int id;

    /**
     * @method Generates random elf name.
     * @return std::string elf name
     */
    std::string generateRandomName();

    /**
     * @method Return true if elf with such name is living on one of the medium branches.
     * @param [in] elfName std::string
     * @return true if elf is found on one of the medium branches
     */
    bool isElfFound(std::string elfName);

public:
    BigBranch(bool randomElves, int id);
    ~BigBranch();

    /**
     * @method Print the elf neighbors. Return false if elf with such name is not found.
     * @param [in] elfName std::string
     * @return true if elf is found
     */
    bool printElfNeighbours(std::string elfName);

    /**
     * @method Getter for id.
     * @return int id
     */
    int getId() const;

    /**
     * @method Print the info about the branch and all its medium branches.
     */
    void printInfo();
};

#endif