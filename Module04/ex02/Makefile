NAME			=	main
CFLAGS			=	-Wall -Werror -Wextra -std=c++98
RM				=	rm -fr
CC				=	c++
# COLORS
GREEN = `tput setaf 2`
RED = `tput setaf 1`
RESET = `tput sgr0`


SRCS			=	main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

$(TRUE).SILENT:

.PHONY: all re clean fclean

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@c++ -o $@ $(CFLAGS) $(OBJS)
	@echo "$(GREEN)CREATE $(NAME) $(RESET)"


clean:
	@$(RM) $(OBJS)
	@echo "$(RED)REMOVE OBJECTS $(NAME)$(RESET)\n"

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(RED)DELETE $(NAME)$(RESET)\n"

re:	fclean all