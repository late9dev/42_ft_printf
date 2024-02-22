# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 20:49:40 by lwarlop           #+#    #+#              #
#    Updated: 2024/02/22 01:05:11 by lwarlop          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_DIR	=	src/
OBJS_DIR	=	obj/

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

RMFLAGS		=	rm -rf
ARFLAGS		=	ar -rcs

SRCS		=	$(wildcard $(SRCS_DIR)*.c)

TOTAL_FILES	:=	$(words $(SRCS))

OBJS		=	$(SRCS:$(SRCS_DIR)%.c=$(OBJS_DIR)%.o)

LIBFT = libft

LIBFT_LIB = $(LIBFT)/libft.a

RESET = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all:		$(NAME)

$(NAME):	$(OBJS)
	@make -C $(LIBFT)
	@cp $(LIBFT_LIB) ./$(NAME)
	@$(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(CYAN) PRINTF $(RESET) : $(GREEN) COMPILED ($(TOTAL_FILES) files) $(RESET)"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(@D)
	@echo "$(CYAN) PRINTF $(RESET) : $(YELLOW) Compiling $< $(RESET)"
	@$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	@$(RMFLAGS) $(OBJS_DIR)
	@make -C $(LIBFT) clean
	@echo "$(CYAN) PRINTF $(RESET) : $(RED) CLEAN $(RESET)"

fclean:	clean
	@$(RM) $(NAME)
	@make -C $(LIBFT) fclean
	@echo "$(CYAN) PRINTF $(RESET) : $(RED) FULL CLEAN $(RESET)"

re:	fclean all

.PHONY: all clean fclean re
