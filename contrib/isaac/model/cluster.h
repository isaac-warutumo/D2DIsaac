/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
#ifndef Cluster_h
#define Cluster_h

#include <ctime>
#include <cstdlib>

class Cluster
{
  int nNodes;

public:
  int GenerateClusterNodes ();
  int GenerateActiveRelays (int cNodes);
};
#endif // Cluster_h