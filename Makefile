BUILD_DIR = build
TARGET = hello
SOURCES = src/main.cpp src/math.cpp src/math.h

all: $(BUILD_DIR)/$(TARGET) build

$(BUILD_DIR)/$(TARGET): $(SOURCES)
	cmake . -B$(BUILD_DIR)

build:
	cd $(BUILD_DIR) && make -j4

clean:
	rm -rf $(BUILD_DIR)

test:
	cmake . -B$(BUILD_DIR) -DBUILD_TESTS=ON
	cd $(BUILD_DIR) && make -j4
	cd $(BUILD_DIR)/tests && ctest 

.PHONY: all build test clean