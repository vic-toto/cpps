NAME	=	animal
CPPC	=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			main.cpp
OBJS	=	$(SRCS:.cpp=.o)

%.o			:	%.cpp
				$(CPPC) $(FLAGS) -c $< -o $@

all		:	$(NAME)

$(OBJS)	:	$(SRCS)
	-@$(CPPC) $(FLAGS) $(SRCS) -o $(NAME)

$(NAME) : $(OBJS)
	@echo Compiling: $(NAME)
	@$(CPPC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo Compiled successfully!

clean:
	@echo Deleting objects files...
	@rm -f $(OBJS)
	@echo Deleting done!

fclean: clean
	@echo Deleting $(NAME)...
	@rm $(NAME)
	@rm -f $(OBJS)
	@echo Deleting done!

re: fclean all

.PHONY: all clean fclean re
