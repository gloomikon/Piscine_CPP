# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 23:07:02 by mzhurba           #+#    #+#              #
#    Updated: 2019/12/04 23:08:04 by mzhurba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cato9tails

SRC = main.cpp Cat.cpp

OBJ = $(SRC:.cpp=.o)
OBJDIR = obj

OBJS = $(addprefix $(OBJDIR)/, $(OBJ))

CC = clang++
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