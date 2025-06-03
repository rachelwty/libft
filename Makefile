SRCS_MANDATORY = ft_atoi.c \
                ft_bzero.c \
                ft_calloc.c \
                ft_memchr.c \
                ft_memcmp.c \
                ft_memcpy.c \
                ft_memmove.c \
                ft_strdup.c \
                ft_strjoin.c \
                ft_strlcat.c \
                ft_strlcpy.c \
                ft_strlen.c \
                ft_strnstr.c \
                ft_substr.c \
                ft_isalpha.c \
                ft_isdigit.c \
                ft_isalnum.c \
                ft_isascii.c \
                ft_isprint.c \
                ft_memset.c \
                ft_toupper.c \
                ft_tolower.c \
                ft_strchr.c \
                ft_strrchr.c \
                ft_strncmp.c \
                ft_strtrim.c \
                ft_split.c \
                ft_itoa.c \
                ft_strmapi.c \
                ft_striteri.c \
                ft_putchar_fd.c \
                ft_putstr_fd.c \
                ft_putendl_fd.c \
                ft_putnbr_fd.c

SRCS_BONUS =  ft_lstnew_bonus.c \
              ft_lstadd_front_bonus.c \
              ft_lstsize_bonus.c \
              ft_lstlast_bonus.c \
              ft_lstadd_back_bonus.c \
              ft_lstdelone_bonus.c \
              ft_lstclear_bonus.c \
              ft_lstiter_bonus.c \
              ft_lstmap_bonus.c

OBJS_MANDATORY = $(SRCS_MANDATORY:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc
AR = ar
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.
ARFLAGS = rcs

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS_MANDATORY)
	@echo "Archiving mandatory functions into $(NAME)..."
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_MANDATORY)
	@echo "$(NAME) with mandatory functions is ready."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: all $(OBJS_BONUS)
	@echo "Adding bonus functions to $(NAME)..."
	$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)
	@echo "Bonus functions added to $(NAME)."

clean:
	@echo "Cleaning object files..."
	$(RM) $(OBJS_MANDATORY) $(OBJS_BONUS)
	@echo "Object files cleaned."

fclean: clean
	@echo "Cleaning $(NAME)..."
	$(RM) $(NAME)
	@echo "$(NAME) cleaned."

re: fclean all bonus

.PHONY: all bonus clean fclean re
