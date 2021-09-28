#include "cluster.h"
#include <ctime>
#include <cstdlib>

int Cluster::GenerateClusterNodes(){
    srand(time(0));
    nNodes= 1+(rand() % 10);
    return nNodes;
}

int Cluster::GenerateActiveRelays(size_t cNodes) {
    srand(time(0));
    size_t activeRelay= 1 + (rand() % (cNodes));
    
    if (activeRelay>=4)
    {
        activeRelay = 4;
    }
    return activeRelay;
}