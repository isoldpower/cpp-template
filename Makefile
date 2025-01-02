BUILD_DIR ?= build

rebuild:
	cmake -S . -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)
