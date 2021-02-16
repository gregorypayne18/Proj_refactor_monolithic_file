#ifndef UTILS_H_
#define UTILS_H_

#include <vector>
#include <iostream>
#include "constants.h"

using namespace std;

namespace GP{
    void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

    process getNext(vector<process> &myProcesses);

    int getSize(vector<process> &myProcesses);

    int handleMissingData(vector<process> &myProcesses);
}

#endif