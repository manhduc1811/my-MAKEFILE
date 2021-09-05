# Makefile

PATH_OUTPUT = output

INC_DIRS = .\include
SRC_DIRS = .\source

#SRC_FILES := $(wildcard $(SRC_DIRS)/*)
SRC_FILES := $(foreach SRC_DIRS,$(SRC_DIRS),$(wildcard $(SRC_DIRS)/*))
INC_FILES := $(foreach INC_DIRS,$(INC_DIRS),$(wildcard $(INC_DIRS)/*))

OJB_FILES := $(notdir $(SRC_FILES))
OJB_FILES := $(subst .c,.o,$(OJB_FILES))
PATH_OJB := $(foreach OJB_FILES,$(OJB_FILES),$(PATH_OUTPUT)/$(OJB_FILES))
#main.o: source/main.c
#	gcc -c source/main.c -o output/main.o

#search path .c and .h files
vpath %.c $(SRC_DIRS)
vpath %.h $(INC_DIRS)

all: $(OJB_FILES)

#generate object files
%.o: %.c $(INC_FILES)
	gcc -I$(INC_DIRS) -c $< -o $(PATH_OUTPUT)/$@
	
#generate executable file and run 	
build: $(OJB_FILES)
	@gcc $(PATH_OJB) -o $(PATH_OUTPUT)/main.exe
	@./$(PATH_OUTPUT)/main.exe
clean:
	@rm $(PATH_OUTPUT)/*

print-%:
	@echo $($(subst print-,,$@))
