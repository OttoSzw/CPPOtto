#include "Serializer.hpp"

int main(void)
{
    Data d = {42, "Otto"};
    Data *d2 = NULL;
    uintptr_t res;

    res = Serializer::serialize(&d);
    if (&d == Serializer::deserialize(res))
	{
		std::cout << "Resultat des valeurs de d2  : "<< std::endl;
		std::cout << std::endl;
		d2 = Serializer::deserialize(res);
		std::cout << "nb : " << d2->nb << std::endl;
		std::cout << "name : " << d2->name << std::endl;
	}
	std::cout << std::endl;
    std::cout << "adresse d : " << &d << std::endl;
    std::cout << "adresse des(res) : " << Serializer::deserialize(res) << std::endl;
    std::cout << "adresse du p d2 : " << d2 << std::endl;
    return (0);
}