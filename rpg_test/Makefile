LIGHT_RED		=$(shell tput -Txterm setaf 1)
LIGHT_GREEN		=$(shell tput -Txterm setaf 2)
LILAS			=$(shell tput -Txterm setaf 5)
LIGHT_CYAN		=$(shell tput -Txterm setaf 6)
RESET			="\033[0m"

PATH_OBJS 		= ./objs/

FILES			= main.cpp prop.cpp character.cpp \

OBJS 			= $(patsubst %.cpp, $(PATH_OBJS)%.o, $(FILES))

CC 				= g++
# FLAGS 			= -Wall -Wextra -Werror
RLFLAGS 		= -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -DPLATFORM_DESKTOP

NAME 			= rpg

all: $(NAME)

$(NAME): msg_in $(OBJS) msg_out
	@g++ $(OBJS) $(RLFLAGS) -o $(NAME)

$(PATH_OBJS)%.o:	%.cpp
	@mkdir -p $(PATH_OBJS)
	@$(CC) $(FLAGS) -I. -c $< -o $@
	@printf "$(LIGHT_GREEN)■"

msg_in:
	@echo $(LILAS)"COMPILATION DE MINISHELL..."$(RESET)

msg_out:
	@echo '\n'$(LIGHT_GREEN)"COMPILATION COMPLETE :)"$(RESET)

clean:
	@rm -f $(OBJS)
	@rm -fr ./objs
	@echo $(LIGHT_GREEN)"BYE BYE"$(RESET)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.Phony: all make_lib obj push pull clean fclean re
