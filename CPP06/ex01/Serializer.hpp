#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data {
	
	int nb;
	std::string name;

};

class Serializer
{

	private:

		Serializer();
		Serializer(const Serializer& copy);
		Serializer &operator=(const Serializer& ope);

	public:

		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif