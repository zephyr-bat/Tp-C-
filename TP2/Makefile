# Makefile 

CXX        = g++
CXXFLAGS   = -Wall -Wextra -std=c++0x
LDFLAGS    = -lm
SRCS       = ClientTp2.cpp Produit.cpp Main.cpp Magasin.cpp Commande.cpp 
OBJS       = $(SRCS:.cpp=.o)
TARGET     = Main
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
