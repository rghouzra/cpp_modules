#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
#include <iostream>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
	public:
	std::string &getFirstName(){return first_name;};
	std::string &getLastName(){return last_name;};
	std::string &getNickName(){return nick_name;};
	std::string &getPhoneNumber(){return phone_number;};
	std::string &getDarkestSecret(){return darkest_secret;};
};

#endif