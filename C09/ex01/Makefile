NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c \
    srcs/ft_swap.c srcs/ft_strlen.c \
    srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC  = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./includes/
RM = rm -f
LIBC = ar -rc


%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	 ${RM} ${OBJS}

fclean: clean
	 ${RM} ${NAME}

re: fclean all
