#pragma once
#include "Person.h"
#include <vector>

struct ChatRoom
{
	std::vector<Person> people;

	struct PersonReference
	{
		std::vector<Person>& people;
		unsigned int index;

		public:
			
			PersonReference(std::vector<Person>& persons, const unsigned index) :people(persons), index(index) {}

			Person* operator->() const;
	};

	void broadcast(const std::string& origin, const std::string& message);

	PersonReference join(Person&& p);
	void message(const std::string& origin, const std::string& who, const std::string& message);

};
