#include "Point.hpp"

int main(void)
{
    Point triangleA(0, 0);
    Point triangleB(10, 0);
    Point triangleC(0, 10);

    // Points à tester
    Point pointTest(0, 0);
    Point pointTest1(10, 10);
    Point pointTest2(-1, 0);

	std::cout << "Le point test fait-il partit du triangle ABC ? : ";
    if (triangleA.bsp(triangleA, triangleB, triangleC, pointTest))
	{
        std::cout << "Oui\n";
		std::cout << "         /|" << std::endl;
		std::cout << "        / |" << std::endl;
		std::cout << "       /  |" << std::endl;
		std::cout << "      /   |" << std::endl;
		std::cout << "     /    |" << std::endl;
		std::cout << "    /     |" << std::endl;
		std::cout << "   /  x   |" << std::endl;
		std::cout << "  /       |" << std::endl;
		std::cout << " /________|" << std::endl;
	}
    else
	{
        std::cout << "Non\n";
		std::cout << "         /|" << std::endl;
		std::cout << "        / |" << std::endl;
		std::cout << "   x   /  |" << std::endl;
		std::cout << "      /   |" << std::endl;
		std::cout << "     /    |" << std::endl;
		std::cout << "    /     |" << std::endl;
		std::cout << "   /      |" << std::endl;
		std::cout << "  /       |" << std::endl;
		std::cout << " /________|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Le point test1 fait-il partit du triangle ABC ? : ";
    if (triangleA.bsp(triangleA, triangleB, triangleC, pointTest1))
	{
        std::cout << "Oui\n";
		std::cout << "         /|" << std::endl;
		std::cout << "        / |" << std::endl;
		std::cout << "       /  |" << std::endl;
		std::cout << "      /   |" << std::endl;
		std::cout << "     /    |" << std::endl;
		std::cout << "    /     |" << std::endl;
		std::cout << "   /  x   |" << std::endl;
		std::cout << "  /       |" << std::endl;
		std::cout << " /________|" << std::endl;
	}
    else
	{
        std::cout << "Non\n";
		std::cout << "         /|" << std::endl;
		std::cout << "        / |" << std::endl;
		std::cout << "   x   /  |" << std::endl;
		std::cout << "      /   |" << std::endl;
		std::cout << "     /    |" << std::endl;
		std::cout << "    /     |" << std::endl;
		std::cout << "   /      |" << std::endl;
		std::cout << "  /       |" << std::endl;
		std::cout << " /________|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Le point test2 fait-il partit du triangle ABC ? : ";
	if (triangleA.bsp(triangleA, triangleB, triangleC, pointTest2))
	{
        std::cout << "Oui\n";
		std::cout << "         /|" << std::endl;
		std::cout << "        / |" << std::endl;
		std::cout << "       /  |" << std::endl;
		std::cout << "      /   |" << std::endl;
		std::cout << "     /    |" << std::endl;
		std::cout << "    /     |" << std::endl;
		std::cout << "   /  x   |" << std::endl;
		std::cout << "  /       |" << std::endl;
		std::cout << " /________|" << std::endl;
	}
    else
	{
        std::cout << "Non\n";
		std::cout << "         /|" << std::endl;
		std::cout << "        / |" << std::endl;
		std::cout << "   x   /  |" << std::endl;
		std::cout << "      /   |" << std::endl;
		std::cout << "     /    |" << std::endl;
		std::cout << "    /     |" << std::endl;
		std::cout << "   /      |" << std::endl;
		std::cout << "  /       |" << std::endl;
		std::cout << " /________|" << std::endl;
	}
	return 0;
}