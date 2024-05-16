SRC			=	mandatory_src/ft_isalpha.c mandatory_src/ft_isdigit.c mandatory_src/ft_isalnum.c mandatory_src/ft_isascii.c mandatory_src/ft_isprint.c mandatory_src/ft_strlen.c \
				mandatory_src/ft_memset.c mandatory_src/ft_bzero.c mandatory_src/ft_putstr_fd.c mandatory_src/ft_putendl_fd.c mandatory_src/ft_strchr.c mandatory_src/ft_strrchr.c \
				mandatory_src/ft_memcpy.c mandatory_src/ft_memmove.c mandatory_src/ft_strlcpy.c mandatory_src/ft_strlcat.c mandatory_src/ft_toupper.c mandatory_src/ft_tolower.c \
				mandatory_src/ft_strncmp.c mandatory_src/ft_memchr.c mandatory_src/ft_memcmp.c mandatory_src/ft_strnstr.c mandatory_src/ft_atoi.c mandatory_src/ft_calloc.c \
				mandatory_src/ft_strjoin.c mandatory_src/ft_strtrim.c mandatory_src/ft_split.c mandatory_src/ft_strmapi.c mandatory_src/ft_striteri.c mandatory_src/ft_putchar_fd.c \
				mandatory_src/ft_strdup.c mandatory_src/ft_itoa.c mandatory_src/ft_substr.c mandatory_src/ft_putnbr_fd.c 
OBJS		=	${SRC:.c=.o}

SRC_BONUS 	=	bonus_src/ft_lstnew_bonus.c bonus_src/ft_lstadd_front_bonus.c bonus_src/ft_lstsize_bonus.c bonus_src/ft_lstlast_bonus.c \
				bonus_src/ft_lstadd_back_bonus.c bonus_src/ft_lstdelone_bonus.c bonus_src/ft_lstclear_bonus.c bonus_src/ft_lstiter_bonus.c \
				bonus_src/ft_lstmap_bonus.c
OBJS_BONUS 	=	${SRC_BONUS:.c=.o}

LIBC 		=	ar -rcs
CFLAGS		=	-Wall -Wextra -Werror
CC			=	cc
RM			=	rm -f
NAME		=	libft.a

all:	${NAME}

${NAME}:	${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus:	${OBJS_BONUS}
	${LIBC} ${NAME} ${OBJS_BONUS}

%.o:	%.c libft.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} $(OBJS) $(OBJS_BONUS)

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	clean fclean all bonus re

