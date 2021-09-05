CC=gcc

all: fft

fft: myFFTv4.o
	$(CC) myFFTv4.o -o fft -lm
	
myFFTv4.o: myFFTv4.c
	$(CC) -c myFFTv4.c
	
clean:
	rm -rf *o fft
	
run:
	./fft test32f.txt 32
