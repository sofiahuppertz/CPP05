NAME = bureaucrat

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = def/Bureaucrat.class.cpp \
	def/ANSIColors.cpp \
	def/AForm.class.cpp \
	def/ShrubberyCreationForm.class.cpp \
	def/RobotomyRequestForm.class.cpp \
	def/PresidentialPardonForm.class.cpp \
	def/Intern.class.cpp \
	main.cpp


OBJS = $(SRCS:.cpp=.o)

.SECONDARY : $(OBJS)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) -I./dec $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)


fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: clean fclean re all