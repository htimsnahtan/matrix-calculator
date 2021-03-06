CXX = g++
CXXFLAGS = -std=c++0x

OBJS = determinant.o readMatrix.o main.o

SRCS = determinant.cpp readMatrix.cpp main.cpp

HEADERS = determinant.hpp readMatrix.hpp

matrixCalculator: ${OBJS} ${HEADERS}
	${CXX} ${SRCS} -o matrixCalculator
	
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
	
clean:
	rm ${OBJS}
