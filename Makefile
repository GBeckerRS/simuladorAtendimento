#=====================================================
CC = g++
CFLAGS = -Wall -Wextra -g -ggdb -std=c++0x
LFLAGS=
#=====================================================
APP = sim
SRC_DIR = src
INC_DIR = $(SRC_DIR)/inc
OBJ_DIR = obj
BIN_DIR = bin
EXT = cpp
#=====================================================
FONTES = src/main.cpp src/aplicacao.cpp src/ordenacao.cpp
TEMP = $(subst $(SRC_DIR),$(OBJ_DIR),$(FONTES))	# Auxiliar
OBJETOS = $(TEMP:.$(EXT)=.o)	# Arquivos Objeto
#=====================================================

$(APP) : $(OBJETOS)
	@echo Linking...
	@$(CC) -o $(BIN_DIR)/$(APP) $(OBJETOS) $(LFLAGS)
	@echo Built successfully!

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.$(EXT)
	@echo Build $<...
	@$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ -c $<

build b : $(OBJETOS)

list l : 
	@echo Arquivos do projeto:
	@echo $(FONTES)

clean c : 
	@echo Cleaning...
	@rm -rf $(OBJ_DIR)/*.o
	@rm -rf $(BIN_DIR)/$(APP)

init i :
	@echo Criando o diretorio $(SRC_DIR)
	@mkdir $(SRC_DIR)
	@echo Criando o diretorio $(INC_DIR)
	@mkdir $(INC_DIR)
	@echo Criando o diretorio $(OBJ_DIR)
	@mkdir $(OBJ_DIR)
	@echo Criando o diretorio $(BIN_DIR)
	@mkdir $(BIN_DIR)

debug d :
	@echo Executando $(BIN_DIR)/$(APP)
	@gdb $(BIN_DIR)/$(APP)
