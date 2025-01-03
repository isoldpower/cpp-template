BUILD_DIR ?= build

rebuild:
	cmake -S . -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

test:
	GTEST_COLOR=1 ctest --test-dir $(BUILD_DIR) --output-on-failure
