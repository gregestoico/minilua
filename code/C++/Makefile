CXX=g++
CXXFLAGS=-g -ggdb -O2 -Wall

TARGET=minilua
OBJS=minilua.o

all: $(TARGET)

clean:
	rm -rf $(TARGET) $(OBJS)

install:
	cp $(TARGET) /usr/local/bin

minilua.o:

$(TARGET): $(OBJS)
			$(CXX) -o $(TARGET) $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<
