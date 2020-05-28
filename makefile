CXX = g++
CXXFLAGS = -Wall -g
LDFLAGS =

TARGETS = change strings subseq
MAINS = $(addsuffix .o, $(TARGETS))
OBJ = $(MAINS)

.PHONY: all clean

all: $(TARGETS)

$(OBJ): %.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

$(TARGETS): % : %.o
	$(CXX) -o $@ $< $(CXXFLAGS)

clean: 
	rm -f  $(TARGETS) $(OBJ)
