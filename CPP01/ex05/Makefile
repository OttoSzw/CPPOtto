EXEC = Harl
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: clean fclean re