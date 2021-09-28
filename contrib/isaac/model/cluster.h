/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
#ifndef Cluster_h
#define Cluster_h

#include <ctime>
#include <cstdlib>

class Cluster
{
  size_t nNodes;

public:
  size_t GenerateClusterNodes ();
  size_t GenerateActiveRelays (size_t cNodes);
};
#endif // Cluster_h