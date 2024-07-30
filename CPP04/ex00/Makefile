EXEC = Polymorphisme
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)
	rm -rf $(OBJDIR)

re: fclean all

.PHONY: clean fclean re