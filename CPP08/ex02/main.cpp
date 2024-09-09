#include "MutantStack.hpp"
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of stack : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of stakc : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	//[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}


// int main()
// {
// 	std::vector<int> mstack;
// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << "Top of stack : " << mstack.back() << std::endl;
// 	mstack.pop_back();
// 	std::cout << "Size of stakc : " << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737); 

// 	for (int i = 0; i < static_cast<int>(mstack.size()); i++)
// 	{
//         std::cout << mstack[i] << std::endl;
//     }
// 	return 0;
// }
