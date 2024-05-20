# Variables
progname := applesC
compiler := gcc
CXXFLAGS := -Wall -Wextra
LDFLAGS := -lm
SRC := src/main.c src/lexer.c

# Directories
build_dir := build/linux
src_dir := src

.PHONY: all clean

all: | $(build_dir)
	@echo "Building..."
	$(compiler) $(CXXFLAGS) $(SRC) $(LDFLAGS) -o $(build_dir)/$(progname)
	@echo "Launching"
	chmod u+x $(build_dir)/$(progname)
	$(build_dir)/$(progname)

$(build_dir):
	@echo "Creating Build Directory"
	mkdir -p $(build_dir)

clean:
	@echo "Cleaning..."
	rm -rf $(build_dir)