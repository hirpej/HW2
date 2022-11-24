CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./room.o ./dht11.o ./main.o ./aphw2_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./room.o: ./room.cpp
	$(CXX) $(CXXFLAGS) ./room.cpp -o ./room.o
./dht11.o: ./dht11.cpp
	$(CXX) $(CXXFLAGS) ./dht11.cpp -o ./dht11.o
./aphw2_unittest.o: ./aphw2_unittest.cpp
	$(CXX) $(CXXFLAGS) ./aphw2_unittest.cpp -o ./aphw2_unittest.o
./main.o: ./main.cpp
	$(CXX) $(CXXFLAGS) ./main.cpp -o ./main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
