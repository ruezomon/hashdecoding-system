#include "../include/Master.hpp"
#include <sys/types.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

Master::Master() {

}

std::string Master::getLocalIP() {
  char host[256];
  char* IP;
  struct hostent *host_entry;
  int hostname;

  hostname = gethostname(host, sizeof(host));
  check_host_name(hostname);

  host_entry = gethostname(host);
  check_host_name(host_entry);
  IP = inet_ntoa(*((struct in_addr*) host_entry->h_addr_list[0]));
}
