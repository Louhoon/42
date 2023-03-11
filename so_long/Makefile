# # **************************************************************************** #
# #                                                                              #
# #                                                         ::::::::             #
# #    Makefile                                           :+:    :+:             #
# #                                                      +:+                     #
# #    By: lvoisin- <lvoisin-@student.codam.nl>         +#+                      #
# #                                                    +#+                       #
# #    Created: 2023/03/11 10:22:16 by lvoisin-      #+#    #+#                  #
# #    Updated: 2023/03/11 10:28:48 by lvoisin-      ########   odam.nl          #
# #                                                                              #
# # **************************************************************************** #

NAME	:= so_long
CFLAGS	:= -Wextra -Wall -Werror -Wunreachable-code -Ofast
LIBMLX	:= ./MLX42/build/

HEADERS	:= -I ./include -I./libft
LIBS	:= $(LIBMLX)/libmlx42.a -ldl -lglfw3 -pthread -lm -framework Cocoa -framework OpenGL -framework IOKit
SRCS	:= test.c
LIBFT = libft
OBJS	:= ${SRCS:.c=.o}

all: libmlx $(NAME)

libmlx:
	@cmake $(LIBMLX) -B $(LIBMLX) && make -C $(LIBMLX) -j4

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)\n"

$(NAME): $(OBJS)
	@echo [Compiling libft ...]
	@$(MAKE) -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@$(MAKE) clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)/libft.a

re: fclean $(NAME)
.PHONY: all, clean, fclean, re, libmlx