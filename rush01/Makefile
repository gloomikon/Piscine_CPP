NAME = ft_gkrellm

SRC     := 	main.cpp \
			IMonitorDisplay.cpp \
			GraphicDisplay.cpp \
			ShellDisplay.cpp \
			IMonitorModule.cpp \
			HostnameUsernameMonitore.cpp \
			CpuMonitore.cpp \
			DateTimeMonitore.cpp \
			OsMonitore.cpp \
			MemoryMonitore.cpp \
			NetworkMonitore.cpp \
			PredictionsMonitore.cpp


OBJ     := $(SRC:.cpp=.o)

G++		:= g++ -std=c++98 \
				-I Frameworks/SDL2.framework/Versions/A/Headers \
				-F Frameworks/ \
				-I Frameworks/SDL2_ttf.framework/Versions/A/Headers \
				-F Frameworks/ \

#-Wall -Wextra -Werror <---!!!!

FLAGS 	:= -rpath Frameworks/ \
				-framework SDL2 \
				-framework SDL2_ttf \
				-lncurses

all: $(NAME)

$(NAME): $(OBJ)
	$(G++) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(G++) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
