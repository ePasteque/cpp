NAME	=	Bureaucrat

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp


OBJ	= ${SRCS:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -I.
# FLAGS += -fsanitize=address

all: ${NAME}

%.o:%.cpp %.hpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all