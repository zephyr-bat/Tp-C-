# Makefile 

CXX        = clang++
CXXFLAGS   = -Wall -Wextra -std=c++0x
LDFLAGS    = -lm
SRCS       = Client.cpp MainTestClient.cpp
OBJS       = $(SRCS:.cpp=.o)
TARGET     = MainTestClient
DEPFLAGS   = -MMD -MP
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)