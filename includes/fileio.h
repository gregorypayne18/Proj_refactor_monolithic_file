#ifndef FILEIO_H_
#define FILEIO_H_

#include <vector>
#include "constants.h"
using namespace std;

namespace GP{

    int loadData(const std::string filename, vector<process> &myProcesses);

    int saveData(const std::string filename, vector<process> &myProcesses);
}
#endif