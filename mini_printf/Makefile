NAME = libftprintf.a

HEADER = libft.h

SRCS = ${wildcard *.c}

OBJS = ${SRCS:.c=.o}

LIB = ar -rcs

CC	= gcc

GFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: ${NAME}

%.o: %.c ${HEADER}
	$(CC) $(CFLAGS) -c $< -o $@

${NAME} : ${OBJS}
		${LIB} $@ $^

clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}

re:	fclean all

