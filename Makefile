# Variables
SRC_DIR = src
OUT_DIR = target
TST_DIR = test
TST_FILE = input.txt
CXX = g++
CXXFLAGS = -g -Wall -O2

# Get the list of source files
SOURCES := $(wildcard $(SRC_DIR)/P[0-9][0-9][0-9][0-9].cpp)

# Determine the target executable names from the source filenames
TARGETS := $(SOURCES:$(SRC_DIR)/%.cpp=$(OUT_DIR)/%)

# Pattern rule for building executables
$(OUT_DIR)/%: $(SRC_DIR)/%.cpp | $(OUT_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# Default rule
all: $(TARGETS)

# Init target and test directories
init:
	mkdir -p $(OUT_DIR)
	mkdir -p $(TST_DIR)
	touch $(TST_DIR)/$(TST_FILE)

# Pattern rule for running executables under a specific directory
run_%: $(OUT_DIR)/%
	./$< < $(TST_DIR)/$(TST_FILE)

# Clean rule
clean:
	rm -rf $(OUT_DIR) $(TST_DIR)

# Phony targets
.PHONY: all init clean run_%
