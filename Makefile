NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
OBJ_DIR = objects

GREEN = \033[0;32m
BLUE = \033[0;34m
YELLOW = \033[1;33m
RESET = \033[0m

FILES = $(SRC_DIR)/ft_atoc.c \
		$(SRC_DIR)/ft_atod.c \
		$(SRC_DIR)/ft_atoi.c \
		$(SRC_DIR)/ft_atoi_base.c \
		$(SRC_DIR)/ft_bzero.c \
		$(SRC_DIR)/ft_calloc.c \
		$(SRC_DIR)/ft_isalnum.c \
		$(SRC_DIR)/ft_isalpha.c \
		$(SRC_DIR)/ft_isascii.c \
		$(SRC_DIR)/ft_isdigit.c \
		$(SRC_DIR)/ft_isdouble.c \
		$(SRC_DIR)/ft_isint.c \
		$(SRC_DIR)/ft_isprint.c \
		$(SRC_DIR)/ft_itoa.c \
		$(SRC_DIR)/ft_lstadd_back.c \
		$(SRC_DIR)/ft_lstadd_front.c \
		$(SRC_DIR)/ft_lstclear.c \
		$(SRC_DIR)/ft_lstdelone.c \
		$(SRC_DIR)/ft_lstiter.c \
		$(SRC_DIR)/ft_lstlast.c \
		$(SRC_DIR)/ft_lstmap.c \
		$(SRC_DIR)/ft_lstnew.c \
		$(SRC_DIR)/ft_lstsize.c \
		$(SRC_DIR)/ft_memchr.c \
		$(SRC_DIR)/ft_memcmp.c \
		$(SRC_DIR)/ft_memcpy.c \
		$(SRC_DIR)/ft_memmove.c \
		$(SRC_DIR)/ft_memset.c \
		$(SRC_DIR)/ft_printf.c \
		$(SRC_DIR)/ft_putchar_fd.c \
		$(SRC_DIR)/ft_putchar.c \
		$(SRC_DIR)/ft_putendl_fd.c \
		$(SRC_DIR)/ft_puthexa.c \
		$(SRC_DIR)/ft_putnbr_fd.c \
		$(SRC_DIR)/ft_putnbr.c \
		$(SRC_DIR)/ft_putptr.c \
		$(SRC_DIR)/ft_putptrhexa.c \
		$(SRC_DIR)/ft_putstr_fd.c \
		$(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_putunsigned.c \
		$(SRC_DIR)/ft_split.c \
		$(SRC_DIR)/ft_strchr.c \
		$(SRC_DIR)/ft_strdup.c \
		$(SRC_DIR)/ft_striteri.c \
		$(SRC_DIR)/ft_strjoin.c \
		$(SRC_DIR)/ft_strlcat.c \
		$(SRC_DIR)/ft_strlcpy.c \
		$(SRC_DIR)/ft_strlen.c \
		$(SRC_DIR)/ft_strmapi.c \
		$(SRC_DIR)/ft_strncmp.c \
		$(SRC_DIR)/ft_strnstr.c \
		$(SRC_DIR)/ft_strrchr.c \
		$(SRC_DIR)/ft_strtrim.c \
		$(SRC_DIR)/ft_substr.c \
		$(SRC_DIR)/ft_tolower.c \
		$(SRC_DIR)/ft_toupper.c \
		$(SRC_DIR)/get_next_line.c \

OBJ = $(FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Règles
all: $(NAME)
	@echo "$(GREEN)"
	@echo "=============================="
	@echo " ✅ Build successful ! 😎"
	@echo "==============================$(RESET)"

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# Compilation des .o dans le dossier objects
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)> $< compiled ✔️$(RESET)"

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(BLUE)🧹 Object files removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)🧹 Library removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
