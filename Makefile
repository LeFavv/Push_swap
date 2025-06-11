# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 15:41:54 by vafavard          #+#    #+#              #
#    Updated: 2025/06/11 19:42:56 by vafavard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_PATH = sources/

SRCS_FILES = error.c init.c lst_func.c push_swap.c \
		push.c reverse_rotate.c rotate.c sort_more.c \
		sort.c swap.c utils.c utils2.c
SRCS = $(addprefix $(SRC_PATH), $(SRCS_FILES))
OBJS        = $(SRCS:.c=.o)
INCLUDES    = -Iincludes
PRINTF_PATH = ft_printf
PRINTF_ARCHIVE = $(PRINTF_PATH)/libftprintf.a

all: $(NAME)

$(PRINTF_ARCHIVE):
	$(MAKE) -C $(PRINTF_PATH)

$(NAME): $(OBJS) $(PRINTF_ARCHIVE)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(PRINTF_ARCHIVE) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(PRINTF_PATH) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(PRINTF_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean reb