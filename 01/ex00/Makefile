NAME	= Zombicide

SRCS	=	main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp

OBJ	= ${SRCS:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -I.

all: ${NAME}

%.o:%.cpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}:    ${OBJ}
	$(CC) ${FLAGS} $(OBJ) -o $(NAME)

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all