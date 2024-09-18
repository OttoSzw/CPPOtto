#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe& ope)
{
    if (this != &ope)
    {
        this->vec = ope.vec;
        this->deq = ope.deq;
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{

}

void    PmergeMe::InitialiseContainer(char **tab)
{
    for (int i = 0; tab[i]; i++)
        size = i + 1;
    std::cout << "Size : " << size << std::endl;
    std::cout << "Before : ";
    for (int i = 0; tab[i]; i++)
    {
        vec.push_back(atoi(tab[i]));
        deq.push_back(atoi(tab[i]));
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void    PmergeMe::Algo()
{
    int **caze = new int *[size / 2];
    if (size % 2 == 0)
    {
        
        int j = 0;
        for (int i = 0; i < (size / 2); i++)
        {
            caze[i] = new int[2];

            caze[i][0] = vec[j];
            caze[i][1] = vec[j + 1];
            j += 2;
            if (caze[i][0] > caze[i][1])
                std::swap(caze[i][0], caze[i][1]);
        }
        for (int i = 0; i < size / 2; i++)
        {
            std::cout << "[" << caze[i][0] << ", " << caze[i][1] << "]" << std::endl;
        }

        int* posZero = new int[size / 2];
        int* posOne = new int[(size / 2)];

        for (int i = 0; i < size / 2; i++)
            posZero[i] = caze[i][0];
        for (int i = 0; i < size / 2; i++)
            posOne[i] = caze[i][1];
        
        std::cout << "Premiere sous liste : [";
        for (int i = 0; i < size / 2; i++)
            std::cout << posZero[i] << ", ";
        std::cout << "]" << std::endl;

        std::cout << "Deuxieme sous liste : [";
        for (int i = 0; i < size / 2; i++)
            std::cout << posOne[i] << ", ";
        std::cout << "]" << std::endl;
        
        std::sort(posZero, posZero + (size / 2));
        std::sort(posOne, posOne + (size / 2));

        std::cout << "Premiere sous liste : [";
        for (int i = 0; i < size / 2; i++)
            std::cout << posZero[i] << ", ";
        std::cout << "]" << std::endl;

        std::cout << "Deuxieme sous liste : [";
        for (int i = 0; i < size / 2; i++)
            std::cout << posOne[i] << ", ";
        std::cout << "]" << std::endl;
    }
    for (int i = 0; i < size / 2; i++)
    {
        delete[] caze[i];
    }
    delete[] caze;
}