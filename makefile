all:
	g++ gcc_summation.cxx -o gcc_summation.o -std=c++1z
	nvcc nvcc_summation.cu -o nvcc_summation.o
