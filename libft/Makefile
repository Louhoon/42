SRCS			=	ft_isalnum.c ft_isprint.c ft_bzero.c ft_isascii.c \
					ft_strlen.c ft_isdigit.c ft_isalpha.c ft_memset.c \
					ft_memcpy.c ft_memmove.c
					
OBJS			= $(SRCS:.c=.o)


CC				= @gcc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a
OBJCS_DIR		= build

all:			$(NAME)
				

$(NAME):		$(OBJS)
				@ar -crs $(NAME) $(OBJS)
				@echo	✅Done!

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				@echo	🧼Cleaned!

re:				fclean $(NAME)

testpoint.exe:	$(NAME)
	@gcc $(NAME) $(OJBS) main.c

.PHONY:			all clean fclean re