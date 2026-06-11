CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2
TARGET   := krdemo
OBJS     := main.o mathutils.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp mathutils.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
