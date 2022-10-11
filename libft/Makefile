SRCS			=	ft_isalnum.c ft_isprint.c ft_bzero.c ft_isascii.c \
					ft_strlen.c ft_isdigit.c ft_isalpha.c ft_memset.c \
					ft_memcpy.c ft_memmove.c ft_strchr.c ft_toupper.c \
					ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
					ft_memcmp.c ft_strlcpy.c ft_calloc.c
					
OBJS			= $(SRCS:.c=.o)


CC				= @gcc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)
				

$(NAME):		$(OBJS)
				@ar -crs $(NAME) $(OBJS)
				@echo	✅Done!

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)
				@echo	🧼Cleaned!

run: 
				
				@gcc $(CFLAGS) *.c
				@./a.out

re:				fclean $(NAME)

.PHONY:			all clean fclean re