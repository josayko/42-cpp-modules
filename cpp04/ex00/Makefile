NAME = animals

CXX = clang++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
INC = -Iinc

SRCDIR = src/
SRCS =	main.cpp \
				Animal.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				Dog.cpp \
				Cat.cpp

OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	$(CXX) $(CXXFLAGS) $(INC) $(OBJ) -o $(NAME)

$(OBJDIR):
	mkdir -p $@

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME) a.out

re: clean fclean all

