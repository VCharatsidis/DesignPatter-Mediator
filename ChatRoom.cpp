#include "ChatRoom.h"

Person* ChatRoom::PersonReference::operator->()const
{
	return &people[index];
}

void ChatRoom::broadcast(const string& origin, const string& message)
{
	for (auto& p : people)
	{
		if (p.name != origin)
		{
			p.receive(origin, message);
		}
	}
}

ChatRoom::PersonReference ChatRoom::join(Person&& p)
{
	string join_msg = p.name + " joins the chat";
	broadcast("room", join_msg);

	p.room = this;
	people.emplace_back(p);

	return{ people, people.size() - 1 };
}