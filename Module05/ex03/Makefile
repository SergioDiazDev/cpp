NAME			=	main
CFLAGS			=	
RM				=	rm -fr
CC				=	c++

# COLORS
GREEN = `tput setaf 2`
RED = `tput setaf 1`
RESET = `tput sgr0`


SRCS			=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
					RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS = $(SRCS:.cpp=.o)

$(TRUE).SILENT:

.PHONY: all re clean fclean

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -o $@ -std=c++98 $(OBJS)
	@echo "$(GREEN)CREATE $(NAME) $(RESET)"


clean:
	@$(RM) $(OBJS)
	@echo "$(RED)REMOVE *_shrubbery $(NAME)$(RESET)\n"
	@$(RM) *_shrubbery
	@echo "$(RED)REMOVE OBJECTS $(NAME)$(RESET)\n"

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(RED)DELETE $(NAME)$(RESET)\n"

re:	fclean all