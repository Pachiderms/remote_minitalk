NAME = server.exe

CC = gcc

INCLUDES = -I ./includes

GREEN			= \033[0;32m
RED				= \033[0;31m
RESET			= \033[0m

PRINTF_DIR = ./printf
PRINTF_LIB = ${PRINTF_DIR}/libftprintf.a

SERVER_DIR = ./server/
CLIENT_DIR = ./client/

SERVER_SRC = main.c signal_handler.c

CLIENT_SRC = main.c

SERVER_OBJS = ${addprefix ${SERVER_DIR}, ${SERVER_SRC:.c=.o}}
CLIENT_OBJS = ${addprefix ${CLIENT_DIR}, ${CLIENT_SRC:.c=.o}}

all : ${NAME}

${NAME} : ${SERVER_OBJS} ${CLIENT_OBJS}
		make -C ${PRINTF_DIR}
		${CC} ${PRINTF_LIB} ${SERVER_OBJS} ${INCLUDES} -o ${NAME}

clean:
		rm -f ${SERVER_OBJS} ${CLIENT_OBJS}
			make clean -C ${PRINTF_DIR}
			@echo "${SERVER_OBJS} ${CLIENT_OBJS} from ${NAME} deleted${RESET}"
			@echo

fclean:	clean
		rm -f ${NAME}
		@echo "${NAME}: ${RED}${NAME} deleted${RESET}"
		@echo

re:	fclean all

.PHONY:	all clean fclean re