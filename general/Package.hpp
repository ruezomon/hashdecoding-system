#pragma once
#include <string>

struct Package {

  public:

    inline Package(int type, std::string message, std::string senderIP) :
      type {type}, message {message}, senderIP {senderIP} {};

    inline static std::string buildAssignment(int minLength, int maxLength, bool lowerCase, bool upperCase, bool numbers, bool specialCharacters) {
      return 
        to_string(minLength) + "_" + to_string(maxLength) + "_" + 
        to_string(lowerCase) + to_string(upperCase) + to_string(numbers) + to_string(specialCharacters);
    }

    inline int getType() {
      return this->type;
    }

    inline int getMessage() {
      return this->message;
    }

  private:

      int type;
      std::string message;
      std::string senderIP;

};
