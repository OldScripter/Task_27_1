#ifndef TASK_27_1_TREE_H
#define TASK_27_1_TREE_H

#include "BigBranch.h"


class Tree {

private:
    const int MAX_BIG_BRANCHES = 5;
    const int MIN_BIG_BRANCHES = 3;
    std::vector<BigBranch*> bigBranches;
    int id;

public:
    Tree(bool randomElves);
    ~Tree();

    /**
     * @method Try to find the elf on a tree. Prints the address if elf is found.
     * @param [in] elfName std::string
     * @return true if elf is found
     */
    bool findElf(std::string elfName);

    /**
     * @method Print the info about the tree and all its branches.
     */
    void printInfo();
};

#endif