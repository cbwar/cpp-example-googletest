BUILD_DIR = build
TARGET = hello

build:
	cmake . -B$(BUILD_DIR) -DCMAKE_BUILD_TYPE=Debug -DBUILD_TESTS=OFF
	cd $(BUILD_DIR) && make -j4

release:
	cmake . -B$(BUILD_DIR) -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF
	cd $(BUILD_DIR) && make -j4

test:
	cmake . -B$(BUILD_DIR) -DCMAKE_BUILD_TYPE=Debug -DBUILD_TESTS=ON
	cd $(BUILD_DIR) && make -j4
	cd $(BUILD_DIR)/tests && ctest 

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all build test clean