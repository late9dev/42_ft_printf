NAME = libftprintf.a

SRCS = ft_printf.c \
       ft_printf_c.c \
       ft_printf_s.c \
       ft_printf_p.c \
       ft_printf_n.c \
       ft_printf_u.c \
       ft_printf_h.c \
       ft_printf_percent.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT = libft

LIBFT_LIB = $(LIBFT)/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp $(LIBFT_LIB) ./$(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

