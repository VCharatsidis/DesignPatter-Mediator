#include "Person.h"
#include <iostream>


Person::Person(const string& name): name(name)
{
}

void Person::say(const string& message) const
{
	room->ChatRoom::broadcast(name, message);
}

void Person::receive(const string& origin, const string& message)
{
	string s{ origin + ": \"" + message + "\"" };
	std::cout << "[" << name << "'s chat session] " << s << "\n";
	chat_log.emplace_back(s);
}

Person::~Person()
{
}
