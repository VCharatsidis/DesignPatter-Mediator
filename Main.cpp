#include <iostream>
#include <string>
#include "ChatRoom.h"

using namespace std;

int main()
{
	ChatRoom* room = new ChatRoom();

	auto john = room->join(Person{ "john" });
	auto jane = room->join(Person{ "jane" });

	john->say("hi room");
	jane->say("oh, hey john");

	getchar();
	return 0;
}