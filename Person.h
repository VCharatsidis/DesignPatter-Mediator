#pragma once
#include <string>
#include "ChatRoom.h"
#include <iostream>

using namespace std;

struct Person
{
	string name;
	ChatRoom* room = nullptr;
	vector<string> chat_log;

	explicit Person(const string& name);
	void say(const string& message) const;

	void receive(const string& origin, const string& message);
};

