#include "cluster.h"
#include <ctime>
#include <cstdlib>

int Cluster::GenerateClusterNodes(){
    srand(time(0));
    nNodes= 1+(rand() % 10);
    return nNodes;
}

int Cluster::GenerateActiveRelays(int cNodes) {
    srand(time(0));
    int activeRelay= 1 + (rand() % (cNodes));
    return activeRelay;
}