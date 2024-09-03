#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	int randomNumber = rand() % 3;
	switch (randomNumber)
	{
	case 0:
	{
		A *Instance = new A();
		return (Instance);
	}
	case 1:
	{
		B *Instance = new B();
		return (Instance);
	}
	case 2:
	{
		C *Instance = new C();
		return (Instance);
	}
	default:
		return (NULL);
	}
}

void identify(Base *p)
{
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "Type is A !" << std::endl;
		return ;
	}
	b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "Type is B !" << std::endl;
		return ;
	}
	c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "Type is C !" << std::endl;
		return ;
	}
}

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type is A !" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Type is B !" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Type is C !" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		;
	}
}
int main()
{
	Base *Instance = generate();

	identify(Instance);
	identify(*Instance);
	delete Instance;
	return (0);

}
