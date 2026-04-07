#pragma once

#include <string>
#include <vector>

class Master {
public:
  Master();
  ~Master();
  void awaitSlaves();
  std::string getLocalIP();
private:
  std::vector<std::string> slaves;
  
};
