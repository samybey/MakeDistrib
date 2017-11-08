main: main.cpp
	mpiCC -W -Wall main.cpp -o main -std=c++11
clean:
	rm main