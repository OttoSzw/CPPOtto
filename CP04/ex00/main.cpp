#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->type << " " << std::endl;
    std::cout << i->type << " " << std::endl;
    i->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound();
    ...
    return 0;
    // Dog Wouaf("Dog");
    // Wouaf.showType();
    // Cat Miaou("Cat");
    // Miaou.showType();
    // return (0);
}