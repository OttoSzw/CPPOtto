#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 3)
    {
        return (1);
    }

    PmergeMe Instance;

    Instance.InitialiseContainer(++av);
    Instance.Algo();
    return (0);
}