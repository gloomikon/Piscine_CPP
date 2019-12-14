# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/28 12:53:21 by mzhurba           #+#    #+#              #
#    Updated: 2019/12/14 15:17:29 by mzhurba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = openMind

SRC = main.cpp Instructions.cpp MindOpen.cpp Program.cpp

OBJ = $(SRC:.cpp=.o)
OBJDIR = obj

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

CC = clang++ -std=c++2a
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@
	@echo "💾  [$(NAME) - ready] 💾"

$(OBJDIR)/%.o: %.cpp
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "🗑  [$(NAME) - fclean] 🗑"

re: fclean all