CFLAGS = -std=c++17 -O2

LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lwayland-client -lwayland-cursor -lwayland-egl -lxkbcommon

VulkanTest: *.cpp *.hpp
	g++ $(CFLAGS) -o VulkanTest *.cpp $(LDFLAGS)

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest

.PHONY: test clean